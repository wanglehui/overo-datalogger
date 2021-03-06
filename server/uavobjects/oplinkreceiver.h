/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup OPLinkReceiver OPLinkReceiver
 * @brief A receiver channel group carried over the OPLink radio.
 *
 *
 * @file       oplinkreceiver.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the OPLinkReceiver object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: oplinkreceiver.xml. 
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

#ifndef OPLINKRECEIVER_H
#define OPLINKRECEIVER_H

// Object constants
#define OPLINKRECEIVER_OBJID 0xD29CCDC
#define OPLINKRECEIVER_ISSINGLEINST 1
#define OPLINKRECEIVER_ISSETTINGS 0
#define OPLINKRECEIVER_NUMBYTES 16

// Generic interface functions
int32_t OPLinkReceiverInitialize();
UAVObjHandle OPLinkReceiverHandle();
void OPLinkReceiverSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    int16_t Channel[8];

} __attribute__((packed)) __attribute__((aligned(4))) OPLinkReceiverData;

// Typesafe Object access functions
/**
 * @function OPLinkReceiverGet(dataOut)
 * @brief Populate a OPLinkReceiverData object
 * @param[out] dataOut 
 */
static inline int32_t OPLinkReceiverGet(OPLinkReceiverData *dataOut) { return UAVObjGetData(OPLinkReceiverHandle(), dataOut); }

static inline int32_t OPLinkReceiverSet(const OPLinkReceiverData *dataIn) { return UAVObjSetData(OPLinkReceiverHandle(), dataIn); }

static inline int32_t OPLinkReceiverInstGet(uint16_t instId, OPLinkReceiverData *dataOut) { return UAVObjGetInstanceData(OPLinkReceiverHandle(), instId, dataOut); }

static inline int32_t OPLinkReceiverInstSet(uint16_t instId, const OPLinkReceiverData *dataIn) { return UAVObjSetInstanceData(OPLinkReceiverHandle(), instId, dataIn); }

static inline int32_t OPLinkReceiverConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(OPLinkReceiverHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t OPLinkReceiverConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(OPLinkReceiverHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t OPLinkReceiverCreateInstance() { return UAVObjCreateInstance(OPLinkReceiverHandle(), &OPLinkReceiverSetDefaults); }

static inline void OPLinkReceiverRequestUpdate() { UAVObjRequestUpdate(OPLinkReceiverHandle()); }

static inline void OPLinkReceiverRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(OPLinkReceiverHandle(), instId); }

static inline void OPLinkReceiverUpdated() { UAVObjUpdated(OPLinkReceiverHandle()); }

static inline void OPLinkReceiverInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(OPLinkReceiverHandle(), instId); }

static inline int32_t OPLinkReceiverGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(OPLinkReceiverHandle(), dataOut); }

static inline int32_t OPLinkReceiverSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(OPLinkReceiverHandle(), dataIn); }

static inline int8_t OPLinkReceiverReadOnly() { return UAVObjReadOnly(OPLinkReceiverHandle()); }

static inline uint16_t OPLinkReceiverGetNumInstances(){ return UAVObjGetNumInstances(OPLinkReceiverHandle()); }

static inline uint32_t OPLinkReceiverGetNumBytes(){ return UAVObjGetNumBytes(OPLinkReceiverHandle()); }

// Field information
// Field Channel information
/* Number of elements for field Channel */
#define OPLINKRECEIVER_CHANNEL_NUMELEM 8


// set/Get functions
extern void OPLinkReceiverChannelSet( int16_t *NewChannel );
extern void OPLinkReceiverChannelGet( int16_t *NewChannel );


#endif // OPLINKRECEIVER_H

/**
 * @}
 * @}
 */
