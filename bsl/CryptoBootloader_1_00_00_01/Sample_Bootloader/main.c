/**
 *   Sample Bootloader project
 *
 *   Author: Lautaro Vera
 */

#include "msp430.h"
#include <stdio.h>
#include <stdint.h>

int putchar(int c)
{
    while (!(UCA0IFG & UCTXIFG));  // Wait until buffer is ready
    UCA0TXBUF = c;                 // Transmit character
    return c;
}

int _write(int file, char *ptr, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        putchar(ptr[i]);
    }
    return len;
}

void CLK_Init(void)
{
    // Startup clock system with max DCO setting ~8MHz
    CSCTL0_H = CSKEY_H;                     // Unlock CS registers
    CSCTL1 = DCOFSEL_6;           // Set DCO to 8MHz
    CSCTL2 = SELA__VLOCLK | SELS__DCOCLK | SELM__DCOCLK;
    CSCTL3 = DIVA__1 | DIVS__1 | DIVM__1;   // Set all dividers
    CSCTL0_H = 0;                           // Lock CS registers

    __delay_cycles(10000);  // Wait for clock set
}

void UART_init(void)
{
    // Configure GPIO
    P2SEL1 |= BIT0 + BIT1;              //Activate Pin for UART use
    P2SEL0 &= ~BIT0 + ~BIT1;            //Activate Pin for UART use

    // Configure USCI_A0 for UART mode
    UCA0CTLW0 = UCSWRST;                    // Put eUSCI in reset
    UCA0CTLW0 |= UCSSEL__SMCLK;             // CLK = SMCLK
    // Baud Rate calculation
    // UCBR = 8000000/1000000 = 8
    // UCOS16 = 0 (UCBR < 16)
    // Fractional portion = 0.166
    // User's Guide Table 21-4: UCBRSx = 0x00
    // UCBRFx = int ( (8-8)*16) = 0
    UCA0BRW = 8;
    UCA0MCTLW = UCBRF_0 | 0x0000;
    UCA0CTLW0 &= ~UCSWRST;                  // Initialize eUSCI
}

void app_uart(void)
{
    P3DIR |= BIT4;   // Set P3.4 as output
    P3SEL1 |= BIT4;  // Select SMCLK function
    P3SEL0 |= BIT4;

    CLK_Init();
    UART_init();

    while(1)
    {
        printf("Hello, Sample Bootloader here!\n\r");
    }
}

int main( void )
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;

  app_uart();

  return 0;
}
