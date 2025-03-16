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
#include "BSL430_Command_Interpreter.h"
#include "BSL430_Command_Definitions.h"
#include "BSL430_Crypto.h"
#include "BSL430_API.h"
#include "BSL430_PI.h"
#include "BSL_Device_File.h"
#include "BSL430_Crypto_Config.h"
#include <stdio.h>

/******************************************************************************
*  Change Log:
*  2.2.09  LCW   worked on RAM Loader function
*  ----------------------------------------------------------------------------
*  Version 3 work begins
*  07.08.09 LCW  Removed parameter from mass erase
*  ----------------------------------------------------------------------------
*  Version 4 work begins
*  23.11.09 LCW  Changed to more generic API function calls
*  ----------------------------------------------------------------------------
*  Version 5 work begins
*  10.03.10 LCW  'Off by one' error with sending Data fixed
*  15.03.10 LCW   Misc comment cleanup for source release
*  ----------------------------------------------------------------------------
*  Version 5.1 (no output change, source/comment modified)
*  15.04.10 LCW Changed receiveDataBlock to remove warning
*  ----------------------------------------------------------------------------
*  Version 6.0
*  15.04.10 LCW Made Buffer_Size an uint16_t
*  ----------------------------------------------------------------------------
*  Version 6.1 (no output change, source/comment modified)
*  28.02.11 LCW Ran Uncrustify
*  ----------------------------------------------------------------------------
*  Version 7.0
*  13.04.11 LCW Made read length variables an uint16_t,
*               several others as well
*  ----------------------------------------------------------------------------
*  Version 7.1
*  Aug29.13 BEP Added function to clear RAM contents at the start of main
*  ----------------------------------------------------------------------------
*  Version 8
*  09/23/13 MG  Version number incremented to track possible P1.0-goes-high bug
*               in BSL430_Low_Level_Init.s43. No other changes than that.
*  ----------------------------------------------------------------------------
*  Version 8.1
*  05/22/14 MG  BSL Version Vendor is 0xFF in debug
*  ----------------------------------------------------------------------------
*  Version 8.2
*  03/20/15 OG  CryptoBSL functions added
*  ----------------------------------------------------------------------------
*  Version 8.3
*  05/18/15 LR  Add support to disable factory BSL
*               Add support for IPE
*  ----------------------------------------------------------------------------
*  Version 8.4
*  08/27/15 LR  Standard commands with Crypto functions
*  ----------------------------------------------------------------------------
*  Version 9.0
*  08/27/15 LR  No support for Standard commands
******************************************************************************/
//
// Global Variables
//
/*! Constant with Vendor Version */
#ifndef NDEBUG
#warning DEBUG BUILD!
const uint8_t BSL430_Vendor_Version @ "BSL430_VERSION_VENDOR" = 0xFF;
#else
const uint8_t BSL430_Vendor_Version @ "BSL430_VERSION_VENDOR" = 0x00;
#endif
/*! Constant with CI Version */
#if (FULL_STANDARD_COMMANDS == 1)
  const uint8_t BSL430_CI_Version @ "BSL430_VERSION_CI" = CI_WCRYPTO_WSTD + (0x08);
#else
  const uint8_t BSL430_CI_Version @ "BSL430_VERSION_CI" = CI_WCRYPTO + (0x08);
#endif
/*! Disables the Factory (ROM) BSL */
#if (DISABLE_FACTORY_BSL == 1)
/*! Write the BSL signature to disable the factory BSL */
__root const uint16_t BSL430_Signature1 @ "BSLSIG1" = 0x5555;
#endif
/*! Configures the HW entry sequence of this BSL. Fixed to a memory location defined in linker file */
__root const uint8_t BSL430_Config_Entry @ "BSL430_CONFIG_ENTRY_MODE" = DEFAULT_ENTRY_SEQUENCE;
/*! Enables/disables the standard commands. Fixed to a memory location defined in linker file */
__root const uint8_t BSL430_Config_Cmd @ "BSL430_CONFIG_COMMANDS" = DEFAULT_STD_COMMANDS;
/*! Enables/Disables Mass erase on incorrect pwd. Fixed to a memory location defined in linker file */
__root const uint8_t BSL430_Config_MassErase @ "BSL430_CONFIG_MASSERASE" = DEFAULT_MASS_ERASE;

//
// External variables
//
extern __no_init uint8_t* BSL430_ReceiveBuffer;
extern __no_init uint8_t* BSL430_SendBuffer;
extern __no_init uint16_t BSL430_BufferSize;

//
// Local function prototypes
//
static void interpretCommand(void);
static void sendMessage(uint8_t message);

void receiveDataBlock(uint32_t addr, uint8_t* data, int8_t fastWrite);
void receivePassword(void);
void eraseLocation(int8_t block_erase, uint32_t addr);
void CRC_Check(uint32_t addr, uint16_t length);
void sendDataBlock(uint32_t addr, uint16_t length);
void resetDevice(void);
void receiveProtDataBlock(uint8_t* data, int8_t fastWrite);
void receiveEncKey(uint8_t* data);

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

/******************************************************************************
* *Function:    main
* *Description: Initializes the BSL Command Interpreter and begins listening
*               for incoming packets
******************************************************************************/
#pragma required=BSL430_Vendor_Version
#pragma required=BSL430_CI_Version
void main(void)
{
    uint8_t eventFlags = 0;
    volatile int16_t i, ii;

    __disable_interrupt();

    BSL430_API_init();
    BSL430_Crypto_sec_init();       // Initial security checks/functions

/** TEST **/
//    PI_init();                      // UART/I2C initialization

    P3DIR |= BIT4;   // Set P3.4 as output
    P3SEL1 |= BIT4;  // Select SMCLK function
    P3SEL0 |= BIT4;

    // Startup clock system with max DCO setting ~8MHz
    CSCTL0_H = CSKEY_H;                     // Unlock CS registers
    CSCTL1 = DCOFSEL_6;           // Set DCO to 8MHz
    CSCTL2 = SELA__VLOCLK | SELS__DCOCLK | SELM__DCOCLK;
    CSCTL3 = DIVA__1 | DIVS__1 | DIVM__1;   // Set all dividers
    CSCTL0_H = 0;                           // Lock CS registers

    __delay_cycles(10000);  // Wait for clock set

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
/** TEST **/

    while(1)
    {
//        eventFlags = PI_receivePacket();
//        if (eventFlags & DATA_RECEIVED)
//        {
//            interpretCommand();
//        }
        printf("Hello, Sample Bootloader here!\n\r");
    }
}

/******************************************************************************
* *Function:    interpretCommand
* *Description: Interprets the command contained in the data buffer and
*               calls the appropriate BSL api function
******************************************************************************/
static void interpretCommand(void)
{
    uint8_t command = BSL430_ReceiveBuffer[0];
    uint32_t addr = BSL430_ReceiveBuffer[1];
    addr |= ((uint32_t)BSL430_ReceiveBuffer[2]) << 8;
    addr |= ((uint32_t)BSL430_ReceiveBuffer[3]) << 16;

    switch (command)
    {
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_REBOOT_RESET
        case REBOOT_RESET:          	  // Trigger a software Reset
            resetDevice();
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_RX_PROT_DATA_BLOCK
        case RX_PROT_DATA_BLOCK:          // Receive a protected data block
            receiveProtDataBlock(&BSL430_ReceiveBuffer[1], 0);
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_RX_ENC_KEY
        case RX_ENC_KEY:                  // Receive an encrypted key
            receiveEncKey(&BSL430_ReceiveBuffer[1]);
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_RX_DATA_BLOCK_FAST
        case RX_DATA_BLOCK_FAST:          // Receive data block fast
            receiveDataBlock(addr, &BSL430_ReceiveBuffer[4], 1);
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_RX_PASSWORD
        case RX_PASSWORD:                 // Receive password
            receivePassword();
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_LOAD_PC
        case LOAD_PC:                     // Load PC
            sendMessage(BSL430_callAddress(addr));
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_RX_DATA_BLOCK
        case RX_DATA_BLOCK:               // Receive data block
            receiveDataBlock(addr, &BSL430_ReceiveBuffer[4], 0);
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_MASS_ERASE
        case MASS_ERASE:                  // Mass Erase
            sendMessage(BSL430_massErase());
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_ERASE_SEGMENT
        case ERASE_SEGMENT:               // Erase segment
            eraseLocation(0, addr);
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_TOGGLE_INFO
        case TOGGLE_INFO:                 // Toggle Info lock
            sendMessage(BSL430_toggleInfoLock());
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_ERASE_BLOCK
        case ERASE_BLOCK:                 // Erase Block
            eraseLocation(1, addr);
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_CRC_CHECK
        case CRC_CHECK:                   // CRC Check
        {
            uint16_t length;
            length = BSL430_ReceiveBuffer[4];
            length |= ((uint32_t)BSL430_ReceiveBuffer[5]) << 8;
            CRC_Check(addr, length);
        }
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_TX_DATA_BLOCK
        case TX_DATA_BLOCK:               // Transmit Data Block
        {
            uint16_t length;
            length = BSL430_ReceiveBuffer[4];
            length |= BSL430_ReceiveBuffer[5] << 8;
            sendDataBlock(addr, length);
        }
        break;
#endif
        /*-------------------------------------------------------------------*/
#ifdef SUPPORTS_TX_BSL_VERSION
        case TX_BSL_VERSION:              // Transmit BSL Version array
            BSL430_RemovelockTemp();      // Version is always enabled
            sendDataBlock((uint32_t)(&BSL430_Vendor_Version), 4);
            BSL430_Restorelock();
        break;
#endif
        /*-------------------------------------------------------------------*/
        default:                          // unknown command
            sendMessage(UNKNOWN_COMMAND);
    }
}


/******************************************************************************
* *Function:    resetDevice
* *Description: Triggers a software reset
******************************************************************************/
void resetDevice(void)
{
    PMMCTL0 = PMMPW | PMMSWBOR;      // Force a BOR
}

/******************************************************************************
* *Function:    receiveProtDataBlock
* *Description: Performs cryptographic operations and checks on the data
*               (i.e. decryption and/or authentication validation) and calls
*				the API to write a data block to a given memory location
* *Parameters:
*           uint8_t* data           Pointer to an array of data to write
*           int8_t  FastWrite       If 1, do not send a reply message
******************************************************************************/
void receiveProtDataBlock(uint8_t* data, int8_t fastWrite)
{
    int8_t returnValue;
    uint32_t addr;

    // Remove lock (if enabled) since this command doesn't need a password
    BSL430_RemovelockTemp();

    returnValue = BSL430_Crypto_dataChecks(data, BSL430_BufferSize-1);
    if ((returnValue != SUCCESSFUL_OPERATION) && (!fastWrite))
    {
        sendMessage(returnValue);
    }
    else
    {
        returnValue = BSL430_Crypto_checkMetaData(data);
        if ((returnValue != SUCCESSFUL_OPERATION) && (!fastWrite))
        {
            sendMessage(returnValue);
        }
        else
        {
            returnValue = BSL430_openMemory();             // Open Memory
            if (returnValue == SUCCESSFUL_OPERATION)
            {
#ifdef  USE_MODE_CCM
                addr  =  (uint32_t)data[23];
                addr |= ((uint32_t)data[24]) << 8;
                addr |= ((uint32_t)data[25]) << 16;

                returnValue = BSL430_writeMemory(addr, BSL430_BufferSize-27-CCM_TAG_LEN, data+26);
#else
                #error "Defined mode not supported for this version, please use AES CCM"
#endif
            }

            if (!fastWrite)
            {
                sendMessage(returnValue);
            }
            BSL430_closeMemory();
            BSL430_Crypto_checkUpdateComplete(data[16]);
        }
    }

    // Restore lock
    BSL430_Restorelock();
}

/******************************************************************************
* *Function:    receiveEncKey
* *Description: Performs cryptographic checks on the encrypted key (i.e.
*               decryption and/or authentication validation) and updates
*				the key material
* *Parameters:
*           uint8_t* data       Pointer to an array of key data to write
******************************************************************************/
void receiveEncKey(uint8_t* data)
{
    int8_t returnValue;

    // Remove lock (if enabled) since this command doesn't need a password
    BSL430_RemovelockTemp();

    returnValue = BSL430_Crypto_keyDecrypt(data, BSL430_BufferSize-1);
    if (returnValue == SUCCESSFUL_OPERATION)
    {
        returnValue = BSL430_openMemory();
        if (returnValue == SUCCESSFUL_OPERATION)
        {
            BSL430_openBSLMemory();        // Open access to BSL

    #ifdef  USE_MODE_CCM
            returnValue = BSL430_Crypto_keyUpdate(data+16, BSL430_BufferSize-19-CCM_TAG_LEN);
    #else
            #error "Defined mode not supported for this version, please use AES CCM"
    #endif
        }

        BSL430_closeMemory();
    }

    sendMessage(returnValue);

    BSL430_Restorelock();
}

/******************************************************************************
* *Function:    receiveDataBlock
* *Description: Calls the API to write a data block to a given memory location
* *Parameters:
*           uint32_t addr       Address to which the data should be written
*           uint8_t* data       Pointer to an array of data to write
*           int8_t  FastWrite   If 1, do not send a reply message
******************************************************************************/
void receiveDataBlock(uint32_t addr, uint8_t* data, int8_t fastWrite)
{
#ifndef RAM_WRITE_ONLY_BSL
    int8_t returnValue;
    returnValue = BSL430_openMemory();
    if ((returnValue == SUCCESSFUL_OPERATION) & (BSL430_BufferSize > 4))
#endif
    {
#ifndef RAM_WRITE_ONLY_BSL
        returnValue = BSL430_writeMemory(addr, BSL430_BufferSize - 4, data);
#else
        BSL430_writeMemory(addr, BSL430_BufferSize - 4, data);
#endif
    }
#ifndef RAM_WRITE_ONLY_BSL
    if (!fastWrite)
    {
        sendMessage(returnValue);
    }
    BSL430_closeMemory();
#endif
}

/******************************************************************************
* *Function:    receivePassword
* *Description: Calls the API to unlock the BSL
******************************************************************************/
void receivePassword(void)
{
    int8_t temp;
    temp = BSL430_unlock_BSL(&BSL430_ReceiveBuffer[1]);
    if (temp== SUCCESSFUL_OPERATION)
    {
        sendMessage(ACK);
    }
    else
    {
        sendMessage(temp);
    }
}

/******************************************************************************
* *Function:    eraseSegment
* *Description: Calls the API to erase a segment containing the given address
* *Parameters:
*           int8_t block_erase      If 1, the entire block should be erased
*           uint32_t addr    Address in the segment to be erased.
******************************************************************************/
void eraseLocation(int8_t block_erase, uint32_t addr)
{
    sendMessage(BSL430_eraseLocation(block_erase, addr));
}

/******************************************************************************
* *Function:    CRC_Check
* *Description: Calls the API to perform a CRC check over a given addr+length
*               of data
* *Parameters:
*           uint32_t addr   Start Addr of CRC
*           uint16_t length  number of bytes in the CRC
*****************************************************************************/
void CRC_Check(uint32_t addr, uint16_t length)
{
    int16_t crcResult;
    int16_t crcStatus;

    crcStatus = BSL430_crcCheck(addr, length, &crcResult);
    if (crcStatus == BSL_LOCKED)
    {
        sendMessage(BSL_LOCKED);
    }
    else
    {
        BSL430_SendBuffer[0] = BSL_DATA_REPLY;
        BSL430_SendBuffer[1] = (int8_t)(crcResult & 0xFF);
        BSL430_SendBuffer[2] = (int8_t)((crcResult >> 8) & 0xFF);
        PI_sendData(3);
    }
}

/******************************************************************************
* *Function:    sendDataBlock
* *Description: Fills the SendBuffer array with bytes from the given parameters
*             Sends the data by calling the PI, or sends an error
* *Parameters:
*           uint32_t addr    Address from which to begin reading the block
*           int16_t length            The number of bytes to read
******************************************************************************/
void sendDataBlock(uint32_t addr, uint16_t length)
{
    uint32_t endAddr = addr + length;
    uint16_t bytes;
    int8_t returnValue = SUCCESSFUL_OPERATION;

    while ((addr < endAddr) & (returnValue == SUCCESSFUL_OPERATION))
    {
        if ((endAddr - addr) > PI_getBufferSize() - 1)
        {
            bytes = PI_getBufferSize() - 1;
        }
        else
        {
            bytes = (endAddr - addr);
        }
        returnValue = BSL430_readMemory(addr, bytes, &BSL430_SendBuffer[1]);
        if (returnValue == SUCCESSFUL_OPERATION)
        {
            BSL430_SendBuffer[0] = BSL_DATA_REPLY;
            PI_sendData(bytes + 1);
        }
        else
        {
            sendMessage(returnValue);
        }
        addr += bytes;
    }
}

/******************************************************************************
* *Function:    sendMessage
* *Description: Sends a Reply message with attached information
* *Parameters:
*           int8_t message    the message to send
******************************************************************************/
static void sendMessage(uint8_t message)
{
    BSL430_SendBuffer[0] = BSL_MESSAGE_REPLY;
    BSL430_SendBuffer[1] = message;
    PI_sendData(2);
}

