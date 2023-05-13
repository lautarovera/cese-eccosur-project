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
* Name:   test_crypto.c
* Description: 
*         Functional tests for the cryptographic primitives
*         All tests are based on Known Answer Tests (KAT) from vectors
*         provided by NIST, unless otherwise specified.
*
* Author: Oscar Guillen
* Email:  o-guillen@ti.com
*
*******************************************************************************/

#include <msp430fr5969.h>
#include <stdio.h>
#include "test_crypto.h"
#include "BSL430_Crypto_Config.h"
#include CIPHER_H
#include MODE_H
#include MAC_H

uint16_t ntests = 0;
uint16_t nfails = 0;
uint8_t flag = 0;


#ifdef USE_MODE_CCM

#if (CCM_TAG_LEN == 16) && (CCM_AAD_LEN == 0)
/*******************************************************************************
* *Function:  test_aes_ccm_decrypt_128_no_aad()
* *Description: 
*             Functional test against a three block message (Known Answer Test)
*             AES-CCM 128-bits with no Additional Authentication Data
*******************************************************************************/

int8_t test_aes_ccm_decrypt_128_no_aad(void)
{
  int8_t test_name[] = "AES-CCM 128 Decryption with no AAD";
  int8_t str[80];  
  #define P_LEN 24
  
  uint8_t key[BYTES_128]={
     0xd2,0x4a,0x3d,0x3d,0xde,0x8c,0x84,0x83,0x02,0x80,0xcb,0x87,0xab,0xad,0x0b,0xb3
  };
  uint8_t iv[BYTES_128]={
     0x01,0xf1,0x10,0x00,0x35,0xbb,0x24,0xa8,0xd2,0x60,0x04,0xe0,0xe2,0x4b,0x00,0x00
  };
  uint8_t ciphertext_msg[P_LEN+CCM_TAG_LEN]={
     0x1f,0xae,0xb0,0xee,0x2c,0xa2,0xcd,0x52,0xf0,0xaa,0x39,0x66,0x57,0x83,0x44,0xf2,
     0x4e,0x69,0xb7,0x42,0xc4,0xab,0x37,0xab,
     0x11,0x23,0x30,0x12,0x19,0xc7,0x05,0x99,0xb7,0xc3,0x73,0xad,0x4b,0x3a,0xd6,0x7b
  };
  uint8_t plaintext_msg[P_LEN]={
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x72,0x69,0x22,0x0f,0x30,0x87,0x00,0x06
  };
  
// Plen = 24, Nlen = 13, Tlen = 16, [Alen = 0]
// Key = d24a3d3dde8c84830280cb87abad0bb3
// Nonce = f1100035bb24a8d26004e0e24b
// Count = 0
// Adata = 00
// Payload = 7c86135ed9c2a515aaae0e9a208133897269220f30870006
// CT = 1faeb0ee2ca2cd52f0aa3966578344f24e69b742c4ab37ab1123301219c70599b7c373ad4b3ad67b
  
  puts(test_name);
  ntests ++;
  
  if ( mode_ccm_decrypt(ciphertext_msg, key, iv, P_LEN)
       == TAG_INVALID) 
  {
    puts("  Tag does not match!");
    nfails ++;
  }
  else {
    for (short i=0; i < P_LEN; i++) {
      flag=(ciphertext_msg[i]==plaintext_msg[i]);
      if (flag == 0) {
        sprintf(str,"  Failure in message byte #%d", i);
        puts(str);
        nfails ++;
        break;
      }
    }
  }
  
  return 0;
}


/*******************************************************************************
* *Function:  test_aes_ccm_decrypt_128_no_aad_t2()
* *Description: 
*             Functional test against a three block message (Known Answer Test)
*             AES-CCM 128-bits with no Additional Authentication Data
*******************************************************************************/

int8_t test_aes_ccm_decrypt_128_no_aad_t2(void)
{
  int8_t test_name[] = "AES-CCM 128 Decryption with no AAD, test 2";
  int8_t str[80];  
  #define P0_LEN 224
  
  uint8_t key[BYTES_128]={
     0xd2,0x4a,0x3d,0x3d,0xde,0x8c,0x84,0x83,0x02,0x80,0xcb,0x87,0xab,0xad,0x0b,0xb3
  };
  uint8_t iv[BYTES_128]={
     0x01,0xf1,0x10,0x00,0x35,0xbb,0x24,0xa8,0xd2,0x60,0x04,0xe0,0xe2,0x4b,0x00,0x00
  };
  uint8_t ciphertext_msg[P0_LEN+CCM_TAG_LEN]={
     0x1f,0xae,0xb0,0xee,0x2c,0xa2,0xcd,0x52,0xf0,0xaa,0x39,0x66,0x57,0x83,0x44,0xf2,
     0x40,0x86,0x86,0x13,0x2d,0xee,0x92,0xb8,0x90,0xe9,0xc3,0xab,0xe7,0x71,0x0c,0xb1,
     0x18,0x2c,0xd0,0xf4,0x37,0x57,0x2b,0x38,0x70,0x7d,0x90,0x74,0xe2,0xb5,0xe8,0x8e,
     0x1d,0x58,0xe7,0x7e,0x23,0x11,0x8b,0x72,0x50,0xee,0x1e,0xd7,0x7f,0x6e,0xdb,0xf2,
     0x22,0x6e,0x85,0x45,0x46,0x64,0x82,0x8b,0xe7,0x80,0x07,0xa2,0x8a,0x52,0x04,0xbb,
     0x79,0x5a,0x1e,0x21,0x93,0xf8,0xed,0xa9,0xbb,0xad,0x8f,0xca,0x97,0xc1,0x5a,0xa7,
     0xea,0x0e,0x0f,0x9c,0x9b,0xd1,0x05,0x5a,0xb9,0xcb,0xce,0xcf,0xf0,0x43,0xd3,0xac,
     0x87,0x84,0xb8,0x97,0xad,0x00,0xbc,0x8c,0x61,0x24,0x64,0x57,0x9e,0x18,0x5f,0xb4,
     0xc2,0x9c,0xff,0x07,0x93,0x0d,0xb5,0x47,0x45,0xc7,0xf2,0x00,0x74,0x21,0x81,0x74,
     0x24,0xea,0x01,0xde,0x3d,0xa3,0xcd,0x8f,0x4c,0xd2,0xf4,0xe5,0x2a,0x85,0x7b,0x43,
     0xad,0x08,0x19,0xa8,0xc3,0x96,0xd4,0x3e,0x3d,0x6c,0x44,0xec,0x6a,0x5d,0x41,0x99,
     0x7c,0x71,0x40,0xcf,0x38,0x25,0xd6,0x3f,0xe7,0x6d,0xde,0xda,0x30,0x3c,0x8c,0x51,
     0xe8,0xb8,0x63,0x7c,0x49,0x4a,0xe1,0x2c,0x83,0x47,0x2e,0xac,0xec,0xf1,0x41,0x45,
     0x36,0x62,0xb6,0xb1,0x57,0x73,0xef,0x29,0xcc,0xc7,0x8b,0x67,0xe8,0xa4,0x74,0xb0,
     0xe7,0x16,0x95,0x08,0x34,0xb2,0xde,0x8e,0xf0,0x0e,0x1a,0xdc,0x77,0xc5,0x6b,0x41
  };
  uint8_t plaintext_msg[P0_LEN]={
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89,
     0x7c,0x86,0x13,0x5e,0xd9,0xc2,0xa5,0x15,0xaa,0xae,0x0e,0x9a,0x20,0x81,0x33,0x89     
  };
  
// Plen = 24, Nlen = 13, Tlen = 16, [Alen = 0]
// Key = d24a3d3dde8c84830280cb87abad0bb3
// Nonce = f1100035bb24a8d26004e0e24b
// Count = 0
// Adata = 00
// Payload = 7c86135ed9c2a515aaae0e9a208133897269220f30870006
// CT = 1faeb0ee2ca2cd52f0aa3966578344f24e69b742c4ab37ab1123301219c70599b7c373ad4b3ad67b
  
  puts(test_name);
  ntests ++;
  
  if ( mode_ccm_decrypt(ciphertext_msg, key, iv, P0_LEN)
       == TAG_INVALID) 
  {
    puts("  Tag does not match!");
    nfails ++;
  }
//  else {
    for (short i=0; i < P0_LEN; i++) {
      flag=(ciphertext_msg[i]==plaintext_msg[i]);
      if (flag == 0) {
        sprintf(str,"  Failure in message byte #%d", i);
        puts(str);
        nfails ++;
        break;
      }
//    }
  }
  
  return 0;
}
#endif /*(CCM_TAG_LEN == 16) && (CCM_AAD_LEN == 0)*/


#if  (CCM_TAG_LEN == 8) && (CCM_AAD_LEN == 8)
/*******************************************************************************
* *Function:  test_aes_ccm_decrypt_128_with_aad()
* *Description: 
*             Functional test against a three block message (Known Answer Test)
*             AES-CCM 128-bits with 8 bytes AAD and 8 bytes Tag
*******************************************************************************/

int8_t test_aes_ccm_decrypt_128_with_aad(void)
{
  int8_t test_name[] = "AES-CCM 128 Decryption. AAD = 8, Tag = 8, P = 23 [bytes]";
  int8_t str[80];  
  #define P1_LEN 23
    
  uint8_t key[BYTES_128]={
     0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF
  };
  uint8_t iv[BYTES_128]={
     0x01,0x00,0x00,0x00,0x03,0x02,0x01,0x00,0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0x00,0x00
  };
  uint8_t ciphertext_msg[P1_LEN+CCM_TAG_LEN]={
     0x58,0x8C,0x97,0x9A,0x61,0xC6,0x63,0xD2,0xF0,0x66,0xD0,0xC2,0xC0,0xF9,0x89,0x80,
     0x6D,0x5F,0x6B,0x61,0xDA,0xC3,0x84,0x17,0xE8,0xD1,0x2C,0xFD,0xF9,0x26,0xE0
  };
  uint8_t plaintext_msg[P1_LEN]={
     0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,
     0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E
  };  
  uint8_t aad[CCM_AAD_LEN]={
     0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07
  };

//   =============== Packet Vector #1 ==================
//   AES Key =  C0 C1 C2 C3  C4 C5 C6 C7  C8 C9 CA CB  CC CD CE CF
//   Nonce =    00 00 00 03  02 01 00 A0  A1 A2 A3 A4  A5
//   Total packet length = 31. [Input with 8 cleartext header octets]
//              00 01 02 03  04 05 06 07  08 09 0A 0B  0C 0D 0E 0F
//              10 11 12 13  14 15 16 17  18 19 1A 1B  1C 1D 1E
//   CBC IV in: 59 00 00 00  03 02 01 00  A0 A1 A2 A3  A4 A5 00 17
//   CBC IV out:EB 9D 55 47  73 09 55 AB  23 1E 0A 2D  FE 4B 90 D6
//   After xor: EB 95 55 46  71 0A 51 AE  25 19 0A 2D  FE 4B 90 D6   [hdr]
//   After AES: CD B6 41 1E  3C DC 9B 4F  5D 92 58 B6  9E E7 F0 91
//   After xor: C5 BF 4B 15  30 D1 95 40  4D 83 4A A5  8A F2 E6 86   [msg]
//   After AES: 9C 38 40 5E  A0 3C 1B C9  04 B5 8B 40  C7 6C A2 EB
//   After xor: 84 21 5A 45  BC 21 05 C9  04 B5 8B 40  C7 6C A2 EB   [msg]
//   After AES: 2D C6 97 E4  11 CA 83 A8  60 C2 C4 06  CC AA 54 2F
//   CBC-MAC  : 2D C6 97 E4  11 CA 83 A8
//   CTR Start: 01 00 00 00  03 02 01 00  A0 A1 A2 A3  A4 A5 00 01
//   CTR[0001]: 50 85 9D 91  6D CB 6D DD  E0 77 C2 D1  D4 EC 9F 97
//   CTR[0002]: 75 46 71 7A  C6 DE 9A FF  64 0C 9C 06  DE 6D 0D 8F
//   CTR[MAC ]: 3A 2E 46 C8  EC 33 A5 48
//   Total packet length = 39. [Authenticated and Encrypted Output]
//              00 01 02 03  04 05 06 07  58 8C 97 9A  61 C6 63 D2
//              F0 66 D0 C2  C0 F9 89 80  6D 5F 6B 61  DA C3 84 17
//              E8 D1 2C FD  F9 26 E0
  
  
  puts(test_name);
  ntests ++;
  
  if ( mode_ccm_decrypt(ciphertext_msg, key, iv, aad, P1_LEN)
       == TAG_INVALID) 
  {
    puts("  Tag does not match!");
    nfails ++;
  }
  else {
    for (short i=0; i < P1_LEN; i++) {
      flag=(ciphertext_msg[i]==plaintext_msg[i]);
      if (flag == 0) {
        sprintf(str,"  Failure in message byte #%d", i);
        puts(str);
        nfails ++;
        break;
      }
    }
  }
  
  return 0;
}
#endif /* (CCM_TAG_LEN == 8) && (CCM_AAD_LEN == 8) */


#if  (CCM_TAG_LEN == 4) && (CCM_AAD_LEN == 8)
/*******************************************************************************
* *Function:  test_aes_ccm_decrypt_128_with_aad_t2()
* *Description: 
*             Functional test against a three block message (Known Answer Test)
*             AES-CCM 128-bits with 8 bytes AAD, 4 bytes Tag, 4 bytes message
*******************************************************************************/

int8_t test_aes_ccm_decrypt_128_with_aad_t2(void)
{
  int8_t test_name[] = "AES-CCM 128 Decryption. AAD = 8, Tag = 4, P = 4 [bytes]";
  int8_t str[80];
  #define P2_LEN 4
    
  uint8_t key[BYTES_128]={
     0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x4b,0x4c,0x4d,0x4e,0x4f
  };
  uint8_t iv[BYTES_128]={
     0x07,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
  };
  uint8_t ciphertext_msg[P2_LEN+CCM_TAG_LEN]={
     0x71,0x62,0x01,0x5b,
     0x4d,0xac,0x25,0x5d     
  };
  uint8_t plaintext_msg[P2_LEN]={
     0x20,0x21,0x22,0x23
  };  
  uint8_t aad[CCM_AAD_LEN]={
     0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07
  };

//  K:    40 41 42 43  44 45 46 47  48 49 4a 4b  4c 4d 4e 4f
//  N:    10 11 12 13  14 15 16
//  A:    00 01 02 03  04 05 06 07
//  P:    20 21 22 23
//  B:    4f 10 11 12  13 14 15 16  00 00 00 00  00 00 00 04
//        00 08 00 01  02 03 04 05  06 07 00 00  00 00 00 00
//        20 21 22 23  00 00 00 00  00 00 00 00  00 00 00 00
//  T:    60 84 34 1b
//  Ctr0: 07 10 11 12  13 14 15 16  00 00 00 00  00 00 00 00
//  S0:   2d 28 11 46  10 67 6c 26  32 ba d7 48  55 9a 67 9a
//  Ctr1: 07 10 11 12  13 14 15 16  00 00 00 00  00 00 00 01
//  S1:   51 43 23 78  e4 74 b3 39  71 31 84 84  10 3c dd fb
//  C:    71 62 01 5b  4d ac 25 5d

  
  puts(test_name);
  ntests ++;
  
  if ( mode_ccm_decrypt(ciphertext_msg, key, iv, aad, P2_LEN)
       == TAG_INVALID) 
  {
    puts("  Tag does not match!");
    nfails ++;
  }
  else {
    for (short i=0; i < P2_LEN; i++) {
      flag=(ciphertext_msg[i]==plaintext_msg[i]);
      if (flag == 0) {
        sprintf(str,"  Failure in message byte #%d", i);
        puts(str);
        nfails ++;
        break;
      }
    }
  }
  
  return 0;
}
#endif /* (CCM_TAG_LEN == 4) && (CCM_AAD_LEN == 8) */


#if  (CCM_TAG_LEN == 10) && (CCM_AAD_LEN == 12)
/*******************************************************************************
* *Function:  test_aes_ccm_decrypt_128_with_aad_t3()
* *Description: 
*             Functional test against a three block message (Known Answer Test)
*             AES-CCM 128-bits with 12 bytes AAD and 10 bytes Tag
*******************************************************************************/

int8_t test_aes_ccm_decrypt_128_with_aad_t3(void)
{
  int8_t test_name[] = "AES-CCM 128 Decryption. AAD = 12, Tag = 10, P = 20 [bytes]";
  int8_t str[80];  
  #define P3_LEN 20
  
  uint8_t key[BYTES_128]={
     0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF
  };
  uint8_t iv[BYTES_128]={
     0x01,0x00,0x00,0x00,0x0D,0x0C,0x0B,0x0A,0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0x00,0x01
  };
  uint8_t ciphertext_msg[P3_LEN+CCM_TAG_LEN]={
     0x67,0x6B,0xB2,0x03,0x80,0xB0,0xE3,0x01,0xE8,0xAB,0x79,0x59,0x0A,0x39,0x6D,0xA7,
     0x8B,0x83,0x49,0x34,
     0xF5,0x3A,0xA2,0xE9,0x10,0x7A,0x8B,0x6C,0x02,0x2C
  };
  uint8_t plaintext_msg[P3_LEN]={
     0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,
     0x1C,0x1D,0x1E,0x1F
  };  
  uint8_t aad[CCM_AAD_LEN]={
     0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B
  };

//   =============== Packet Vector #11 ==================
//   AES Key =  C0 C1 C2 C3  C4 C5 C6 C7  C8 C9 CA CB  CC CD CE CF
//   Nonce =    00 00 00 0D  0C 0B 0A A0  A1 A2 A3 A4  A5
//   Total packet length = 32. [Input with 12 cleartext header octets]
//              00 01 02 03  04 05 06 07  08 09 0A 0B  0C 0D 0E 0F
//              10 11 12 13  14 15 16 17  18 19 1A 1B  1C 1D 1E 1F
//   CBC IV in: 61 00 00 00  0D 0C 0B 0A  A0 A1 A2 A3  A4 A5 00 14
//   CBC IV out:B0 84 85 79  51 D2 FA 42  76 EF 3A D7  14 B9 62 87
//   After xor: B0 88 85 78  53 D1 FE 47  70 E8 32 DE  1E B2 62 87   [hdr]
//   After AES: C9 B3 64 7E  D8 79 2A 5C  65 B7 CE CC  19 0A 97 0A
//   After xor: C5 BE 6A 71  C8 68 38 4F  71 A2 D8 DB  01 13 8D 11   [msg]
//   After AES: 34 0F 69 17  FA B9 19 D6  1D AC D0 35  36 D6 55 8B
//   After xor: 28 12 77 08  FA B9 19 D6  1D AC D0 35  36 D6 55 8B   [msg]
//   After AES: 6B 5E 24 34  12 CC C2 AD  6F 1B 11 C3  A1 A9 D8 BC
//   CBC-MAC  : 6B 5E 24 34  12 CC C2 AD  6F 1B
//   CTR Start: 01 00 00 00  0D 0C 0B 0A  A0 A1 A2 A3  A4 A5 00 01
//   CTR[0001]: 6B 66 BC 0C  90 A1 F1 12  FC BE 6F 4E  12 20 77 BC
//   CTR[0002]: 97 9E 57 2B  BE 65 8A E5  CC 20 11 83  2A 9A 9B 5B
//   CTR[MAC ]: 9E 64 86 DD  02 B6 49 C1  6D 37
//   Total packet length = 42. [Authenticated and Encrypted Output]
//              00 01 02 03  04 05 06 07  08 09 0A 0B  67 6B B2 03
//              80 B0 E3 01  E8 AB 79 59  0A 39 6D A7  8B 83 49 34
//              F5 3A A2 E9  10 7A 8B 6C  02 2C
  
  puts(test_name);
  ntests ++;
  
  if ( mode_ccm_decrypt(ciphertext_msg, key, iv, aad, P3_LEN)
       == TAG_INVALID) 
  {
    puts("  Tag does not match!");
    nfails ++;
  }
  else {
    for (int8_t i=0; i < P3_LEN; i++) {
      flag=(ciphertext_msg[i]==plaintext_msg[i]);
      if (flag == 0) {
        sprintf(str,"  Failure in message byte #%d", i);
        puts(str);
        nfails ++;
        break;
      }
    }
  }
  
  return 0;
}
#endif


#endif /* USE_MODE_CCM */



#ifdef  USE_MAC_CBC
/*******************************************************************************
* *Function:  test_aes_cbc_mac_128()
* *Description: 
*             Functional test against a selection of vectors (Known Answer Test)
*             AES CBC-MAC with key size = 128
*******************************************************************************/

int8_t test_aes_cbc_mac_128(void)
{
  int8_t test_name[] = "AES CBC-MAC 128";
  int8_t str[80];
  
  uint8_t key_auth[BYTES_128]={
     0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
  };
  uint8_t tag[BYTES_128]={
     0xC8,0x4D,0xF4,0x1A,0x20,0x4B,0x3D,0xA8,0x26,0x0C,0xE1,0x84,0x0C,0xD0,0x5E,0x88 
  };
  uint8_t plaintext_msg[BYTES_128*TEST_VECTORS]={
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
  };
  
  //ciphertexts
  //0xa1,0xf6,0x25,0x8c,0x87,0x7d,0x5f,0xcd,0x89,0x64,0x48,0x45,0x38,0xbf,0xc9,0x2c
  //0x06,0x4C,0xBD,0x94,0x4E,0x9D,0x5F,0x6E,0x21,0xCE,0xAB,0x8F,0x34,0xF7,0x4E,0x3D
  //0xC8,0x4D,0xF4,0x1A,0x20,0x4B,0x3D,0xA8,0x26,0x0C,0xE1,0x84,0x0C,0xD0,0x5E,0x88  

  uint8_t new_tag[BYTES_128] = {0};
  
  puts(test_name);
  ntests ++;
  
  mac_cbc(new_tag, plaintext_msg, key_auth, BYTES_128*TEST_VECTORS); // mac under test
  
  for (uint16_t i=0; i < BYTES_128; i++) {
    flag=(new_tag[i]==tag[i]);
    if (flag == 0) {
      sprintf(str,"  Failure in message byte #%d", i);
      puts(str);
      nfails ++;
      break;
    }
  }
  
  return 0;
}


/*******************************************************************************
* *Function:  test_aes_cbc_mac_192()
* *Description: 
*             Functional test against a selection of vectors (Known Answer Test)
*             AES CBC-MAC with key size = 192
*******************************************************************************/

int8_t test_aes_cbc_mac_192(void)
{
  int8_t test_name[] = "AES CBC-MAC 192";
  int8_t str[80];
    
  uint8_t key_auth[BYTES_192]={
     0x8e,0x73,0xb0,0xf7,0xda,0x0e,0x64,0x52,0xc8,0x10,0xf3,0x2b,0x80,0x90,0x79,0xe5,
     0x62,0xf8,0xea,0xd2,0x52,0x2c,0x6b,0x7b
  };
  uint8_t tag[BYTES_128]={
     0x7b,0x6e,0x39,0xa6,0xa1,0x69,0x73,0x79,0xb1,0xfa,0x6c,0xf6,0x2b,0x69,0x5a,0xd5
  };
  uint8_t plaintext_msg[BYTES_128*TEST_VECTORS]={
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
  };
  
  //ciphertexts
  //0x22,0x45,0x2d,0x8e,0x49,0xa8,0xa5,0x93,0x9f,0x73,0x21,0xce,0xea,0x6d,0x51,0x4b
  //0xee,0x03,0x8a,0xac,0xc8,0xcc,0x16,0x7d,0x23,0xcd,0x03,0xa1,0xd8,0x2c,0xc6,0x6c
  //0x7b,0x6e,0x39,0xa6,0xa1,0x69,0x73,0x79,0xb1,0xfa,0x6c,0xf6,0x2b,0x69,0x5a,0xd5
  
  uint8_t new_tag[BYTES_128] = {0};
  
  puts(test_name);
  ntests ++;
  
  mac_cbc(new_tag, plaintext_msg, key_auth, BYTES_128*TEST_VECTORS); // mac under test
  
  for (uint16_t i=0; i < BYTES_128; i++) {
    flag=(new_tag[i]==tag[i]);
    if (flag == 0) {
      sprintf(str,"  Failure in message byte #%d", i);
      puts(str);
      nfails ++;
      break;
    }
  }
  
  return 0;
}


/*******************************************************************************
* *Function:  test_aes_cbc_mac_256()
* *Description: 
*             Functional test against a selection of vectors (Known Answer Test)
*             AES CBC-MAC with key size = 256
*******************************************************************************/

int8_t test_aes_cbc_mac_256(void)
{
  int8_t test_name[] = "AES CBC-MAC 256";
  int8_t str[80];
    
  uint8_t key_auth[BYTES_256]={
     0x60,0x3d,0xeb,0x10,0x15,0xca,0x71,0xbe,0x2b,0x73,0xae,0xf0,0x85,0x7d,0x77,0x81,
     0x1f,0x35,0x2c,0x07,0x3b,0x61,0x08,0xd7,0x2d,0x98,0x10,0xa3,0x09,0x14,0xdf,0xf4
  };
  uint8_t tag[BYTES_128]={
     0xeb,0x19,0x44,0x8d,0xa3,0xe6,0x09,0x41,0x06,0x2d,0xef,0x18,0x0f,0x4c,0x8f,0xc6
  };
  uint8_t plaintext_msg[BYTES_128*TEST_VECTORS]={
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
  };
  uint8_t new_tag[BYTES_128] = {0};
  
  //ciphertexts
  //0xe5,0x68,0xf6,0x81,0x94,0xcf,0x76,0xd6,0x17,0x4d,0x4c,0xc0,0x43,0x10,0xa8,0x54
  //0x1f,0x33,0xdc,0xcb,0x25,0x37,0xe9,0x12,0x8d,0x44,0xab,0xcf,0xb2,0xbe,0x15,0xef
  //0xeb,0x19,0x44,0x8d,0xa3,0xe6,0x09,0x41,0x06,0x2d,0xef,0x18,0x0f,0x4c,0x8f,0xc6
  
  puts(test_name);
  ntests ++;
  
  mac_cbc(new_tag, plaintext_msg, key_auth, BYTES_128*TEST_VECTORS); // mac under test
  
  for (uint16_t i=0; i < BYTES_128; i++) {
    flag=(new_tag[i]==tag[i]);
    if (flag == 0) {
      sprintf(str,"  Failure in message byte #%d", i);
      puts(str);
      nfails ++;
      break;
    }
  }
  
  return 0;
}
#endif  /* USE_MAC_CBC */


#ifdef  USE_MODE_CTR
/*******************************************************************************
* *Function:  test_aes_ctr_decrypt_128()
* *Description: 
*             Functional test against a three block message (Known Answer Test)
*             AES-CTR mode with key size = 128
*******************************************************************************/

int8_t test_aes_ctr_decrypt_128(void)
{
  int8_t test_name[] = "AES-CTR 128";
  int8_t str[80];
    
  uint8_t key[BYTES_128]={
     0x2b,0x7e,0x15,0x16,0x28,0xae,0xd2,0xa6,0xab,0xf7,0x15,0x88,0x09,0xcf,0x4f,0x3c
  };
  uint8_t iv[BYTES_128]={
     0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xfb,0xfc,0xfd,0xfe,0xff
  };  
  uint8_t ciphertext_msg[BYTES_128*TEST_VECTORS]={
     0x87,0x4d,0x61,0x91,0xb6,0x20,0xe3,0x26,0x1b,0xef,0x68,0x64,0x99,0x0d,0xb6,0xce,
     0x98,0x06,0xf6,0x6b,0x79,0x70,0xfd,0xff,0x86,0x17,0x18,0x7b,0xb9,0xff,0xfd,0xff,
     0x5a,0xe4,0xdf,0x3e,0xdb,0xd5,0xd3,0x5e,0x5b,0x4f,0x09,0x02,0x0d,0xb0,0x3e,0xab
  };
  uint8_t plaintext_msg[BYTES_128*TEST_VECTORS]={
     0x6b,0xc1,0xbe,0xe2,0x2e,0x40,0x9f,0x96,0xe9,0x3d,0x7e,0x11,0x73,0x93,0x17,0x2a,
     0xae,0x2d,0x8a,0x57,0x1e,0x03,0xac,0x9c,0x9e,0xb7,0x6f,0xac,0x45,0xaf,0x8e,0x51,
     0x30,0xc8,0x1c,0x46,0xa3,0x5c,0xe4,0x11,0xe5,0xfb,0xc1,0x19,0x1a,0x0a,0x52,0xef
  };  
  
  puts(test_name);
  ntests ++;
  
  mode_ctr_decrypt(ciphertext_msg, key, iv, BYTES_128*TEST_VECTORS); // mode under test
  
  for (uint16_t i=0; i < BYTES_128*TEST_VECTORS; i++) {
    flag=(ciphertext_msg[i]==plaintext_msg[i]);
    if (flag == 0) {
      sprintf(str,"  Failure in message byte #%d", i);
      puts(str);
      nfails ++;
      break;
    }
  }
  
  return 0;
}


/*******************************************************************************
* *Function:  test_aes_ctr_decrypt_192()
* *Description: 
*             Functional test against a selection of vectors (Known Answer Test)
*             AES-CTR mode with key size = 192
*******************************************************************************/

int8_t test_aes_ctr_decrypt_192(void)
{
  int8_t test_name[] = "AES-CTR 192";
  int8_t str[80];
    
  uint8_t key[BYTES_192]={
     0x8e,0x73,0xb0,0xf7,0xda,0x0e,0x64,0x52,0xc8,0x10,0xf3,0x2b,0x80,0x90,0x79,0xe5,
     0x62,0xf8,0xea,0xd2,0x52,0x2c,0x6b,0x7b
  };
  uint8_t iv[BYTES_128]={
     0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xfb,0xfc,0xfd,0xfe,0xff
  };  
  uint8_t ciphertext_msg[BYTES_128*TEST_VECTORS]={
     0x1a,0xbc,0x93,0x24,0x17,0x52,0x1c,0xa2,0x4f,0x2b,0x04,0x59,0xfe,0x7e,0x6e,0x0b,
     0x09,0x03,0x39,0xec,0x0a,0xa6,0xfa,0xef,0xd5,0xcc,0xc2,0xc6,0xf4,0xce,0x8e,0x94,
     0x1e,0x36,0xb2,0x6b,0xd1,0xeb,0xc6,0x70,0xd1,0xbd,0x1d,0x66,0x56,0x20,0xab,0xf7
  };
  uint8_t plaintext_msg[BYTES_128*TEST_VECTORS]={
     0x6b,0xc1,0xbe,0xe2,0x2e,0x40,0x9f,0x96,0xe9,0x3d,0x7e,0x11,0x73,0x93,0x17,0x2a,
     0xae,0x2d,0x8a,0x57,0x1e,0x03,0xac,0x9c,0x9e,0xb7,0x6f,0xac,0x45,0xaf,0x8e,0x51,
     0x30,0xc8,0x1c,0x46,0xa3,0x5c,0xe4,0x11,0xe5,0xfb,0xc1,0x19,0x1a,0x0a,0x52,0xef
  };
  
  puts(test_name);
  ntests ++;
  
  mode_ctr_decrypt(ciphertext_msg, key, iv, BYTES_128*TEST_VECTORS); // mode under test
  
  for (uint16_t i=0; i < BYTES_128*TEST_VECTORS; i++) {
    flag=(ciphertext_msg[i]==plaintext_msg[i]);
    if (flag == 0) {
      sprintf(str,"  Failure in message byte #%d", i);
      puts(str);
      nfails ++;
      break;
    }
  }
  
  return 0;
}


/*******************************************************************************
* *Function:  test_aes_ctr_decrypt_256()
* *Description: 
*             Functional test against a selection of vectors (Known Answer Test)
*             AES-CTR mode with key size = 256
*******************************************************************************/

int8_t test_aes_ctr_decrypt_256(void)
{
  int8_t test_name[] = "AES-CTR 256";
  int8_t str[80];
    
  uint8_t key[BYTES_256]={
     0x60,0x3d,0xeb,0x10,0x15,0xca,0x71,0xbe,0x2b,0x73,0xae,0xf0,0x85,0x7d,0x77,0x81,
     0x1f,0x35,0x2c,0x07,0x3b,0x61,0x08,0xd7,0x2d,0x98,0x10,0xa3,0x09,0x14,0xdf,0xf4
  };
  uint8_t iv[BYTES_128]={
     0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xfb,0xfc,0xfd,0xfe,0xff
  };  
  uint8_t ciphertext_msg[BYTES_128*TEST_VECTORS]={
     0x60,0x1e,0xc3,0x13,0x77,0x57,0x89,0xa5,0xb7,0xa7,0xf5,0x04,0xbb,0xf3,0xd2,0x28,
     0xf4,0x43,0xe3,0xca,0x4d,0x62,0xb5,0x9a,0xca,0x84,0xe9,0x90,0xca,0xca,0xf5,0xc5,
     0x2b,0x09,0x30,0xda,0xa2,0x3d,0xe9,0x4c,0xe8,0x70,0x17,0xba,0x2d,0x84,0x98,0x8d
  };
  uint8_t plaintext_msg[BYTES_128*TEST_VECTORS]={
     0x6b,0xc1,0xbe,0xe2,0x2e,0x40,0x9f,0x96,0xe9,0x3d,0x7e,0x11,0x73,0x93,0x17,0x2a,
     0xae,0x2d,0x8a,0x57,0x1e,0x03,0xac,0x9c,0x9e,0xb7,0x6f,0xac,0x45,0xaf,0x8e,0x51,
     0x30,0xc8,0x1c,0x46,0xa3,0x5c,0xe4,0x11,0xe5,0xfb,0xc1,0x19,0x1a,0x0a,0x52,0xef
  }; 
  
  puts(test_name);
  ntests ++;
  
  mode_ctr_decrypt(ciphertext_msg, key, iv, BYTES_128*TEST_VECTORS); // mode under test
  
  for (uint16_t i=0; i < BYTES_128*TEST_VECTORS; i++) {
    flag=(ciphertext_msg[i]==plaintext_msg[i]);
    if (flag == 0) {
      sprintf(str,"  Failure in message byte #%d", i);
      puts(str);
      nfails ++;
      break;
    }
  }
  
  return 0;
}
#endif  /* USE_MODE_CTR */



#if  (defined(USE_CIPHER_AES_HW) || defined(USE_CIPHER_AES_SW)) && defined(INCLUDE_CIPHER_DEC)
/*******************************************************************************
* *Function:  test_aes_128()
* *Description: 
*             Functional test against a selection of vectors (Known Answer Test)
*             AES with key size = 128
*******************************************************************************/

int8_t test_aes_decrypt_128(void)
{
  int8_t test_name[] = "AES-128";
  int8_t str[80];
  uint8_t key[TEST_VECTORS][BYTES_128]={
    {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff},
    {0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
  };
  uint8_t ciphertext[TEST_VECTORS][BYTES_128]={
    {0xa1,0xf6,0x25,0x8c,0x87,0x7d,0x5f,0xcd,0x89,0x64,0x48,0x45,0x38,0xbf,0xc9,0x2c},
    {0x0e,0xdd,0x33,0xd3,0xc6,0x21,0xe5,0x46,0x45,0x5b,0xd8,0xba,0x14,0x18,0xbe,0xc8},
    {0x3f,0x5b,0x8c,0xc9,0xea,0x85,0x5a,0x0a,0xfa,0x73,0x47,0xd2,0x3e,0x8d,0x66,0x4e}
  };
  uint8_t plaintext[TEST_VECTORS][BYTES_128]={
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff}
  };
  
  puts(test_name);
  for (uint16_t i=0; i < TEST_VECTORS; i++) {
    ntests ++;
    
    cipher_decrypt(ciphertext[i], key[i]);      // function under test
    
    for (uint16_t j=0; j < CIPHER_BLOCK_SIZE; j++) {
      flag=(ciphertext[i][j]==plaintext[i][j]);
      if (flag == 0) {
        sprintf(str,"  Failure in test-case #%d", i+1);
        puts(str);
        nfails ++;
        break;
      }
    }
  }
  
  return 0;
}


/*******************************************************************************
* *Function:  test_aes_192()
* *Description: 
*             Functional test against a selection of vectors (Known Answer Test)
*             AES with key size = 192
*******************************************************************************/

int8_t test_aes_decrypt_192(void)
{
  int8_t test_name[] = "AES-192";
  int8_t str[80];
  uint8_t key[TEST_VECTORS][BYTES_192]={
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
     0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff},
    {0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
  };
  uint8_t ciphertext[TEST_VECTORS][BYTES_128]={
    {0xc8,0xaa,0x80,0xa7,0x85,0x06,0x75,0xbc,0x00,0x7c,0x46,0xdf,0x06,0xb4,0x98,0x68},
    {0xdd,0x8a,0x49,0x35,0x14,0x23,0x1c,0xbf,0x56,0xec,0xce,0xe4,0xc4,0x08,0x89,0xfb},
    {0xde,0x88,0x5d,0xc8,0x7f,0x5a,0x92,0x59,0x40,0x82,0xd0,0x2c,0xc1,0xe1,0xb4,0x2c}
  };
  uint8_t plaintext[TEST_VECTORS][BYTES_128]={
    {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
  };
  
  
  puts(test_name);
  for (uint16_t i=0; i < TEST_VECTORS; i++) {
    ntests ++;
    
    cipher_decrypt(ciphertext[i], key[i]);      // function under test
    
    for (uint16_t j=0; j < CIPHER_BLOCK_SIZE; j++) {
      flag=(ciphertext[i][j]==plaintext[i][j]);
      if (flag == 0) {
        sprintf(str,"  Failure in test-case #%d", i+1);
        puts(str);
        nfails ++;
        break;
      }
    }
  }
  
  return 0;
}


/*******************************************************************************
* *Function:  test_aes_256()
* *Description: 
*             Functional test against a selection of vectors (Known Answer Test)
*             AES with key size = 256
*******************************************************************************/

int8_t test_aes_decrypt_256(void)
{
  int8_t test_name[] = "AES-256";
  int8_t str[80];
  uint8_t key[TEST_VECTORS][BYTES_256]={
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
     0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff}
  };
  uint8_t ciphertext[TEST_VECTORS][BYTES_128]={
    {0x77,0xf3,0x92,0x08,0x90,0x42,0xe4,0x78,0xac,0x16,0xc0,0xc8,0x6a,0x0b,0x5d,0xb5},
    {0xe3,0x5a,0x6d,0xcb,0x19,0xb2,0x01,0xa0,0x1e,0xbc,0xfa,0x8a,0xa2,0x2b,0x57,0x59},
    {0x4b,0xf8,0x5f,0x1b,0x5d,0x54,0xad,0xbc,0x30,0x7b,0x0a,0x04,0x83,0x89,0xad,0xcb}
  };
  uint8_t plaintext[TEST_VECTORS][BYTES_128]={
    {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
  };
  
  puts(test_name);
  for (uint16_t i=0; i < TEST_VECTORS; i++) {
    ntests ++;
    
    cipher_decrypt(ciphertext[i], key[i]);      // function under test
    
    for (uint16_t j=0; j < CIPHER_BLOCK_SIZE; j++) {
      flag=(ciphertext[i][j]==plaintext[i][j]);
      if (flag == 0) {
        sprintf(str,"  Failure in test-case #%d", i+1);
        puts(str);
        nfails ++;
        break;
      }
    }
  }
  
  return 0;
}
#endif  /* USE_CIPHER_AES_SW or USE_CIPHER_AES_HW */


/*******************************************************************************
* *Function:  run_tests()
* *Description: 
*             Runs the functional tests 
*             Calls all functions which need to be tested
*******************************************************************************/

void run_tests(void)
{
  
#if  defined(USE_CIPHER_AES_HW) || defined(USE_CIPHER_AES_SW)
  /* AES decryption with different key sizes */
  #if CIPHER_KEY_SIZE == 16 && defined(INCLUDE_CIPHER_DEC)
  test_aes_decrypt_128();
  #endif
  
  #if CIPHER_KEY_SIZE == 24 && defined(INCLUDE_CIPHER_DEC)
  test_aes_decrypt_192();
  #endif
  
  #if CIPHER_KEY_SIZE == 32 && defined(INCLUDE_CIPHER_DEC)
  test_aes_decrypt_256();
  #endif
#endif

  
  
#ifdef  USE_MODE_CCM
  /* AES-CCM mode decryption with different key sizes */
  #if CIPHER_KEY_SIZE == 16
  #if CCM_AAD_LEN == 0 && CCM_TAG_LEN == 16
  test_aes_ccm_decrypt_128_no_aad();
  test_aes_ccm_decrypt_128_no_aad_t2();
  #endif
  #if CCM_AAD_LEN == 8 && CCM_TAG_LEN == 8
  test_aes_ccm_decrypt_128_with_aad();
  #endif
  #if  (CCM_TAG_LEN == 4) && (CCM_AAD_LEN == 8)
  test_aes_ccm_decrypt_128_with_aad_t2();
  #endif
  #if  (CCM_TAG_LEN == 10) && (CCM_AAD_LEN == 12)
  test_aes_ccm_decrypt_128_with_aad_t3();
  #endif
  #endif /*CIPHER_KEY_SIZE==16*/
//
//  #if CIPHER_KEY_SIZE == 24
//  test_aes_ccm_decrypt_192();
//  #endif
//  
//  #if CIPHER_KEY_SIZE == 32
//  test_aes_ccm_decrypt_256();
//  #endif
#endif

  
  
#ifdef  USE_MODE_CTR
  /* AES-CTR mode decryption with different key sizes */
  #if CIPHER_KEY_SIZE == 16
  test_aes_ctr_decrypt_128();
  #endif

  #if CIPHER_KEY_SIZE == 24
  test_aes_ctr_decrypt_192();
  #endif
  
  #if CIPHER_KEY_SIZE == 32
  test_aes_ctr_decrypt_256();
  #endif
#endif
  
  
#ifdef USE_MAC_CBC
  /* AES CBC-MAC with different key sizes */
  #if CIPHER_KEY_SIZE == 16  
  test_aes_cbc_mac_128();
  #endif
  
  #if CIPHER_KEY_SIZE == 24
  test_aes_cbc_mac_192();
  #endif
  
  #if CIPHER_KEY_SIZE == 32
  test_aes_cbc_mac_256();
  #endif
#endif
  
}


/*******************************************************************************
* *Function:  main()
* *Description: 
*             Runs the functional tests 
*             Calls all functions which need to be tested
*******************************************************************************/

void main(void) {
  
  WDTCTL = WDTPW + WDTCNTCL;  // turn-off WDT
  
  int8_t str[80];  
  puts("Functional tests for the crypto primitives");
  puts("------------------------------------------");
  run_tests();
  puts("------------------------------------------");
  sprintf(str,"%d Tests, %d Failures\n", ntests, nfails);
  puts(str);
  
  while(1); // infinite loop
}

/*
* Notepad++ regex for changing to 0x00 hex format
* find: ([a-f,0-9]{2})
* replace with: 0x\1,
*/
