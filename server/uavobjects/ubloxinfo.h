/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup UBloxInfo UBloxInfo
 * @brief UBlox specific information
 *
 *
 * @file       ubloxinfo.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the UBloxInfo object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: ubloxinfo.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef UBLOXINFO_H
#define UBLOXINFO_H

// Object constants
#define UBLOXINFO_OBJID 0xC5302B12
#define UBLOXINFO_ISSINGLEINST 1
#define UBLOXINFO_ISSETTINGS 0
#define UBLOXINFO_NUMBYTES 16

// Generic interface functions
int32_t UBloxInfoInitialize();
UAVObjHandle UBloxInfoHandle();
void UBloxInfoSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float swVersion;
    uint32_t ParseErrors;
    uint8_t hwVersion[8];

} __attribute__((packed)) __attribute__((aligned(4))) UBloxInfoData;

// Typesafe Object access functions
/**
 * @function UBloxInfoGet(dataOut)
 * @brief Populate a UBloxInfoData object
 * @param[out] dataOut 
 */
static inline int32_t UBloxInfoGet(UBloxInfoData *dataOut) { return UAVObjGetData(UBloxInfoHandle(), dataOut); }

static inline int32_t UBloxInfoSet(const UBloxInfoData *dataIn) { return UAVObjSetData(UBloxInfoHandle(), dataIn); }

static inline int32_t UBloxInfoInstGet(uint16_t instId, UBloxInfoData *dataOut) { return UAVObjGetInstanceData(UBloxInfoHandle(), instId, dataOut); }

static inline int32_t UBloxInfoInstSet(uint16_t instId, const UBloxInfoData *dataIn) { return UAVObjSetInstanceData(UBloxInfoHandle(), instId, dataIn); }

static inline int32_t UBloxInfoConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(UBloxInfoHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t UBloxInfoConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(UBloxInfoHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t UBloxInfoCreateInstance() { return UAVObjCreateInstance(UBloxInfoHandle(), &UBloxInfoSetDefaults); }

static inline void UBloxInfoRequestUpdate() { UAVObjRequestUpdate(UBloxInfoHandle()); }

static inline void UBloxInfoRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(UBloxInfoHandle(), instId); }

static inline void UBloxInfoUpdated() { UAVObjUpdated(UBloxInfoHandle()); }

static inline void UBloxInfoInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(UBloxInfoHandle(), instId); }

static inline int32_t UBloxInfoGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(UBloxInfoHandle(), dataOut); }

static inline int32_t UBloxInfoSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(UBloxInfoHandle(), dataIn); }

static inline int8_t UBloxInfoReadOnly() { return UAVObjReadOnly(UBloxInfoHandle()); }

static inline uint16_t UBloxInfoGetNumInstances(){ return UAVObjGetNumInstances(UBloxInfoHandle()); }

static inline uint32_t UBloxInfoGetNumBytes(){ return UAVObjGetNumBytes(UBloxInfoHandle()); }

// Field information
// Field swVersion information
// Field ParseErrors information
// Field hwVersion information
/* Number of elements for field hwVersion */
#define UBLOXINFO_HWVERSION_NUMELEM 8


// set/Get functions
extern void UBloxInfoswVersionSet( float *NewswVersion );
extern void UBloxInfoswVersionGet( float *NewswVersion );
extern void UBloxInfoParseErrorsSet( uint32_t *NewParseErrors );
extern void UBloxInfoParseErrorsGet( uint32_t *NewParseErrors );
extern void UBloxInfohwVersionSet( uint8_t *NewhwVersion );
extern void UBloxInfohwVersionGet( uint8_t *NewhwVersion );


#endif // UBLOXINFO_H

/**
 * @}
 * @}
 */