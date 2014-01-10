/*
*         Copyright (c), NXP Semiconductors Gratkorn / Austria
*
*                     (C)NXP Semiconductors
*       All rights are reserved. Reproduction in whole or in part is 
*      prohibited without the written consent of the copyright owner.
*  NXP reserves the right to make changes without notice at any time.
* NXP makes no warranty, expressed, implied or statutory, including but
* not limited to any implied warranty of merchantability or fitness for any
*particular purpose, or that the use will not infringe any third party patent,
* copyright or trademark. NXP must not be liable for any loss or damage
*                          arising from its use.
*/

/** \file
* Internal functions of Software implementation of Virtual Card Architecture(R).
* $Author: santosh.d.araballi $
* $Revision: 1.2 $
* $Date: Fri Apr 15 09:27:26 2011 $
*
* History:
*  CHu: Generated 31. August 2009
*
*/

#ifndef PHALVCA_SW_INT_H
#define PHALVCA_SW_INT_H

#include <ph_Status.h>

/** \addtogroup ph_Private
* @{
*/

#define PHAL_VCA_CARD_TABLE_ENTRY_VALID     0x00    /**< Value for a valid card table entry. */
#define PHAL_VCA_CARD_TABLE_ENTRY_INVALID   0xFF    /**< Value for an invalid card table entry. */

#define PHAL_VCA_TRUNCATED_MAC_SIZE         8       /**< Size of the truncated MAC. */

#define PHAL_VCA_POS_PCDCAP     1
#define PHAL_VCA_POS_STATUS     0
#define PHAL_VCA_POS_PAYLOAD    4
#define PHAL_VCA_POS_RNDQ       20

/**
* \brief Resolve the LidIndex position.
* \return Status code
* \retval #PH_ERR_SUCCESS Operation successful.
* \retval Other Depending on implementation and underlying component.
*/
phStatus_t phalVca_Sw_Int_ResolveValidIndex(
    phalVca_Sw_DataParams_t * pDataParams,  /**< [In] Pointer to this layer's parameter structure. */
    uint16_t wIidIndex,                     /**< [In] The valid LidIndex to search for. */
    uint16_t * pValidIndex                  /**< [Out] The index within the card table with which the LidIndex matches. */
    );

/**
* \brief Perform VCA specific MAC truncation.
*/
void phalVca_Sw_Int_TruncateMac(
                                uint8_t * pMac,             /**< [In] MAC; uint8_t[16]. */
                                uint8_t * pTruncatedMac     /**< [Out] Truncated MAC; uint8_t[8]. */
                                );

/** @}
* end of ph_Private group
*/

#endif /* PHALVCA_SW_INT_H */
