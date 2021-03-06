/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup StabilizationDesired StabilizationDesired
 * @brief The desired attitude that @ref StabilizationModule will try and achieve if FlightMode is Stabilized.  Comes from @ref ManaulControlModule.
 *
 *
 * @file       stabilizationdesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the StabilizationDesired object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: stabilizationdesired.xml. 
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

#ifndef STABILIZATIONDESIRED_H
#define STABILIZATIONDESIRED_H

// Object constants
#define STABILIZATIONDESIRED_OBJID 0x761E905E
#define STABILIZATIONDESIRED_ISSINGLEINST 1
#define STABILIZATIONDESIRED_ISSETTINGS 0
#define STABILIZATIONDESIRED_NUMBYTES 19

// Generic interface functions
int32_t StabilizationDesiredInitialize();
UAVObjHandle StabilizationDesiredHandle();
void StabilizationDesiredSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Roll;
    float Pitch;
    float Yaw;
    float Throttle;
    uint8_t StabilizationMode[3];

} __attribute__((packed)) __attribute__((aligned(4))) StabilizationDesiredData;

// Typesafe Object access functions
/**
 * @function StabilizationDesiredGet(dataOut)
 * @brief Populate a StabilizationDesiredData object
 * @param[out] dataOut 
 */
static inline int32_t StabilizationDesiredGet(StabilizationDesiredData *dataOut) { return UAVObjGetData(StabilizationDesiredHandle(), dataOut); }

static inline int32_t StabilizationDesiredSet(const StabilizationDesiredData *dataIn) { return UAVObjSetData(StabilizationDesiredHandle(), dataIn); }

static inline int32_t StabilizationDesiredInstGet(uint16_t instId, StabilizationDesiredData *dataOut) { return UAVObjGetInstanceData(StabilizationDesiredHandle(), instId, dataOut); }

static inline int32_t StabilizationDesiredInstSet(uint16_t instId, const StabilizationDesiredData *dataIn) { return UAVObjSetInstanceData(StabilizationDesiredHandle(), instId, dataIn); }

static inline int32_t StabilizationDesiredConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(StabilizationDesiredHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t StabilizationDesiredConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(StabilizationDesiredHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t StabilizationDesiredCreateInstance() { return UAVObjCreateInstance(StabilizationDesiredHandle(), &StabilizationDesiredSetDefaults); }

static inline void StabilizationDesiredRequestUpdate() { UAVObjRequestUpdate(StabilizationDesiredHandle()); }

static inline void StabilizationDesiredRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(StabilizationDesiredHandle(), instId); }

static inline void StabilizationDesiredUpdated() { UAVObjUpdated(StabilizationDesiredHandle()); }

static inline void StabilizationDesiredInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(StabilizationDesiredHandle(), instId); }

static inline int32_t StabilizationDesiredGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(StabilizationDesiredHandle(), dataOut); }

static inline int32_t StabilizationDesiredSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(StabilizationDesiredHandle(), dataIn); }

static inline int8_t StabilizationDesiredReadOnly() { return UAVObjReadOnly(StabilizationDesiredHandle()); }

static inline uint16_t StabilizationDesiredGetNumInstances(){ return UAVObjGetNumInstances(StabilizationDesiredHandle()); }

static inline uint32_t StabilizationDesiredGetNumBytes(){ return UAVObjGetNumBytes(StabilizationDesiredHandle()); }

// Field information
// Field Roll information
// Field Pitch information
// Field Yaw information
// Field Throttle information
// Field StabilizationMode information
/* Enumeration options for field StabilizationMode */
typedef enum { STABILIZATIONDESIRED_STABILIZATIONMODE_NONE=0, STABILIZATIONDESIRED_STABILIZATIONMODE_RATE=1, STABILIZATIONDESIRED_STABILIZATIONMODE_ATTITUDE=2, STABILIZATIONDESIRED_STABILIZATIONMODE_AXISLOCK=3, STABILIZATIONDESIRED_STABILIZATIONMODE_WEAKLEVELING=4, STABILIZATIONDESIRED_STABILIZATIONMODE_VIRTUALBAR=5, STABILIZATIONDESIRED_STABILIZATIONMODE_HORIZON=6, STABILIZATIONDESIRED_STABILIZATIONMODE_RELAYRATE=7, STABILIZATIONDESIRED_STABILIZATIONMODE_RELAYATTITUDE=8, STABILIZATIONDESIRED_STABILIZATIONMODE_POI=9, STABILIZATIONDESIRED_STABILIZATIONMODE_COORDINATEDFLIGHT=10 }  __attribute__((packed)) StabilizationDesiredStabilizationModeOptions;
/* Array element names for field StabilizationMode */
typedef enum { STABILIZATIONDESIRED_STABILIZATIONMODE_ROLL=0, STABILIZATIONDESIRED_STABILIZATIONMODE_PITCH=1, STABILIZATIONDESIRED_STABILIZATIONMODE_YAW=2 } __attribute__((packed)) StabilizationDesiredStabilizationModeElem;
/* Number of elements for field StabilizationMode */
#define STABILIZATIONDESIRED_STABILIZATIONMODE_NUMELEM 3


// set/Get functions
extern void StabilizationDesiredRollSet( float *NewRoll );
extern void StabilizationDesiredRollGet( float *NewRoll );
extern void StabilizationDesiredPitchSet( float *NewPitch );
extern void StabilizationDesiredPitchGet( float *NewPitch );
extern void StabilizationDesiredYawSet( float *NewYaw );
extern void StabilizationDesiredYawGet( float *NewYaw );
extern void StabilizationDesiredThrottleSet( float *NewThrottle );
extern void StabilizationDesiredThrottleGet( float *NewThrottle );
extern void StabilizationDesiredStabilizationModeSet( uint8_t *NewStabilizationMode );
extern void StabilizationDesiredStabilizationModeGet( uint8_t *NewStabilizationMode );


#endif // STABILIZATIONDESIRED_H

/**
 * @}
 * @}
 */
