/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup ModuleSettings ModuleSettings
 * @brief Optional module enable/disable configuration.
 *
 *
 * @file       modulesettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the ModuleSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: modulesettings.xml. 
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

#ifndef MODULESETTINGS_H
#define MODULESETTINGS_H

// Object constants
#define MODULESETTINGS_OBJID 0x491B8934
#define MODULESETTINGS_ISSINGLEINST 1
#define MODULESETTINGS_ISSETTINGS 1
#define MODULESETTINGS_NUMBYTES 31

// Generic interface functions
int32_t ModuleSettingsInitialize();
UAVObjHandle ModuleSettingsHandle();
void ModuleSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t AdminState[23];
    uint8_t TelemetrySpeed;
    uint8_t GPSSpeed;
    uint8_t GPSDataProtocol;
    uint8_t GPSAutoConfigure;
    uint8_t ComUsbBridgeSpeed;
    uint8_t I2CVMProgramSelect;
    uint8_t MavlinkSpeed;
    uint8_t LightTelemetrySpeed;

} __attribute__((packed)) __attribute__((aligned(4))) ModuleSettingsData;

// Typesafe Object access functions
/**
 * @function ModuleSettingsGet(dataOut)
 * @brief Populate a ModuleSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t ModuleSettingsGet(ModuleSettingsData *dataOut) { return UAVObjGetData(ModuleSettingsHandle(), dataOut); }

static inline int32_t ModuleSettingsSet(const ModuleSettingsData *dataIn) { return UAVObjSetData(ModuleSettingsHandle(), dataIn); }

static inline int32_t ModuleSettingsInstGet(uint16_t instId, ModuleSettingsData *dataOut) { return UAVObjGetInstanceData(ModuleSettingsHandle(), instId, dataOut); }

static inline int32_t ModuleSettingsInstSet(uint16_t instId, const ModuleSettingsData *dataIn) { return UAVObjSetInstanceData(ModuleSettingsHandle(), instId, dataIn); }

static inline int32_t ModuleSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(ModuleSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t ModuleSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(ModuleSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t ModuleSettingsCreateInstance() { return UAVObjCreateInstance(ModuleSettingsHandle(), &ModuleSettingsSetDefaults); }

static inline void ModuleSettingsRequestUpdate() { UAVObjRequestUpdate(ModuleSettingsHandle()); }

static inline void ModuleSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(ModuleSettingsHandle(), instId); }

static inline void ModuleSettingsUpdated() { UAVObjUpdated(ModuleSettingsHandle()); }

static inline void ModuleSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(ModuleSettingsHandle(), instId); }

static inline int32_t ModuleSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(ModuleSettingsHandle(), dataOut); }

static inline int32_t ModuleSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(ModuleSettingsHandle(), dataIn); }

static inline int8_t ModuleSettingsReadOnly() { return UAVObjReadOnly(ModuleSettingsHandle()); }

static inline uint16_t ModuleSettingsGetNumInstances(){ return UAVObjGetNumInstances(ModuleSettingsHandle()); }

static inline uint32_t ModuleSettingsGetNumBytes(){ return UAVObjGetNumBytes(ModuleSettingsHandle()); }

// Field information
// Field AdminState information
/* Enumeration options for field AdminState */
typedef enum { MODULESETTINGS_ADMINSTATE_DISABLED=0, MODULESETTINGS_ADMINSTATE_ENABLED=1 }  __attribute__((packed)) ModuleSettingsAdminStateOptions;
/* Array element names for field AdminState */
typedef enum { MODULESETTINGS_ADMINSTATE_AIRSPEED=0, MODULESETTINGS_ADMINSTATE_ALTITUDEHOLD=1, MODULESETTINGS_ADMINSTATE_AUTOTUNE=2, MODULESETTINGS_ADMINSTATE_BATTERY=3, MODULESETTINGS_ADMINSTATE_CAMERASTAB=4, MODULESETTINGS_ADMINSTATE_COMUSBBRIDGE=5, MODULESETTINGS_ADMINSTATE_FIXEDWINGPATHFOLLOWER=6, MODULESETTINGS_ADMINSTATE_FAULT=7, MODULESETTINGS_ADMINSTATE_GPS=8, MODULESETTINGS_ADMINSTATE_OVEROSYNC=9, MODULESETTINGS_ADMINSTATE_PATHPLANNER=10, MODULESETTINGS_ADMINSTATE_TXPID=11, MODULESETTINGS_ADMINSTATE_VTOLPATHFOLLOWER=12, MODULESETTINGS_ADMINSTATE_GROUNDPATHFOLLOWER=13, MODULESETTINGS_ADMINSTATE_GENERICI2CSENSOR=14, MODULESETTINGS_ADMINSTATE_UAVOMAVLINKBRIDGE=15, MODULESETTINGS_ADMINSTATE_UAVOLIGHTTELEMETRYBRIDGE=16, MODULESETTINGS_ADMINSTATE_UAVORELAY=17, MODULESETTINGS_ADMINSTATE_VIBRATIONANALYSIS=18, MODULESETTINGS_ADMINSTATE_UAVOHOTTBRIDGE=19, MODULESETTINGS_ADMINSTATE_UAVOFRSKYSENSORHUBBRIDGE=20, MODULESETTINGS_ADMINSTATE_PICOC=21, MODULESETTINGS_ADMINSTATE_UAVOFRSKYSPORTBRIDGE=22 } __attribute__((packed)) ModuleSettingsAdminStateElem;
/* Number of elements for field AdminState */
#define MODULESETTINGS_ADMINSTATE_NUMELEM 23
// Field TelemetrySpeed information
/* Enumeration options for field TelemetrySpeed */
typedef enum { MODULESETTINGS_TELEMETRYSPEED_2400=0, MODULESETTINGS_TELEMETRYSPEED_4800=1, MODULESETTINGS_TELEMETRYSPEED_9600=2, MODULESETTINGS_TELEMETRYSPEED_19200=3, MODULESETTINGS_TELEMETRYSPEED_38400=4, MODULESETTINGS_TELEMETRYSPEED_57600=5, MODULESETTINGS_TELEMETRYSPEED_115200=6 }  __attribute__((packed)) ModuleSettingsTelemetrySpeedOptions;
// Field GPSSpeed information
/* Enumeration options for field GPSSpeed */
typedef enum { MODULESETTINGS_GPSSPEED_2400=0, MODULESETTINGS_GPSSPEED_4800=1, MODULESETTINGS_GPSSPEED_9600=2, MODULESETTINGS_GPSSPEED_19200=3, MODULESETTINGS_GPSSPEED_38400=4, MODULESETTINGS_GPSSPEED_57600=5, MODULESETTINGS_GPSSPEED_115200=6, MODULESETTINGS_GPSSPEED_230400=7 }  __attribute__((packed)) ModuleSettingsGPSSpeedOptions;
// Field GPSDataProtocol information
/* Enumeration options for field GPSDataProtocol */
typedef enum { MODULESETTINGS_GPSDATAPROTOCOL_NMEA=0, MODULESETTINGS_GPSDATAPROTOCOL_UBX=1 }  __attribute__((packed)) ModuleSettingsGPSDataProtocolOptions;
// Field GPSAutoConfigure information
/* Enumeration options for field GPSAutoConfigure */
typedef enum { MODULESETTINGS_GPSAUTOCONFIGURE_FALSE=0, MODULESETTINGS_GPSAUTOCONFIGURE_TRUE=1 }  __attribute__((packed)) ModuleSettingsGPSAutoConfigureOptions;
// Field ComUsbBridgeSpeed information
/* Enumeration options for field ComUsbBridgeSpeed */
typedef enum { MODULESETTINGS_COMUSBBRIDGESPEED_2400=0, MODULESETTINGS_COMUSBBRIDGESPEED_4800=1, MODULESETTINGS_COMUSBBRIDGESPEED_9600=2, MODULESETTINGS_COMUSBBRIDGESPEED_19200=3, MODULESETTINGS_COMUSBBRIDGESPEED_38400=4, MODULESETTINGS_COMUSBBRIDGESPEED_57600=5, MODULESETTINGS_COMUSBBRIDGESPEED_115200=6 }  __attribute__((packed)) ModuleSettingsComUsbBridgeSpeedOptions;
// Field I2CVMProgramSelect information
/* Enumeration options for field I2CVMProgramSelect */
typedef enum { MODULESETTINGS_I2CVMPROGRAMSELECT_ENDIANTEST=0, MODULESETTINGS_I2CVMPROGRAMSELECT_MATHTEST=1, MODULESETTINGS_I2CVMPROGRAMSELECT_NONE=2, MODULESETTINGS_I2CVMPROGRAMSELECT_OPBAROALTIMETER=3, MODULESETTINGS_I2CVMPROGRAMSELECT_USER=4 }  __attribute__((packed)) ModuleSettingsI2CVMProgramSelectOptions;
// Field MavlinkSpeed information
/* Enumeration options for field MavlinkSpeed */
typedef enum { MODULESETTINGS_MAVLINKSPEED_2400=0, MODULESETTINGS_MAVLINKSPEED_4800=1, MODULESETTINGS_MAVLINKSPEED_9600=2, MODULESETTINGS_MAVLINKSPEED_19200=3, MODULESETTINGS_MAVLINKSPEED_38400=4, MODULESETTINGS_MAVLINKSPEED_57600=5, MODULESETTINGS_MAVLINKSPEED_115200=6 }  __attribute__((packed)) ModuleSettingsMavlinkSpeedOptions;
// Field LightTelemetrySpeed information
/* Enumeration options for field LightTelemetrySpeed */
typedef enum { MODULESETTINGS_LIGHTTELEMETRYSPEED_1200=0, MODULESETTINGS_LIGHTTELEMETRYSPEED_2400=1, MODULESETTINGS_LIGHTTELEMETRYSPEED_4800=2, MODULESETTINGS_LIGHTTELEMETRYSPEED_9600=3, MODULESETTINGS_LIGHTTELEMETRYSPEED_19200=4, MODULESETTINGS_LIGHTTELEMETRYSPEED_38400=5, MODULESETTINGS_LIGHTTELEMETRYSPEED_57600=6, MODULESETTINGS_LIGHTTELEMETRYSPEED_115200=7 }  __attribute__((packed)) ModuleSettingsLightTelemetrySpeedOptions;


// set/Get functions
extern void ModuleSettingsAdminStateSet( uint8_t *NewAdminState );
extern void ModuleSettingsAdminStateGet( uint8_t *NewAdminState );
extern void ModuleSettingsTelemetrySpeedSet( uint8_t *NewTelemetrySpeed );
extern void ModuleSettingsTelemetrySpeedGet( uint8_t *NewTelemetrySpeed );
extern void ModuleSettingsGPSSpeedSet( uint8_t *NewGPSSpeed );
extern void ModuleSettingsGPSSpeedGet( uint8_t *NewGPSSpeed );
extern void ModuleSettingsGPSDataProtocolSet( uint8_t *NewGPSDataProtocol );
extern void ModuleSettingsGPSDataProtocolGet( uint8_t *NewGPSDataProtocol );
extern void ModuleSettingsGPSAutoConfigureSet( uint8_t *NewGPSAutoConfigure );
extern void ModuleSettingsGPSAutoConfigureGet( uint8_t *NewGPSAutoConfigure );
extern void ModuleSettingsComUsbBridgeSpeedSet( uint8_t *NewComUsbBridgeSpeed );
extern void ModuleSettingsComUsbBridgeSpeedGet( uint8_t *NewComUsbBridgeSpeed );
extern void ModuleSettingsI2CVMProgramSelectSet( uint8_t *NewI2CVMProgramSelect );
extern void ModuleSettingsI2CVMProgramSelectGet( uint8_t *NewI2CVMProgramSelect );
extern void ModuleSettingsMavlinkSpeedSet( uint8_t *NewMavlinkSpeed );
extern void ModuleSettingsMavlinkSpeedGet( uint8_t *NewMavlinkSpeed );
extern void ModuleSettingsLightTelemetrySpeedSet( uint8_t *NewLightTelemetrySpeed );
extern void ModuleSettingsLightTelemetrySpeedGet( uint8_t *NewLightTelemetrySpeed );


#endif // MODULESETTINGS_H

/**
 * @}
 * @}
 */
