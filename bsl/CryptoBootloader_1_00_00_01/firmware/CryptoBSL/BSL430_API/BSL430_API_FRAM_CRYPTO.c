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
/*******************************************************************************
* Name:   BSL430_API_FRAM_CRYPTO.c
* Description: 
*         API for the CryptoBSL
*         Based on BSL430_API_FRAM version 5.0
*
* Author: Oscar Guillen
* Email:  o-guillen@ti.com
*
*******************************************************************************/
#include "BSL_Device_File.h"
#include "BSL430_API.h"
#include "BSL430_Command_Definitions.h"
#include "BSL430_Crypto.h"
#include <assert.h>

//
// Preprocessor checks
//
#ifdef RAM_BASED_BSL
#error RAM Based BSL is not supported for this version
#endif

//
// Definitions
//
#define DEFAULT_STATE (LOCKED)                  /*! Default status of Standard commands */
#define API_VERSION FRAM_MEMORY_WCRYPTO+(0x06)  /*! API Version */

//
// Global Variables
//
/*! BSL lock status */
__no_init static volatile uint16_t LockedStatus;    
/*! Key for MPU access */
__no_init static uint16_t FwRamKey; 
/*! Stores lock when removing lock temporarily for protected commands */
__no_init static uint16_t BackupLockedStatus;   
/*! Stores keyword when calling BSL from Application */
__no_init volatile uint16_t BSL_PasswordToApp; 
/*! Indicates if application was executed before reset */
__persistent volatile uint8_t BSL_App_Executed = 0;
/*! Stores the Reset vector of the User's application */
__root __persistent volatile uint16_t BSL430_User_Reset = 0xFFFF;
/*! Checks if a Mass erase was requested but interrupted */
__persistent volatile uint16_t BSL430_DoMassErase = 0; 
/*! Constant with API Version */
const uint8_t BSL430_API_Version @ "BSL430_VERSION_API" = API_VERSION;

//
// External variables
//
extern const uint8_t BSL430_Config_Entry;
extern const uint8_t BSL430_Config_Cmd;
extern const uint8_t BSL430_Config_MassErase;
extern __persistent volatile uint8_t BSL_new_update_started;


//
// Local Function prototypes
//
static int8_t BSL430_entrySeq(void);
static int8_t BSL430_invoke(void);
static void MPU_SetSAM(uint16_t SAM_Val, uint8_t lock);
static int8_t MPU_WriteByteToMem(uint32_t addr, uint8_t value);
static int8_t MPU_GetByteFromMem(uint32_t addr, uint8_t *value);


/*******************************************************************************
*Function:    __low_level_init
*Description: function used to stop WDT, set default config of MPU, 
*             decide if application should execute and clean RAM
*******************************************************************************/
#pragma required=BSL430_API_Version
#pragma required=BSL430_User_Reset
int16_t __low_level_init(void)
{
    extern uint16_t _MPU_SEG_B1, _MPU_SEG_B2;
    uint16_t register * addr;

    WDTCTL = WDTPW + WDTHOLD;       // Stop watchdog timer

      
    MPUCTL0 =  MPUPW;      // Unlock MPU 
    MPUSEGB1 = (uint16_t) &_MPU_SEG_B1; // Boundaries defined by linker file
    MPUSEGB2 = (uint16_t) &_MPU_SEG_B2;
    FwRamKey = MPUENA | MPUPW;
    MPU_SetSAM(MPU_MPUSAM_DEFAULT, 0);  // Set default mode of MPU

    // Check if device needs to stay in bootloader or execute application
    if (BSL430_invoke() != SUCCESSFUL_OPERATION)
    {
        BSL430_openBSLMemory(); // Open BSL memory to write persistent var
        BSL_App_Executed = APPLICATION_EXECUTED;   // Indicate that application was executed
        
        // Configure and lock MPU before jumping to application
        MPU_SetSAM(MPU_MPUSAM_APP, 1);
        // Jump to application
        ((void (*)())   *(volatile uint16_t *) &BSL430_User_Reset )();
    }

    // Clear persistent variable to indicate that App didn't execute
    BSL430_openBSLMemory();     // Open BSL memory to write persistent var
    BSL_App_Executed = 0;       // Application was not executed       
    BSL430_closeBSLMemory();    // Close BSL memory again
    
    //P1OUT |= BIT0;              // set LED2  
    for(addr = (uint16_t*)SECURE_RAM_START; addr < (uint16_t*)__get_SP_register(); addr+=1)
    {
        *addr = 0x3FFF;
    }

    FwRamKey = MPUENA | MPUPW;  // Rewrite Key
    
    // Check if there's a mass erase pending
    if (BSL430_DoMassErase == PERFORM_MASS_ERASE)
    {
        BSL430_massErase();
    }
        
    return 0;
}

/*******************************************************************************
*Function:    BSL430_ExternalJumptoBSL
*Description: Function used to call BSL from application
*             This function is forced to a memory location defined in linker file
*******************************************************************************/
#pragma location="BSL430_ENTRY_FUNCTION"
__root void BSL430_ExternalJumptoBSL(uint16_t password)
{
    BSL_PasswordToApp = password;
    PMMCTL0 = PMMPW | PMMSWBOR;      // Force a BOR 
}

/*******************************************************************************
*Function:    BSL430_API_init
*Description: sets the key for writing to flash,  sets device state
*******************************************************************************/
void BSL430_API_init(void)
{
    PMMCTL0_H = PMMPW_H;                  // open PMM registers
    PM5CTL0 &= ~LOCKLPM5;                 // clear lock IO
    PMMCTL0_H = 0x00;                     // close PMM registers

    LockedStatus = DEFAULT_STATE;
}

/*******************************************************************************
*Function:    BSL430_lock_BSL
*Description: Locks the BSL
*Returns:
*             SUCCESSFUL_OPERATION  BSL Locked
*******************************************************************************/
int8_t BSL430_lock_BSL(void)
{
    LockedStatus = LOCKED;
    return SUCCESSFUL_OPERATION;
}

/*******************************************************************************
*Function:    BSL430_unlock_BSL
*Description: Causes the BSL to compare the data buffer against the BSL password
*             BSL state will be UNLOCKED if successful
*Parameters:
*             uint8_t* data         A pointer to an array containing the password
*Returns:
*             SUCCESSFUL_OPERATION  All data placed into data array successfully
*             BSL_PASSWORD_ERROR    Correct Password was not given
*             UNKNOWN_COMMAND       Standard commands are disabled
*******************************************************************************/
int8_t BSL430_unlock_BSL(uint8_t* data)
{
    int16_t i;
    int16_t retValue =0;
    uint8_t *interrupts = (uint8_t*)BSL_PASSWORD_START;

    // This command can be disabled completely using BSL430_Config_Cmd
    if (BSL430_Config_Cmd != CONFIG_STDCMDS_ENABLED)
    {
        return UNKNOWN_COMMAND;
    }
    // Compare all interrupt vectors, except for the reset
    for( i = 0; i <= (INTERRUPT_VECTOR_END-BSL_PASSWORD_START); i++, interrupts++)
    {
        retValue |=  *interrupts ^ data[i];  
    }
    // Compare the last 2 bytes vs the User reset vector
    retValue |= (BSL430_User_Reset&0xFF) ^ data[i++];
    retValue |= (BSL430_User_Reset>>8) ^ data[i];   

    if( retValue == 0)
    {
        __delay_cycles(MASS_ERASE_DELAY);
        LockedStatus = UNLOCKED;
        return SUCCESSFUL_OPERATION;
    }
    else
    {
        // Mass erase the device unless the functionality is disabled 
        if ( BSL430_Config_MassErase != CONFIG_MASS_ERASE_PWD_DISABLED)
        {
            BSL430_massErase();
        }
        return BSL_PASSWORD_ERROR;
    }
}

/*******************************************************************************
*Function:    BSL430_RemovelockTemp
*Description: Remove lock temporarily
*Returns:
*             SUCCESSFUL_OPERATION  BSL Unlocked
*******************************************************************************/
int8_t BSL430_RemovelockTemp(void)
{
    BackupLockedStatus = LockedStatus;
    LockedStatus = UNLOCKED;
    return SUCCESSFUL_OPERATION;
}

/*******************************************************************************
*Function:    BSL430_Restorelock
*Description: Restore Lock
*Returns:
*             SUCCESSFUL_OPERATION  BSL Lock restored
*******************************************************************************/
int8_t BSL430_Restorelock(void)
{
    LockedStatus = BackupLockedStatus;
    return SUCCESSFUL_OPERATION;
}

/*******************************************************************************
*Function:    BSL430_openMemory
*Description: Unlocks memory for writing
*
*Returns:
*             SUCCESSFUL_OPERATION  FRAM is now open for writing.
*             BSL_LOCKED            Correct Password has not yet been given
*******************************************************************************/
int8_t BSL430_openMemory(void)
{
    if( LockedStatus == UNLOCKED )
    {
        return SUCCESSFUL_OPERATION;
    }
    return BSL_LOCKED;
}

/*******************************************************************************
*Function:    BSL430_closeMemory
*Description: set FRAM back to previous state
*Returns:
*             SUCCESSFUL_OPERATION  FRAM is now returned to previous state.
*******************************************************************************/
int8_t BSL430_closeMemory(void)
{
    BSL430_closeBSLMemory();       // Make sure BSL area is closed
    return SUCCESSFUL_OPERATION;
}

/*******************************************************************************
*Function:    BSL430_openBSLMemory
*Description: Unlocks BSL memory for writing
*******************************************************************************/
void BSL430_openBSLMemory(void)
{
    MPU_SetSAM(MPU_MPUSAM_OPENBSL, 0);
}

/*******************************************************************************
*Function:    BSL430_closeBSLMemory
*Description: Close access to BSL memory
*******************************************************************************/
void BSL430_closeBSLMemory(void)
{
    MPU_SetSAM(MPU_MPUSAM_DEFAULT, 0);
}

/*******************************************************************************
*Function:    BSL430_readMemory
*Description: Reads an array of bytes from memory into a supplied array
*Parameters:
*             uint32_t addr    The address from which the read should begin
*             int8_t length    The amount of bytes to read
*             uint8_t* data    The array into which the data will be saved
*Returns:
*             SUCCESSFUL_OPERATION  All Data placed into data array successfully
*             BSL_LOCKED            Correct Password has not yet been given
*******************************************************************************/
int8_t BSL430_readMemory(uint32_t addr, uint16_t length, uint8_t* data)
{
    uint32_t i;
    int8_t exceptions = SUCCESSFUL_OPERATION;
    for( i = addr+length-1; i >= addr; i-- )  // Need to fix for addr = 0
    {
        if ( ( LockedStatus != UNLOCKED ) ||
            (MPU_GetByteFromMem(i, (uint8_t *) &data[i-addr]) !=  SUCCESSFUL_OPERATION))
        {
            exceptions = BSL_LOCKED;
        }
    }
    return exceptions;
}

/*******************************************************************************
*Function:    BSL430_crcCheck
*Description: return a CRC check on the memory specified
*Parameters:
*           uint32_t addr    The address from which to start the check
*           int16_t length            The length of the data area to check
*           int16_t* return           variable in which to put the return value
*Returns:
*           SUCCESSFUL_OPERATION  CRC check done correctly
*           BSL_LOCKED            Correct Password has not yet been given
*******************************************************************************/
int16_t BSL430_crcCheck( uint32_t addr, uint16_t length, int16_t* result )
{
    uint32_t i;
    CRCINIRES = 0xFFFF;
    for( i = addr; i < addr+length; i++ )
    {
        if ( ( LockedStatus != UNLOCKED ) ||
            (MPU_GetByteFromMem(i, (uint8_t *) &CRCDIRB_L) != SUCCESSFUL_OPERATION ) ) 
        {
            return BSL_LOCKED;
        }
    }
    *result = CRCINIRES;
    return SUCCESSFUL_OPERATION;
}

/*******************************************************************************
*Function:    BSL430_callAddress
*Description: Loads the Program Counter with the supplied address
*Parameters:
*           uint32_t addr    The address which the PC should be set to
*Returns:
*           SUCCESSFUL_OPERATION  Called location has returned
*           BSL_LOCKED            Correct Password has not yet been given
*Note:
*           If successful, this function does not return.
*******************************************************************************/
int8_t BSL430_callAddress(uint32_t addr)
{
    if( LockedStatus == UNLOCKED )
    {
        MPU_SetSAM(MPU_MPUSAM_APP, 1);  // Set MPU attributes and lock it
        ((void (*)())addr)();           // type cast addr to function ptr, call
        return SUCCESSFUL_OPERATION;
    }
    return BSL_LOCKED;                        // can only be reached if BSL is locked
}

/*******************************************************************************
*Function:    BSL430_writeMemory
*Description: Writes a byte array starting at a given address.
*             Note: the function will write in word mode if possible
*             (when start address is even)
*Parameters:
*           uint32_t startAddr  The address to which the write should begin
*           uint8_t size        The number of bytes to write
*           uint8_t *data       The array of bytes to write (must be even aligned)
*Returns:
*           SUCCESSFUL_OPERATION           Bytes written successfully
*           FLASH_WRITE_CHECK_FAILED       A byte in data location post-write does not match data parameter
*                                          Note: write stops immediatly after a byte check fails
*           BSL_LOCKED                     Correct Password has not yet been given
*******************************************************************************/
int8_t BSL430_writeMemory(uint32_t startAddr, uint16_t size, uint8_t* data )
{
    int32_t i;
    int8_t exceptions = SUCCESSFUL_OPERATION;
    data+=(size-1);
    for( i = size - 1; i >= 0; i-- )
    {
        exceptions =  BSL430_writeByte( i+startAddr, *data );
        data-=1;
        if( exceptions != SUCCESSFUL_OPERATION )
        {
          break;
        } 
    }
  return exceptions;
}

/*******************************************************************************
*Function:    BSL430_writeByte
*Description: Writes a byte at a given address
*Parameters:
*           uint32_t addr   The address to which the byte should be written
*           uint8_t data    The byte to write
*Returns:
*           SUCCESSFUL_OPERATION           Byte written successfully
*           MEMORY_WRITE_CHECK_FAILED       Byte in data location post-write does not match data parameter
*           BSL_LOCKED                     Correct Password has not yet been given
*******************************************************************************/
int8_t BSL430_writeByte(uint32_t addr, uint8_t data )
{
    int8_t exceptions;
    
    if( LockedStatus == UNLOCKED )
    {
        exceptions = SUCCESSFUL_OPERATION;
        if (MPU_WriteByteToMem(addr, data) != SUCCESSFUL_OPERATION)
        {
            exceptions = MEMORY_WRITE_CHECK_FAILED;
        }
    }
    else
    {
        exceptions = BSL_LOCKED;
    }
    
    return exceptions;
}

/*******************************************************************************
*Function:    BSL430_massErase
*Description: Mass erases the entire MSP430 device
*Parameters:
*           int8_t eraseFlags                Flags describing whether to erase RAM and Info
*Returns:
*           SUCCESSFUL_OPERATION           device erased
*           MEMORY_WRITE_CHECK_FAILED      Error occured during mass erase
*           BSL_LOCKED                     Correct Password has not yet been given
*******************************************************************************/
int8_t BSL430_massErase(void)
{
    extern void mass_erase_fast(void);
    uint32_t addr;

    // Always perform mass erase
    BSL430_RemovelockTemp();

    BSL430_openBSLMemory();     // Open BSL area to change persistent variables and vectors    
    // Make sure the Mass Erase is performed even if we get a reset
    BSL430_DoMassErase = PERFORM_MASS_ERASE; 

    BSL430_User_Reset = 0xFFFF;          // Erase the application reset vector
    // Clear the interrupt vectors (except for Reset)
    for (addr = INTERRUPT_VECTOR_START ; addr <= INTERRUPT_VECTOR_END; addr+=2)
    {
        __data20_write_short(addr, 0xFFFF);
    }
    BSL430_closeBSLMemory();            // Close access to BSL 

    mass_erase_fast();  // Faster implementation of mass erase in assembly
    
    // Erase all memory protecting BSL Area
    //    for (addr = MAIN_MEM_START ; addr <= MAIN_MEM_END; addr+=2)
    //    {
    //        __data20_write_short(addr, 0xFFFF);
    //    }
    
    BSL430_openBSLMemory();     // Open BSL area 
    BSL430_DoMassErase = 0x00;  // Indicates that mass erase was completed 
    BSL430_closeBSLMemory();    // Close access to BSL 
    
    BSL430_Restorelock();

    return SUCCESSFUL_OPERATION;
}

/*******************************************************************************
* Local functions
*******************************************************************************/
/*******************************************************************************
*Function:    BSL430_entrySeq
*Description: Checks if the HW entry sequence was detected
*             This function supports entry standard sequence using RST+TEST,
*             and checking a GPIO after reset
*Returns:
*             SUCCESSFUL_OPERATION  BSL HW entry sequence detected
*             0x05                  No BSL entry sequence detected
*******************************************************************************/
static int8_t BSL430_entrySeq(void)
{
    int8_t ret = 0x05;
    /* Entry sequence with pin input */       
    PMMCTL0 = PMMPW;              // Open PMM Module
    PM5CTL0 &= ~LOCKLPM5;         // Clear locked IO Pins

    //P1DIR |= BIT0;                // P1.0 as output (LED2)
    //P1OUT &= ~BIT0;               // clear LED2 

    if ( BSL430_Config_Entry != CONFIG_ENTRY_GPIO)
    {
        if ((SYSCTL & SYSBSLIND) == SYSBSLIND)  //BSL entry indication.
        {
            ret = SUCCESSFUL_OPERATION;    // Entry sequence detected
        }
    }
    else 
    {
        // Check a GPIO in P1.1 to force BSL mode
        P1DIR &= ~(BIT1);             // P1.1 as input (S2)
        P1REN |= BIT1;                // Pull up resistor
        P1OUT |= BIT1;  
        __delay_cycles(1000);         // Wait for pull-up to go high

        if((P1IN & BIT1) == 0x00) 
        {
            ret = SUCCESSFUL_OPERATION;    // Entry sequence detected
        }
    }
    
    return ret;
}

/*******************************************************************************
*Function:    BSL430_invoke
*Description: Checks if the bootloader is invoked or should execute application
*Returns:     SUCCESSFUL_OPERATION  BSL was invoked
*             0x05                  Device should execute application
*******************************************************************************/
static int8_t BSL430_invoke(void)
{
    // Check if we can jump to application
    if ( (BSL_App_Executed != APPLICATION_EXECUTED)  || // If application didn't execute previously
          (BSL_PasswordToApp != 0xC0DE) )           // Or if it just didn't try to force BSL mode
    {
      if (BSL430_entrySeq() != SUCCESSFUL_OPERATION) // And, if there's no HW entry sequence
      {
          if (BSL_new_update_started != UPDATE_STARTED)     // And, if there was no previous BSL session pending
          {
              if (*(volatile uint16_t *) &BSL430_User_Reset != 0xFFFF)    // And, if the User's reset vector is set
              {
                  return 0x05;  // Jump to application
              }
          }
      }
    } //else, continue loading the BSL
    
    // In this way, BSL will be executed when:
    // Application executed and forced BSL mode
    // Or, HW entry sequence is detected
    // Or, A previous BSL session was interrupted
    // Or, The Reset vector is blank
    
    return SUCCESSFUL_OPERATION;
}

/*******************************************************************************
*Function:    MPU_SetSAM
*Description: Write the MPU SAM register
*Parameters: 
*             uint16_t SAM_Val    Value for SAM register 
*             uint8_t lock        1 to lock the MPU
*
*Returns:
*             SUCCESSFUL_OPERATION  FRAM is now open for writing.
*             BSL_LOCKED            Correct Password has not yet been given
*******************************************************************************/
static void MPU_SetSAM(uint16_t SAM_Val, uint8_t lock)
{
    MPUCTL0 = FwRamKey;
    MPUSAM = SAM_Val;   // Open memory for Write access
    if (lock == 1)
    {
        MPUCTL0 = FwRamKey | MPULOCK;
    }
    
    MPUCTL0_H = 0xFF;          
}

/*******************************************************************************
*Function:    MPU_GetByteFromMem
*Description: Read a byte from memory checking the MPU attributes
*             Checks if memory is protected or redirected (i.e. reset vector)
*Parameters: 
*             uint32_t addr        Address to be read
*             uint8_t *value      written with the read value
*
*Returns:
*             BSL_CRYPTO_ERROR      Memory can't be read
*             SUCCESSFUL_OPERATION  Memory read correctly
*******************************************************************************/
static int8_t MPU_GetByteFromMem(uint32_t addr, uint8_t *value)
{
    if (BSL430_Crypto_addrCheck(addr) == BSL_MEMORY_IPEPROTECTED)
    {
        return BSL_CRYPTO_ERROR;
    }
    else
    {
        if (addr == 0x0FFFF)   // User's reset vector
        {
            *value = (BSL430_User_Reset >> 8);
        }
        else if (addr == 0x0FFFE)  // User's reset vector
        {
            *value = (BSL430_User_Reset & 0xFF);
        }
        else
        {
            *value = __data20_read_char(addr);
        }
    }
    
     return SUCCESSFUL_OPERATION;
}

/*******************************************************************************
*Function:    MPU_WriteByteToMem
*Description: Writes a byte to memory checking the MPU attributes
*             Checks if memory is protected or redirected (i.e. reset vector)
*Parameters: 
*             uint32_t addr        Address to be written
*             uint8_t value       Value to be written
*
*Returns:
*             BSL_CRYPTO_ERROR      Memory can't be written
*             SUCCESSFUL_OPERATION  Memory written correctly
*******************************************************************************/
static int8_t MPU_WriteByteToMem(uint32_t addr, uint8_t value)
{
    int8_t ret;

    ret = BSL430_Crypto_addrCheck(addr);
    if (ret == BSL_MEMORY_IPEPROTECTED)
    {
        return BSL_CRYPTO_ERROR;
    }
    else if (ret == BSL_MEMORY_MPUPROTECTED)
    {
        BSL430_openBSLMemory();
    }
    
    ret = SUCCESSFUL_OPERATION;
    if (addr == 0x0FFFF)   // User's reset vector
    {
        *(uint16_t *) &BSL430_User_Reset = (uint16_t)((value << 8) | (BSL430_User_Reset & 0x00FF));
    }
    else if (addr == 0x0FFFE)  // User's reset vector
    {
        *(uint16_t *) &BSL430_User_Reset = (uint16_t)((value) | (BSL430_User_Reset & 0xFF00));
    }
    else
    {
        __data20_write_char(addr, value);
        if( value != __data20_read_char( addr ))
        {
            ret = BSL_CRYPTO_ERROR;
        }
    }

    BSL430_closeBSLMemory();
    return ret;
}

/*******************************************************************************
* UNUSED Header functions
*******************************************************************************/
int8_t BSL430_toggleInfoLock(){return 0;}
int8_t BSL430_eraseLocation( int8_t block_erase, uint32_t addr ){return 0;}
