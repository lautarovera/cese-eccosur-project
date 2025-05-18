/* --COPYRIGHT--,TI
 *MSP Source and Object Code Software License Agreement
 *
 *
 *IMPORTANT - PLEASE CAREFULLY READ THE FOLLOWING LICENSE AGREEMENT, WHICH IS LEGALLY BINDING.  AFTER YOU READ IT, YOU WILL BE ASKED WHETHER YOU ACCEPT AND AGREE TO ITS TERMS.  DO NOT CLICK  "I ACCEPT" UNLESS: (1) YOU WILL USE THE LICENSED MATERIALS FOR YOUR OWN BENEFIT AND PERSONALLY ACCEPT, AGREE TO AND INTEND TO BE BOUND BY THESE TERMS; OR (2) YOU ARE AUTHORIZED TO, AND INTEND TO BE BOUND BY, THESE TERMS ON BEHALF OF YOUR COMPANY.
 *
 *
 *Important - Read carefully: This Source and Object Code Software License Agreement ("Agreement") is a legal agreement between you and Texas Instruments Incorporated ("TI").  In this Agreement "you" means you personally if you will exercise the rights granted for your own benefit, but it means your company (or you on behalf of your company) if you will exercise the rights granted for your company's benefit.  The "Licensed Materials" subject to this Agreement include the software programs and any associated electronic documentation (in each case, in whole or in part) that accompany this Agreement, are set forth in the applicable software manifest and you access "on-line", as well as any updates or upgrades to such software programs or documentation, if any, provided to you at TI's sole discretion.  The Licensed Materials are specifically designed and licensed for use solely and exclusively with MSP microcontroller devices manufactured by or for TI ("TI Devices").  By installing, copying or otherwise using the Licensed Materials you agree to abide by the provisions set forth herein.  This Agreement is displayed for you to read prior to using the Licensed Materials.  If you choose not to accept or agree with these provisions, do not download or install the Licensed Materials.
 *
 *Note Regarding Possible Access to Other Licensed Materials:  The Licensed Materials may be bundled with software and associated electronic documentation, if any, licensed under terms other than the terms of this Agreement (in whole or in part, "Other Licensed Materials"), including, for example Open Source Software and/or TI-owned or third party Proprietary Software licensed under such other terms.  "Open Source Software" means any software licensed under terms requiring that (A) other software ("Proprietary Software") incorporated, combined or distributed with such software or developed using such software: (i) be disclosed or distributed in source code form; or (ii) otherwise be licensed on terms inconsistent with the terms of this Agreement, including but not limited to permitting use of the Proprietary Software on or with devices other than TI Devices, or (B) require the owner of Proprietary Software to license any of its patents to users of the Open Source Software and/or Proprietary Software incorporated, combined or distributed with such Open Source Software or developed using such Open Source Software.
 *
 *If by accepting this Agreement, you gain access to Other Licensed Materials, they will be listed in the applicable software manifest.  Your use of the Other Licensed Materials is subject to the applicable other licensing terms acknowledgements and disclaimers as specified in the applicable software manifest and/or identified or included with the Other Licensed Materials in the software bundle.  For clarification, this Agreement does not limit your rights under, or grant you rights that supersede, the terms of any applicable Other Licensed Materials license agreement.  If any of the Other Licensed Materials is Open Source Software that has been provided to you in object code only under terms that obligate TI to provide to you or show you where you can access the source code versions of such Open Source Software, TI will provide to you, or show you where you can access, such source code if you contact TI at Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager, Embedded Processing.  In the event you choose not to accept or agree with the terms in any applicable Other Licensed Materials license agreement, you must terminate this Agreement.
 *
 *1.	License Grant and Use Restrictions.
 *
 *a.	Licensed Materials License Grant.  Subject to the terms of this Agreement, TI hereby grants to you a limited, non-transferable, non-exclusive, non-assignable, non-sublicensable, fully paid-up and royalty-free license to:
 *
 *			i.	Limited Source Code License:  make copies, prepare derivative works, display internally and use internally the Licensed Materials provided to you in source code for the sole purpose of developing object and executable versions of such Licensed Materials, or any derivative thereof, that execute solely and exclusively on TI Devices, for end use in Licensee Products, and maintaining and supporting such Licensed Materials, or any derivative thereof, and Licensee Products.  For purposes of this Agreement, "Licensee Product" means a product that consists of both hardware, including one or more TI Devices, and software components, including only executable versions of the Licensed Materials that execute solely and exclusively on such TI Devices.
 *
 *			ii.	Object Code Evaluation, Testing and Use License:  make copies, display internally, distribute internally and use internally the Licensed Materials in object code for the sole purposes of evaluating and testing the Licensed Materials and designing and developing Licensee Products, and maintaining and supporting the Licensee Products;
 *
 *			iii.	Demonstration License:  demonstrate to third parties the Licensed Materials executing solely and exclusively on TI Devices as they are used in Licensee Products, provided that such Licensed Materials are demonstrated in object or executable versions only and
 *
 *		iv.	Production and Distribution License:  make, use, import, export and otherwise distribute the Licensed Materials as part of a Licensee Product, provided that such Licensee Products include only embedded executable copies of such Licensed Materials that execute solely and exclusively on TI Devices.
 *
 *	b.	Contractors.  The licenses granted to you hereunder shall include your on-site and off-site contractors (either an individual or entity), while such contractors are performing work for or providing services to you, provided that such contractors have executed work-for-hire agreements with you containing applicable terms and conditions consistent with the terms and conditions set forth in this Agreement and provided further that you shall be liable to TI for any breach by your contractors of this Agreement to the same extent as you would be if you had breached the Agreement yourself.
 *
 *	c.	No Other License.  Nothing in this Agreement shall be construed as a license to any intellectual property rights of TI other than those rights embodied in the Licensed Materials provided to you by TI.  EXCEPT AS PROVIDED HEREIN, NO OTHER LICENSE, EXPRESS OR IMPLIED, BY ESTOPPEL OR OTHERWISE, TO ANY OTHER TI INTELLECTUAL PROPERTY RIGHTS IS GRANTED HEREIN.
 *
 *	d.	Covenant not to Sue.  During the term of this Agreement, you agree not to assert a claim against TI or its licensees that the Licensed Materials infringe your intellectual property rights.
 *
 *	e.	Restrictions.  You shall maintain the source code versions of the Licensed Materials under password control protection and shall not disclose such source code versions of the Licensed Materials, to any person other than your employees and contractors whose job performance requires access.  You shall not use the Licensed Materials with a processing device other than a TI Device, and you agree that any such unauthorized use of the Licensed Materials is a material breach of this Agreement.  You shall not use the Licensed Materials for the purpose of analyzing or proving infringement of any of your patents by either TI or TI's customers.  Except as expressly provided in this Agreement, you shall not copy, publish, disclose, display, provide, transfer or make available the Licensed Materials to any third party and you shall not sublicense, transfer, or assign the Licensed Materials or your rights under this Agreement to any third party.  You shall not mortgage, pledge or encumber the Licensed Materials in any way.  You may use the Licensed Materials with Open Source Software or with software developed using Open Source Software tools provided you do not incorporate, combine or distribute the Licensed Materials in a manner that subjects the Licensed Materials to any license obligations or any other intellectual property related terms of any license governing such Open Source Software.
 *
 *	f.	Termination.  This Agreement is effective on the date the Licensed Materials are delivered to you together with this Agreement and will remain in full force and effect until terminated.  You may terminate this Agreement at any time by written notice to TI.  Without prejudice to any other rights, if you fail to comply with the terms of this Agreement or you are acquired, TI may terminate your right to use the Licensed Materials upon written notice to you.  Upon termination of this Agreement, you will destroy any and all copies of the Licensed Materials in your possession, custody or control and provide to TI a written statement signed by your authorized representative certifying such destruction. Except for Sections 1(a), 1(b) and 1(d), all provisions of this Agreement shall survive termination of this Agreement.
 *
 *2.	Licensed Materials Ownership.  The Licensed Materials are licensed, not sold to you, and can only be used in accordance with the terms of this Agreement.  Subject to the licenses granted to you pursuant to this Agreement, TI and its licensors own and shall continue to own all right, title and interest in and to the Licensed Materials, including all copies thereof.  You agree that all fixes, modifications and improvements to the Licensed Materials conceived of or made by TI that are based, either in whole or in part, on your feedback, suggestions or recommendations are the exclusive property of TI and all right, title and interest in and to such fixes, modifications or improvements to the Licensed Materials will vest solely in TI.  Moreover, you acknowledge and agree that when your independently developed software or hardware components are combined, in whole or in part, with the Licensed Materials, your right to use the combined work that includes the Licensed Materials remains subject to the terms and conditions of this Agreement.
 *
 *3.	Intellectual Property Rights.
 *
 *	a.	The Licensed Materials contain copyrighted material, trade secrets and other proprietary information of TI and its licensors and are protected by copyright laws, international copyright treaties, and trade secret laws, as well as other intellectual property laws.  To protect TI's and its licensors' rights in the Licensed Materials, you agree, except as specifically permitted by statute by a provision that cannot be waived by contract, not to "unlock", decompile, reverse engineer, disassemble or otherwise translate to a human-perceivable form any portions of the Licensed Materials provided to you in object code format only, nor permit any person or entity to do so.  You shall not remove, alter, cover, or obscure any confidentiality, trade secret, trade mark, patent, copyright or other proprietary notice or other identifying marks or designs from any component of the Licensed Materials and you shall reproduce and include in all copies of the Licensed Materials the copyright notice(s) and proprietary legend(s) of TI and its licensors as they appear in the Licensed Materials.  TI reserves all rights not specifically granted under this Agreement.
 *
 *	b.	Certain Licensed Materials may be based on industry recognized standards or software programs published by industry recognized standards bodies and certain third parties may claim to own patents, copyrights, and other intellectual property rights that cover implementation of those standards.  You acknowledge and agree that this Agreement does not convey a license to any such third party patents, copyrights, and other intellectual property rights and that you are solely responsible for any patent, copyright, or other intellectual property right claim that relates to your use or distribution of the Licensed Materials or your use or distribution of your products that include or incorporate the Licensed Materials.  Moreover, you acknowledge that you are responsible for any fees or royalties that may be payable to any third party based on such third party's interests in the Licensed Materials or any intellectual property rights that cover implementation of any industry recognized standard, any software program published by any industry recognized standards bodies or any other proprietary technology.
 *
 *4.	Confidential Information.  You acknowledge and agree that the Licensed Materials contain trade secrets and other confidential information of TI and its licensors.  You agree to use the Licensed Materials solely within the scope of the licenses set forth herein, to maintain the Licensed Materials in strict confidence, to use at least the same procedures and degree of care that you use to prevent disclosure of your own confidential information of like importance but in no instance less than reasonable care, and to prevent disclosure of the Licensed Materials to any third party, except as may be necessary and required in connection with your rights and obligations hereunder; provided, however, that you may not provide the Licensed Materials to any business organization or group within your company or to customers or contractors that design or manufacture semiconductors unless TI gives written consent.  You agree to obtain executed confidentiality agreements with your employees and contractors having access to the Licensed Materials and to diligently take steps to enforce such agreements in this respect.  TI may disclose your contact information to TI's licensors.
 *
 *5.	Warranties and Limitations.  THE LICENSED MATERIALS ARE PROVIDED "AS IS".  FURTHERMORE, YOU ACKNOWLEDGE AND AGREE THAT THE LICENSED MATERIALS HAVE NOT BEEN TESTED OR CERTIFIED BY ANY GOVERNMENT AGENCY OR INDUSTRY REGULATORY ORGANIZATION OR ANY OTHER THIRD PARTY ORGANIZATION.  YOU AGREE THAT PRIOR TO USING, INCORPORATING OR DISTRIBUTING THE LICENSED MATERIALS IN OR WITH ANY COMMERCIAL PRODUCT THAT YOU WILL THOROUGHLY TEST THE PRODUCT AND THE FUNCTIONALITY OF THE LICENSED MATERIALS IN OR WITH THAT PRODUCT AND BE SOLELY RESPONSIBLE FOR ANY PROBLEMS OR FAILURES.
 *
 *TI AND ITS LICENSORS MAKE NO WARRANTY OR REPRESENTATION, EITHER EXPRESS, IMPLIED OR STATUTORY, REGARDING THE LICENSED MATERIALS, INCLUDING BUT NOT LIMITED TO ANY IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT OF ANY THIRD PARTY PATENTS, COPYRIGHTS, TRADE SECRETS OR OTHER INTELLECTUAL PROPERTY RIGHTS.  YOU AGREE TO USE YOUR INDEPENDENT JUDGMENT IN DEVELOPING YOUR PRODUCTS.  NOTHING CONTAINED IN THIS AGREEMENT WILL BE CONSTRUED AS A WARRANTY OR REPRESENTATION BY TI TO MAINTAIN PRODUCTION OF ANY TI SEMICONDUCTOR DEVICE OR OTHER HARDWARE OR SOFTWARE WITH WHICH THE LICENSED MATERIALS MAY BE USED.
 *
 *IN NO EVENT SHALL TI OR ITS LICENSORS, BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL, PUNITIVE OR CONSEQUENTIAL DAMAGES, HOWEVER CAUSED, ON ANY THEORY OF LIABILITY, IN CONNECTION WITH OR ARISING OUT OF THIS AGREEMENT OR THE USE OF THE LICENSED MATERIALS REGARDLESS OF WHETHER TI HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.  EXCLUDED DAMAGES INCLUDE, BUT ARE NOT LIMITED TO, COST OF REMOVAL OR REINSTALLATION, OUTSIDE COMPUTER TIME, LABOR COSTS, LOSS OF DATA, LOSS OF GOODWILL, LOSS OF PROFITS, LOSS OF SAVINGS, OR LOSS OF USE OR INTERRUPTION OF BUSINESS.  IN NO EVENT WILL TI'S OR ITS LICENSORS' AGGREGATE LIABILITY UNDER THIS AGREEMENT OR ARISING OUT OF YOUR USE OF THE LICENSED MATERIALS EXCEED FIVE HUNDRED U.S. DOLLARS (US$500).
 *
 *	Because some jurisdictions do not allow the exclusion or limitation of incidental or consequential damages or limitation on how long an implied warranty lasts, the above limitations or exclusions may not apply to you.
 *
 *6.	Indemnification Disclaimer.  YOU ACKNOWLEDGE AND AGREE THAT TI SHALL NOT BE LIABLE FOR AND SHALL NOT DEFEND OR INDEMNIFY YOU AGAINST ANY THIRD PARTY INFRINGEMENT CLAIM THAT RELATES TO OR IS BASED ON YOUR MANUFACTURE, USE, OR DISTRIBUTION OF THE LICENSED MATERIALS OR YOUR MANUFACTURE, USE, OFFER FOR SALE, SALE, IMPORTATION OR DISTRIBUTION OF YOUR PRODUCTS THAT INCLUDE OR INCORPORATE THE LICENSED MATERIALS.
 *
 *7.	No Technical Support.  TI and its licensors are under no obligation to install, maintain or support the Licensed Materials.
 *
 *8.	Notices.  All notices to TI hereunder shall be delivered to Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager - Embedded Processing, with a copy to Texas Instruments Incorporated, 13588 N. Central Expressway, Mail Station 3999, Dallas, Texas 75243, Attention: Law Department - Embedded Processing.  All notices shall be deemed served when received by TI.
 *
 *9.	Export Control.  The Licensed Materials are subject to export control under the U.S. Commerce Department's Export Administration Regulations ("EAR").  Unless prior authorization is obtained from the U.S. Commerce Department, neither you nor your subsidiaries shall export, re-export, or release, directly or indirectly (including, without limitation, by permitting the Licensed Materials to be downloaded), any technology, software, or software source code, received from TI, or export, directly or indirectly, any direct product of such technology, software, or software source code, to any person, destination or country to which the export, re-export, or release of the technology, software, or software source code, or direct product is prohibited by the EAR.  You represent and warrant that you (i) are not located in, or under the control of, a national or resident of Cuba, Iran, North Korea, Sudan and Syria or any other country subject to a U.S. goods embargo; (ii) are not on the U.S. Treasury Department's List of Specially Designated Nationals or the U.S. Commerce Department's Denied Persons List or Entity List; and (iii) will not use the Licensed Materials or transfer the Licensed Materials for use in any military, nuclear, chemical or biological weapons, or missile technology end-uses.  Any software export classification made by TI shall not be construed as a representation or warranty regarding the proper export classification for such software or whether an export license or other documentation is required for the exportation of such software.
 *
 *10.	Governing Law and Severability; Waiver.  This Agreement will be governed by and interpreted in accordance with the laws of the State of Texas, without reference to conflict of laws principles.  If for any reason a court of competent jurisdiction finds any provision of the Agreement to be unenforceable, that provision will be enforced to the maximum extent possible to effectuate the intent of the parties, and the remainder of the Agreement shall continue in full force and effect.  This Agreement shall not be governed by the United Nations Convention on Contracts for the International Sale of Goods, or by the Uniform Computer Information Transactions Act (UCITA).  The parties agree that non-exclusive jurisdiction for any dispute arising out of or relating to this Agreement lies within the courts located in the State of Texas.  Notwithstanding the foregoing, any judgment may be enforced in any United States or foreign court, and either party may seek injunctive relief in any United States or foreign court.  Failure by TI to enforce any provision of this Agreement shall not be deemed a waiver of future enforcement of that or any other provision in this Agreement or any other agreement that may be in place between the parties.
 *
 *11.	PRC Provisions.  If you are located in the People's Republic of China ("PRC") or if the Licensed Materials will be sent to the PRC, the following provisions shall apply:
 *
 *	a.	Registration Requirements.  You shall be solely responsible for performing all acts and obtaining all approvals that may be required in connection with this Agreement by the government of the PRC, including but not limited to registering pursuant to, and otherwise complying with, the PRC Measures on the Administration of Software Products, Management Regulations on Technology Import-Export, and Technology Import and Export Contract Registration Management Rules.  Upon receipt of such approvals from the government authorities, you shall forward evidence of all such approvals to TI for its records.  In the event that you fail to obtain any such approval or registration, you shall be solely responsible for any and all losses, damages or costs resulting therefrom, and shall indemnify TI for all such losses, damages or costs.
 *
 *b.	Governing Language.  This Agreement is written and executed in the English language and shall be authoritative and controlling, whether or not translated into a language other than English to comply with law or for reference purposes.  If a translation of this Agreement is required for any purpose, including but not limited to registration of the Agreement pursuant to any governmental laws, regulations or rules, you shall be solely responsible for creating such translation.
 *
 *12.	Contingencies.	TI shall not be in breach of this Agreement and shall not be liable for any non-performance or delay in performance if such non-performance or delay is due to a force majeure event or other circumstances beyond TI's reasonable control.
 *
 *13.		Entire Agreement.  This is the entire agreement between you and TI and this Agreement supersedes any prior agreement between the parties related to the subject matter of this Agreement.  Notwithstanding the foregoing, any signed and effective software license agreement relating to the subject matter hereof and stating expressly that such agreement shall control regardless of any subsequent click-wrap, shrink-wrap or web-wrap, shall supersede the terms of this Agreement.  No amendment or modification of this Agreement will be effective unless in writing and signed by a duly authorized representative of TI.  You hereby warrant and represent that you have obtained all authorizations and other applicable consents required empowering you to enter into this Agreement.
 *
 *
 *
 * --/COPYRIGHT--*/
//******************************************************************************
//
//  L. Westlund
//  Texas Instruments Inc.
//  Jan 2011
//  Built with IAR Embedded Workbench Version: 5.20
//******************************************************************************

/*******************************************************************************
*  Change Log:
*  1.2.11  LCW   Initial release at 0x02 based on I2C from Apps team
*  -----------------------------------------------------------------------------
*  Version 3 work begins
*  08.03.11 LCW  Increased MCLK to 8MHz
*  -----------------------------------------------------------------------------
*  19.06.13 BEP  Fixed bug when sending multiple I2C packets. Fixed UART bug
*                where changing the baud rate caused the following command to
*                fail.  Added support for RX timeout (Thunderbolt)
*  -----------------------------------------------------------------------------
*  12.07.13 BEP  Fixed issues found during verification with I2C packets always
*                sending an acknowledgement byte.
*  -----------------------------------------------------------------------------
*  Version B3
*  05/22/14 MG   Adding initialization function for passive and active listening
*******************************************************************************/
#include "BSL_Device_File.h"
#include "BSL430_PI.h"
#include "BSL430_Command_Interpreter.h"
#include "BSL430_Command_Definitions.h"
#include <assert.h>

//errors
#define HEADER_INCORRECT        (PI_COMMAND_UPPER + 0x01)
#define CHECKSUM_INCORRECT      (PI_COMMAND_UPPER + 0x02)
#define PACKET_SIZE_ZERO        (PI_COMMAND_UPPER + 0x03)
#define PACKET_SIZE_TOO_BIG     (PI_COMMAND_UPPER + 0x04)
#define UNKNOWN_ERROR           (PI_COMMAND_UPPER + 0x05)

//******************************************************************************
// I2C Definitions, variables and local function prototypes
//******************************************************************************
#define MAX_BUFFER_SIZE 260
//#define SLAVE_ADDRESS 0x48
static void receiveDataFromMaster_I2C(uint8_t dataByte);
static void sendByte_I2C(uint8_t data);
static int8_t PI_receivePacket_I2C(void);
static void PI_sendData_I2C(uint16_t size);
__no_init uint8_t   byStatusByte_I2C;
__no_init uint16_t  transmitBufferLength_I2C;
__no_init uint16_t  rxdataPointer_I2C;
__no_init uint16_t  transmitPoint_I2C;

//******************************************************************************
// UART Definitions and variables
//******************************************************************************
#define UNKNOWN_BAUD_RATE   (PI_COMMAND_UPPER + 0x06)
#define CHANGE_BAUD_RATE    (PI_COMMAND_UPPER + 0x02)
// 4800 (unused)
#define BAUD_4800   0x01
#define BAUD_9600   0x02
#define BAUD_19200  0x03
#define BAUD_38400  0x04
#define BAUD_57600  0x05
#define BAUD_115200 0x06
#define BAUD_1000000 0x07
static void init_USCI_UART( uint8_t baud_rate );
static int8_t PI_receivePacket_UART(void);
static void PI_sendData_UART(uint16_t size);
static uint8_t receiveByte_UART(void);
static void sendByte_UART(uint8_t data);

//******************************************************************************
// shared definitions, variables and function prototypes
//******************************************************************************
static int8_t verifyData(uint16_t checksum);
static void interpretPI_Command(void);
__no_init uint8_t          RX_StatusFlags;  // = RX_PACKET_ONGOING;
__no_init uint8_t          PI_State;        // = PI_STATE_UART;
__no_init uint8_t         *BSL430_ReceiveBuffer;
__no_init uint8_t         *BSL430_SendBuffer;
__no_init uint16_t         BSL430_BufferSize;

#define USCI_I2C_UART_VERSION   0x05
const uint8_t BSL430_PI_Version @ "BSL430_VERSION_PI" =
                            (BSL430_eUSCI_I2C_UART_PI + USCI_I2C_UART_VERSION);
#pragma required=BSL430_PI_Version

#pragma data_alignment=2
__no_init uint8_t   RAM_TX_Buf[MAX_BUFFER_SIZE+6];
__no_init uint8_t   RAM_RX_Buf[MAX_BUFFER_SIZE+6];


/*******************************************************************************
* *Function:    PI_init  - I2C
* *Description: Initializes the I2C Slave
*  Returns:      None
*******************************************************************************/
void PI_init(void)
{
    // FR5969 Clock System
//    CSCTL0 = CSKEY;
//    CSCTL1 = DCORSEL + DCOFSEL0+DCOFSEL1;     // DCORSEL = 1 + DCOFSEL_3 = 8MHz
//    CSCTL3 = 0;                               // Clear all dividers
//    CSCTL2 |= SELM__DCOCLK + SELS__DCOCLK;    // MCLK = SMCLK = 8MHz
//    CSCTL0_H = 0xFF;

    // FR5994 Clock System
    // Startup clock system with max DCO setting ~8MHz
    CSCTL0_H = CSKEY_H;                     // Unlock CS registers
    CSCTL1 = DCOFSEL_6;           // Set DCO to 8MHz
    CSCTL2 = SELA__VLOCLK | SELS__DCOCLK | SELM__DCOCLK;
    CSCTL3 = DIVA__1 | DIVS__1 | DIVM__1;   // Set all dividers
    CSCTL0_H = 0;                           // Lock CS registers

    __delay_cycles(10000);  // Wait for clock set

    // RX buffer for both modes.
    BSL430_ReceiveBuffer = RAM_RX_Buf;
    PI_State = *((uint8_t*)BSL_STATE_ADDR);  // get state
    /* For debug means you can set PI_State = PI_STATE_I2C or PI_STATE_UART */
    PI_State = PI_STATE_UART;

    if( PI_State == PI_STATE_I2C )
    {
        transmitBufferLength_I2C = 0;           // init I2C variables here
        rxdataPointer_I2C = 0;
        transmitPoint_I2C = 0;

        I2C_PORT_CONFIG();
        I2C_UCZNCTL1 = UCSWRST;                 // Enable SW reset
        I2C_UCZNCTL0 = UCMODE_3 + UCSYNC;       // I2C Slave, synchronous mode
        I2C_UCZNI2COA = (*((uint8_t*)BSL_CONFIG_ADDR))| UCOAEN;
        /* For debug means you can set I2C_UCZNI2COA = 0x48 + UCOAEN; */
        I2C_UCZNCTL1 &= ~UCSWRST;               // Clear SW reset, resume operation

        I2C_UCZNIE |= UCTXIE0 + UCRXIE0 + UCSTPIE + UCSTTIE;

        BSL430_SendBuffer = &RAM_TX_Buf[4];
    }
    else if ( PI_State == PI_STATE_UART )
    {
        init_USCI_UART( BAUD_9600 );
        BSL430_SendBuffer = RAM_RX_Buf;
    }

} //init

/******************************************************************************/
/*******************************************************************************
                                  GENERIC
                      GENERIC PI INTERFACE FUNCTIONS BELOW
*******************************************************************************/
/******************************************************************************/

/*******************************************************************************
*Function:    interpretPI_Command
*Description: processes a PI command
*******************************************************************************/
void interpretPI_Command(void)
{
    uint8_t command = BSL430_ReceiveBuffer[0];
    if( command == CHANGE_BAUD_RATE )
    {
        uint8_t rate = BSL430_ReceiveBuffer[1];
        if((rate < BAUD_9600 )||(rate > BAUD_115200))
        {
            sendByte_UART(UNKNOWN_BAUD_RATE);
        }
        else
        {
            sendByte_UART(ACK);
            while(UCA0STATW&UCBUSY);
            init_USCI_UART( rate );
        }
    }
}

/*******************************************************************************
* *Function:    PI_receivePacket
* *Description: simply directs to I2C or UART handlers based on device state
*  Returns:      None
*
*******************************************************************************/
int8_t PI_receivePacket(void)
{
    int8_t ret;
    if( PI_State == PI_STATE_I2C )
    {
        ret = PI_receivePacket_I2C();
    }
    else if ( PI_State == PI_STATE_UART )
    {
        ret = PI_receivePacket_UART();
    }

    return ret;
}

/*******************************************************************************
* *Function:    getBufferSize
* *Description: Returns the max Data Buffer Size for this PI
* *Returns:     max buffer size
*******************************************************************************/
uint16_t PI_getBufferSize(void)
{
    return MAX_BUFFER_SIZE;
}

/*******************************************************************************
* *Function:    PI_sendData
* *Description: Formats the Transmit Buffer to be used when the Transmit Flag gets set
* *Parameters:
*           uint16_t size   Number of bytes to send
* *Returns:     None
*******************************************************************************/
void PI_sendData(uint16_t size)
{
    if( PI_State == PI_STATE_I2C )
    {
        PI_sendData_I2C(size);
    }
    else if ( PI_State ==  PI_STATE_UART )
    {
        PI_sendData_UART(size);
    }
}

/*******************************************************************************
* *Function:    verifyData
* *Description: verifies the data in the data buffer against a checksum
* *Parameters:
*           uint16_t checksum    the checksum to check against
* *Returns:
*           1 checksum parameter is correct for data in the data buffer
*           0 checksum parameter is not correct for the data in the buffer
*******************************************************************************/
static int8_t verifyData(uint16_t checksum)
{
    uint16_t i;

    CRCINIRES = 0xFFFF;
    for (i = 0; i < BSL430_BufferSize; i++)
    {
        CRCDIRB_L = BSL430_ReceiveBuffer[i];
    }
    return (CRCINIRES == checksum);
}

/******************************************************************************/
/*******************************************************************************
                                    U A R T
                      UART PI INTERFACE FUNCTIONS BELOW
*******************************************************************************/
/******************************************************************************/

/*******************************************************************************
* *Function:    PI_UARTreceivePacket
* *Description: Reads an entire UART packet, verifies it, and sends it to the
*               core to be interpreted
* *Returns:
*           Status of UART interface (RX_StatusFlags)
*******************************************************************************/
static int8_t PI_receivePacket_UART(void)
{
    RX_StatusFlags = RX_PACKET_ONGOING;
    uint8_t dataByte = 0;
    uint16_t dataPointer = 0;
    uint16_t checksum = 0;
    while( RX_StatusFlags == RX_PACKET_ONGOING )
    {
        dataByte = receiveByte_UART();          // get another byte from host
        if( dataPointer == 0 )                  // first byte is the size of the Core packet
        {
            if ( dataByte != 0x80 )             // first byte in packet should be 0x80
            {
                sendByte_UART( HEADER_INCORRECT );
                RX_StatusFlags = RX_ERROR_RECOVERABLE;
            }
            else
            {
                dataPointer++;
            }
        }
        else if( dataPointer == 1 )               // first byte is the size of the Core packet
        {
            BSL430_BufferSize = dataByte;
            dataPointer++;
        }
        else if( dataPointer == 2 )
        {
            BSL430_BufferSize |= (uint16_t)dataByte<<8;
            if( BSL430_BufferSize == 0 )
            {
                sendByte_UART( PACKET_SIZE_ZERO );
                RX_StatusFlags = RX_ERROR_RECOVERABLE;
            }
            if( BSL430_BufferSize > MAX_BUFFER_SIZE ) // For future devices that might need smaller packets
            {
                sendByte_UART( PACKET_SIZE_TOO_BIG );
                RX_StatusFlags = RX_ERROR_RECOVERABLE;
            }
            dataPointer++;
        }
        else if( dataPointer == (BSL430_BufferSize + 3 ) )
        {
            // if the pointer is pointing to the Checksum low data byte which resides
            // after 0x80, rSize, Core Command.
            checksum = dataByte;
            dataPointer++;
        }
        else if( dataPointer == (BSL430_BufferSize+4) )
        {
            // if the pointer is pointing to the Checksum low data byte which resides
            // after 0x80, rSize, Core Command, CKL.
            checksum = checksum | dataByte<<8;
            if( verifyData(checksum) )
            {
                if( (BSL430_ReceiveBuffer[0] & 0xF0) == PI_COMMAND_UPPER)
                {
                    interpretPI_Command();
                    RX_StatusFlags = RX_PACKET_ONGOING;
                    dataByte = 0;
                    dataPointer = 0;
                    checksum = 0;
                }
                else
                {
                    sendByte_UART( ACK );
                    RX_StatusFlags = DATA_RECEIVED;
                }
            }
            else
            {
                sendByte_UART( CHECKSUM_INCORRECT );
                RX_StatusFlags = RX_ERROR_RECOVERABLE;
            }
        }
        else
        {
            BSL430_ReceiveBuffer[dataPointer-3] = dataByte;
            dataPointer++;
        }
    }
    return RX_StatusFlags;
}

/*******************************************************************************
* *Function:    sendByte_UART
* *Description: Sends a byte
* *Parameters:
*           uint8_t data    Byte to send via UART
* *Returns:
*           None
*******************************************************************************/
void sendByte_UART(uint8_t data)
{
    while (!(UCZNIFG&UCTXIFG))
    {
        ; // USCI_A0 TX buffer ready?
    }
    UCZNTXBUF = data;
}

/*******************************************************************************
* *Function:    receiveByte_UART
* *Description: receives a byte
* *Returns:
*           Byte received via UART
*******************************************************************************/
uint8_t receiveByte_UART(void)
{
    while( !(UCZNIFG & UCRXIFG))
    {
        ;   // wait for RX flag
    }

    UCZNIFG &= ~UCRXIFG;
    return UCZNRXBUF;
}

/*******************************************************************************
* *Function:    PI_sendData_UART
* *Description: Sends the data in the data buffer
* *Parameters:
*           uint16_t size   Number of bytes to send
* *Returns:     None
*******************************************************************************/
static void PI_sendData_UART(uint16_t size)
{
    uint16_t i;
    sendByte_UART(0x80);
    sendByte_UART(size & 0xFF);
    sendByte_UART(size>>8 & 0xFF);
    CRCINIRES = 0xFFFF;
    for(i = 0; i < size; i++)
    {
        CRCDIRB_L = BSL430_SendBuffer[i];
        sendByte_UART(BSL430_SendBuffer[i]);
    }
    sendByte_UART(CRCINIRES_L);
    sendByte_UART(CRCINIRES_H);
}

/*******************************************************************************
* *Function:    init_USCI_UART
* *Description: internal code size saving function used by init and change baud rate
* *Parameters:
*           uint8_t baud_rate  (BAUD_9600, BAUD_19200, BAUD_38400, BAUD_57600,
*                               BAUD_115200)
* *Returns:
*           None
*******************************************************************************/
static void init_USCI_UART( uint8_t baud_rate )
{
    UART_UCZNCTLW0 |= UCSWRST;                      // **Put state machine in reset**
    UART_UCZNCTLW0 |= UCPEN+UCPAR+UCSSEL__SMCLK;    // even parity

    switch ( baud_rate )
    {
        case BAUD_9600:
            //8Mhz 9600
            //   UCOS16 = 1
            //   UCBRx =  52
            //   UCFx =   1
            //   UCSx =   0x49
            UART_UCZNBRW = 52;                            // 8MHz 9600 (see User's Guide)
            UART_UCZNMCTLW = (0x49u<<8)+(1<<4)+UCOS16;     // Modulation
        break;
        case BAUD_19200:
            //8Mhz 19200
            //   UCOS16 = 1
            //   UCBRx =  26
            //   UCFx =   0
            //   UCSx =   0xB6
            UART_UCZNBRW = 26;                            // 8MHz 19200 (see User's Guide)
            UART_UCZNMCTLW = (0xB6u<<8)+(0<<4)+UCOS16;                       // Modulation
        break;
        case BAUD_38400:
            //8Mhz 38400
            //   UCOS16 = 1
            //   UCBRx =  13
            //   UCFx =   0
            //   UCSx =   0x84
            UART_UCZNBRW = 13;                            // 8MHz 38400 (see User's Guide)
            UART_UCZNMCTLW = (0x84u<<8)+(0<<4)+UCOS16;                       // Modulation
        break;
        case BAUD_57600:
            //8Mhz 57600
            //   UCOS16 = 1
            //   UCBRx =  8
            //   UCFx =   10
            //   UCSx =   0xF7
            UART_UCZNBRW = 8;                            // 8MHz 57600 (see User's Guide)
            UART_UCZNMCTLW = (0xF7u<<8)+(10<<4)+UCOS16;                       // Modulation
        break;
        case BAUD_115200:
            //8Mhz 115200
            //   UCOS16 = 1
            //   UCBRx =  4
            //   UCFx =   5
            //   UCSx =   0x55
            UART_UCZNBRW = 4;                             // 8MHz 9600 (see User's Guide)
            UART_UCZNMCTLW = (0x55u<<8)+(5<<4)+UCOS16;     // Modulation
        break;
        case BAUD_1000000:
        //8Mhz 1000000 (only works with dedicated FTDI, not with ez-FET connected one)
            //   UCOS16 = 1
            //   UCBRx =  4
            //   UCFx =   5
            //   UCSx =   0x55
            UART_UCZNBRW = 8;                             // 8MHz 9600 (see User's Guide)
            UART_UCZNMCTLW = UCBRF_0 | 0x0000;     // Modulation
        break;
    }

    UART_PORT_CONFIG();
    UART_UCZNCTLW0 &= ~UCSWRST;                        // **Initialize USCI state machine**
}

/******************************************************************************/
/*******************************************************************************
                                      I 2 C
                      I2C PI INTERFACE FUNCTIONS BELOW
*******************************************************************************/
/******************************************************************************/
/*******************************************************************************
* *Function:    PI_I2CreceivePacket
* *Description: Handles the sequence of START, DATA, RESTART and then SENDS DATA
*               and then STOP
*
*  Returns:     Status of the interface (RX_StatusFlags)
*******************************************************************************/
#define I2C_START_CONDITION_RECEIVED 0x06
#define I2C_STOP_CONDITION_RECEIVED  0x08
#define I2C_DATA_RECEIVED            0x16
#define I2C_TRANSMIT_BUFFER_EMPTY    0x18
static int8_t PI_receivePacket_I2C(void)
{
    uint8_t RxValue;

    RX_StatusFlags = RX_PACKET_ONGOING;

    while (RX_StatusFlags == RX_PACKET_ONGOING)
    {
        switch (I2C_UCZIV)
        //switch (__even_in_range(I2C_UCZIV,I2C_TRANSMIT_BUFFER_EMPTY) )
        {
            case I2C_START_CONDITION_RECEIVED:
                transmitPoint_I2C = 0;               //Start Condition Received
                rxdataPointer_I2C = 0;
                break;

            case I2C_STOP_CONDITION_RECEIVED:    //Stop Condition Received
                break;

            case I2C_DATA_RECEIVED:
                RxValue = I2C_UCZRXBUF;              //Data Received
                receiveDataFromMaster_I2C(RxValue);
                break;

            case I2C_TRANSMIT_BUFFER_EMPTY:
                if (transmitPoint_I2C < transmitBufferLength_I2C)
                {
                    I2C_UCZTXBUF = RAM_TX_Buf[transmitPoint_I2C++];
                }
                break;

            default:          break;

        } // swtich

    } // while

    return RX_StatusFlags;
}

/*******************************************************************************
* *Function:    receiveDataFromMaster_I2C  - I2C routine
* *Description: Retrieves the format info, data etc from the received data and
*             sets error flags if format is wrong - wrong checksum, wrong header etc
*             and stripes the data bytes from the format int8_tacters and headers
*
*             eg: 0x80 0x01 0x00 0x19 0xE8 0x62 gets converted to
*                 Header - 0x80
*                 Length - 0x01
*                 Command - 0x19
*                 Checksum - CKL-0xE8
*                            CKH-0x62
* *Parameters:
*           uint8_t dataByte  Byte received from Master
* *Returns: None
*
*******************************************************************************/
void receiveDataFromMaster_I2C(uint8_t dataByte)
{
    volatile uint16_t checksum;
    if (rxdataPointer_I2C == 0)                      // first byte is the size of the Core packet
    {
        if (dataByte != 0x80)                    // first byte in packet should be 0x80
        {
            sendByte_I2C(HEADER_INCORRECT);
            RX_StatusFlags = RX_ERROR_RECOVERABLE;
        }
        else
        {
            rxdataPointer_I2C++;
        }
    }
    else if (rxdataPointer_I2C == 1)                 // first byte is the size of the Core packet
    {
        BSL430_BufferSize = dataByte;
        rxdataPointer_I2C++;
    }
    else if (rxdataPointer_I2C == 2)
    {
        BSL430_BufferSize |= (uint16_t)dataByte << 8;
        if (BSL430_BufferSize == 0)
        {
            sendByte_I2C(PACKET_SIZE_ZERO);
            RX_StatusFlags = RX_ERROR_RECOVERABLE;
        }
        if (BSL430_BufferSize > MAX_BUFFER_SIZE) // For future devices that might need smaller
                                                 // packets
        {
            sendByte_I2C(PACKET_SIZE_TOO_BIG);
            RX_StatusFlags = RX_ERROR_RECOVERABLE;
        }
        rxdataPointer_I2C++;
    }
    else if (rxdataPointer_I2C == (BSL430_BufferSize + 3))
    {
        // if the pointer is pointing to the Checksum low data byte which resides
        // after 0x80, rSize, Core Command.
        checksum = dataByte;
        rxdataPointer_I2C++;
    }
    else if (rxdataPointer_I2C == (BSL430_BufferSize + 4))
    {
        // if the pointer is pointing to the Checksum low data byte which resides
        // after 0x80, rSize, Core Command, CKL.
        checksum = checksum | dataByte << 8;
        if (verifyData(checksum))
        {
            sendByte_I2C(ACK);
            RX_StatusFlags = DATA_RECEIVED;
        }
        else
        {
            sendByte_I2C(CHECKSUM_INCORRECT);
            RX_StatusFlags = RX_ERROR_RECOVERABLE;
        }
    }
    else
    {
        RAM_RX_Buf[rxdataPointer_I2C - 3] = dataByte;
        rxdataPointer_I2C++;
    }

}

/*******************************************************************************
* *Function:    PI_I2CsendData
* *Description: Formats the Transmit Buffer to be used when the Transmit Flag gets set
* *Parameters:
*           uint16_t size   Number of bytes to transmit
* *Returns:     None
*******************************************************************************/
static void PI_sendData_I2C(uint16_t size)
{
    uint16_t i;
    uint16_t rxStart;        // flag to check for start condition before transmiting
    uint16_t txPoint;        // Use local variables to reduce code size, change to
    uint16_t txLen;          // transmitPoint_I2C and transmitBufferLength_I2C if
                            // there is space

    /*
     * Use transmitBufferLength_I2C when sending data to allow for either an
     * acknowledgement for the first packet or a follow up packet (as used when
     * requesting more than 259 bytes).
     */
    txLen = transmitBufferLength_I2C;

    RAM_TX_Buf[txLen++] = 0x80;
    RAM_TX_Buf[txLen++] = size & 0xFF;
    RAM_TX_Buf[txLen++] = size >> 8 & 0xFF;
    CRCINIRES = 0xFFFF;
    for (i = 0; i < size; i++){
        /*
         * If transmitting multiple packets such as transmit data we must
         * shift buffer down.
         */
        CRCDIRB_L = BSL430_SendBuffer[i];
        RAM_TX_Buf[txLen++] = BSL430_SendBuffer[i];
    }
    RAM_TX_Buf[txLen++] = CRCINIRES_L;
    RAM_TX_Buf[txLen++] = CRCINIRES_H;

    /* Set start cond. flag to zero and TX pointer to start of buffer */
    rxStart = 0;
    txPoint = 0;

    while (txPoint < txLen) {
        switch (I2C_UCZIV) {
            case I2C_START_CONDITION_RECEIVED:
                rxStart = 1;
                break;

            case I2C_STOP_CONDITION_RECEIVED:
                break;

            case I2C_DATA_RECEIVED:
                break;

            case I2C_TRANSMIT_BUFFER_EMPTY:
                if (rxStart) {
                    I2C_UCZTXBUF = RAM_TX_Buf[txPoint++];
                }
                break;

            default:
                break;
        }
    }

    transmitBufferLength_I2C = 0;
}


/*******************************************************************************
* *Function:    sendByte
* *Description: Puts a single byte in the outgoing buffer, such as an error
*
* *Parameters:
*           uint8_t data    Byte to send via I2C
*******************************************************************************/
static void sendByte_I2C(uint8_t data)
{
    RAM_TX_Buf[0] = data; // Status Byte ACK/NACK
    transmitBufferLength_I2C = 1;
}
