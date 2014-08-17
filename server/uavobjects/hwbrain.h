/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup HwBrain HwBrain
 * @brief Selection of optional hardware configurations.
 *
 *
 * @file       hwbrain.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the HwBrain object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwbrain.xml. 
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

#ifndef HWBRAIN_H
#define HWBRAIN_H

// Object constants
#define HWBRAIN_OBJID 0x3D844DCE
#define HWBRAIN_ISSINGLEINST 1
#define HWBRAIN_ISSETTINGS 1
#define HWBRAIN_NUMBYTES 12

// Generic interface functions
int32_t HwBrainInitialize();
UAVObjHandle HwBrainHandle();
void HwBrainSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t RxPort;
    uint8_t MainPort;
    uint8_t FlxPort;
    uint8_t RxPortUsart;
    uint8_t USB_HIDPort;
    uint8_t USB_VCPPort;
    uint8_t DSMxBind;
    uint8_t GyroRange;
    uint8_t AccelRange;
    uint8_t Barometer;
    uint8_t Magnetometer;
    uint8_t ExtMagOrientation;

} __attribute__((packed)) __attribute__((aligned(4))) HwBrainData;

// Typesafe Object access functions
/**
 * @function HwBrainGet(dataOut)
 * @brief Populate a HwBrainData object
 * @param[out] dataOut 
 */
static inline int32_t HwBrainGet(HwBrainData *dataOut) { return UAVObjGetData(HwBrainHandle(), dataOut); }

static inline int32_t HwBrainSet(const HwBrainData *dataIn) { return UAVObjSetData(HwBrainHandle(), dataIn); }

static inline int32_t HwBrainInstGet(uint16_t instId, HwBrainData *dataOut) { return UAVObjGetInstanceData(HwBrainHandle(), instId, dataOut); }

static inline int32_t HwBrainInstSet(uint16_t instId, const HwBrainData *dataIn) { return UAVObjSetInstanceData(HwBrainHandle(), instId, dataIn); }

static inline int32_t HwBrainConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(HwBrainHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t HwBrainConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(HwBrainHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t HwBrainCreateInstance() { return UAVObjCreateInstance(HwBrainHandle(), &HwBrainSetDefaults); }

static inline void HwBrainRequestUpdate() { UAVObjRequestUpdate(HwBrainHandle()); }

static inline void HwBrainRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(HwBrainHandle(), instId); }

static inline void HwBrainUpdated() { UAVObjUpdated(HwBrainHandle()); }

static inline void HwBrainInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(HwBrainHandle(), instId); }

static inline int32_t HwBrainGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(HwBrainHandle(), dataOut); }

static inline int32_t HwBrainSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(HwBrainHandle(), dataIn); }

static inline int8_t HwBrainReadOnly() { return UAVObjReadOnly(HwBrainHandle()); }

static inline uint16_t HwBrainGetNumInstances(){ return UAVObjGetNumInstances(HwBrainHandle()); }

static inline uint32_t HwBrainGetNumBytes(){ return UAVObjGetNumBytes(HwBrainHandle()); }

// Field information
// Field RxPort information
/* Enumeration options for field RxPort */
typedef enum { HWBRAIN_RXPORT_DISABLED=0, HWBRAIN_RXPORT_PWM=1, HWBRAIN_RXPORT_PPM=2, HWBRAIN_RXPORT_PPMPWM=3, HWBRAIN_RXPORT_PPMOUTPUTS=4, HWBRAIN_RXPORT_OUTPUTS=5, HWBRAIN_RXPORT_USART=6, HWBRAIN_RXPORT_PPMUSART=7 }  __attribute__((packed)) HwBrainRxPortOptions;
// Field MainPort information
/* Enumeration options for field MainPort */
typedef enum { HWBRAIN_MAINPORT_DISABLED=0, HWBRAIN_MAINPORT_GPS=1, HWBRAIN_MAINPORT_SBUS=2, HWBRAIN_MAINPORT_DSM2=3, HWBRAIN_MAINPORT_DSMX10BIT=4, HWBRAIN_MAINPORT_DSMX11BIT=5, HWBRAIN_MAINPORT_HOTTSUMD=6, HWBRAIN_MAINPORT_HOTTSUMH=7, HWBRAIN_MAINPORT_HOTTTELEMETRY=8, HWBRAIN_MAINPORT_TELEMETRY=9, HWBRAIN_MAINPORT_DEBUGCONSOLE=10, HWBRAIN_MAINPORT_COMBRIDGE=11, HWBRAIN_MAINPORT_MAVLINKTX=12, HWBRAIN_MAINPORT_MAVLINKTX_GPS_RX=13, HWBRAIN_MAINPORT_FRSKYSENSORHUB=14, HWBRAIN_MAINPORT_LIGHTTELEMETRYTX=15, HWBRAIN_MAINPORT_PICOC=16 }  __attribute__((packed)) HwBrainMainPortOptions;
// Field FlxPort information
/* Enumeration options for field FlxPort */
typedef enum { HWBRAIN_FLXPORT_DISABLED=0, HWBRAIN_FLXPORT_I2C=1, HWBRAIN_FLXPORT_GPS=2, HWBRAIN_FLXPORT_DSM2=3, HWBRAIN_FLXPORT_DSMX10BIT=4, HWBRAIN_FLXPORT_DSMX11BIT=5, HWBRAIN_FLXPORT_HOTTSUMD=6, HWBRAIN_FLXPORT_HOTTSUMH=7, HWBRAIN_FLXPORT_HOTTTELEMETRY=8, HWBRAIN_FLXPORT_TELEMETRY=9, HWBRAIN_FLXPORT_DEBUGCONSOLE=10, HWBRAIN_FLXPORT_COMBRIDGE=11, HWBRAIN_FLXPORT_MAVLINKTX=12, HWBRAIN_FLXPORT_MAVLINKTX_GPS_RX=13, HWBRAIN_FLXPORT_FRSKYSENSORHUB=14, HWBRAIN_FLXPORT_LIGHTTELEMETRYTX=15, HWBRAIN_FLXPORT_PICOC=16 }  __attribute__((packed)) HwBrainFlxPortOptions;
// Field RxPortUsart information
/* Enumeration options for field RxPortUsart */
typedef enum { HWBRAIN_RXPORTUSART_DISABLED=0, HWBRAIN_RXPORTUSART_GPS=1, HWBRAIN_RXPORTUSART_DSM2=2, HWBRAIN_RXPORTUSART_DSMX10BIT=3, HWBRAIN_RXPORTUSART_DSMX11BIT=4, HWBRAIN_RXPORTUSART_HOTTSUMD=5, HWBRAIN_RXPORTUSART_HOTTSUMH=6, HWBRAIN_RXPORTUSART_HOTTTELEMETRY=7, HWBRAIN_RXPORTUSART_TELEMETRY=8, HWBRAIN_RXPORTUSART_DEBUGCONSOLE=9, HWBRAIN_RXPORTUSART_COMBRIDGE=10, HWBRAIN_RXPORTUSART_MAVLINKTX=11, HWBRAIN_RXPORTUSART_MAVLINKTX_GPS_RX=12, HWBRAIN_RXPORTUSART_FRSKYSENSORHUB=13, HWBRAIN_RXPORTUSART_LIGHTTELEMETRYTX=14, HWBRAIN_RXPORTUSART_PICOC=15 }  __attribute__((packed)) HwBrainRxPortUsartOptions;
// Field USB_HIDPort information
/* Enumeration options for field USB_HIDPort */
typedef enum { HWBRAIN_USB_HIDPORT_USBTELEMETRY=0, HWBRAIN_USB_HIDPORT_RCTRANSMITTER=1, HWBRAIN_USB_HIDPORT_DISABLED=2 }  __attribute__((packed)) HwBrainUSB_HIDPortOptions;
// Field USB_VCPPort information
/* Enumeration options for field USB_VCPPort */
typedef enum { HWBRAIN_USB_VCPPORT_USBTELEMETRY=0, HWBRAIN_USB_VCPPORT_COMBRIDGE=1, HWBRAIN_USB_VCPPORT_DEBUGCONSOLE=2, HWBRAIN_USB_VCPPORT_DISABLED=3 }  __attribute__((packed)) HwBrainUSB_VCPPortOptions;
// Field DSMxBind information
// Field GyroRange information
/* Enumeration options for field GyroRange */
typedef enum { HWBRAIN_GYRORANGE_250=0, HWBRAIN_GYRORANGE_500=1, HWBRAIN_GYRORANGE_1000=2, HWBRAIN_GYRORANGE_2000=3 }  __attribute__((packed)) HwBrainGyroRangeOptions;
// Field AccelRange information
/* Enumeration options for field AccelRange */
typedef enum { HWBRAIN_ACCELRANGE_2G=0, HWBRAIN_ACCELRANGE_4G=1, HWBRAIN_ACCELRANGE_8G=2, HWBRAIN_ACCELRANGE_16G=3 }  __attribute__((packed)) HwBrainAccelRangeOptions;
// Field Barometer information
/* Enumeration options for field Barometer */
typedef enum { HWBRAIN_BAROMETER_LPS25H=0, HWBRAIN_BAROMETER_MS5611=1 }  __attribute__((packed)) HwBrainBarometerOptions;
// Field Magnetometer information
/* Enumeration options for field Magnetometer */
typedef enum { HWBRAIN_MAGNETOMETER_INTERNAL=0, HWBRAIN_MAGNETOMETER_EXTERNALFLXPORT=1 }  __attribute__((packed)) HwBrainMagnetometerOptions;
// Field ExtMagOrientation information
/* Enumeration options for field ExtMagOrientation */
typedef enum { HWBRAIN_EXTMAGORIENTATION_TOP0DEGCW=0, HWBRAIN_EXTMAGORIENTATION_TOP90DEGCW=1, HWBRAIN_EXTMAGORIENTATION_TOP180DEGCW=2, HWBRAIN_EXTMAGORIENTATION_TOP270DEGCW=3, HWBRAIN_EXTMAGORIENTATION_BOTTOM0DEGCW=4, HWBRAIN_EXTMAGORIENTATION_BOTTOM90DEGCW=5, HWBRAIN_EXTMAGORIENTATION_BOTTOM180DEGCW=6, HWBRAIN_EXTMAGORIENTATION_BOTTOM270DEGCW=7 }  __attribute__((packed)) HwBrainExtMagOrientationOptions;


// set/Get functions
extern void HwBrainRxPortSet( uint8_t *NewRxPort );
extern void HwBrainRxPortGet( uint8_t *NewRxPort );
extern void HwBrainMainPortSet( uint8_t *NewMainPort );
extern void HwBrainMainPortGet( uint8_t *NewMainPort );
extern void HwBrainFlxPortSet( uint8_t *NewFlxPort );
extern void HwBrainFlxPortGet( uint8_t *NewFlxPort );
extern void HwBrainRxPortUsartSet( uint8_t *NewRxPortUsart );
extern void HwBrainRxPortUsartGet( uint8_t *NewRxPortUsart );
extern void HwBrainUSB_HIDPortSet( uint8_t *NewUSB_HIDPort );
extern void HwBrainUSB_HIDPortGet( uint8_t *NewUSB_HIDPort );
extern void HwBrainUSB_VCPPortSet( uint8_t *NewUSB_VCPPort );
extern void HwBrainUSB_VCPPortGet( uint8_t *NewUSB_VCPPort );
extern void HwBrainDSMxBindSet( uint8_t *NewDSMxBind );
extern void HwBrainDSMxBindGet( uint8_t *NewDSMxBind );
extern void HwBrainGyroRangeSet( uint8_t *NewGyroRange );
extern void HwBrainGyroRangeGet( uint8_t *NewGyroRange );
extern void HwBrainAccelRangeSet( uint8_t *NewAccelRange );
extern void HwBrainAccelRangeGet( uint8_t *NewAccelRange );
extern void HwBrainBarometerSet( uint8_t *NewBarometer );
extern void HwBrainBarometerGet( uint8_t *NewBarometer );
extern void HwBrainMagnetometerSet( uint8_t *NewMagnetometer );
extern void HwBrainMagnetometerGet( uint8_t *NewMagnetometer );
extern void HwBrainExtMagOrientationSet( uint8_t *NewExtMagOrientation );
extern void HwBrainExtMagOrientationGet( uint8_t *NewExtMagOrientation );


#endif // HWBRAIN_H

/**
 * @}
 * @}
 */