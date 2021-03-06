/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup OnScreenDisplayPageSettings2 OnScreenDisplayPageSettings2
 * @brief On Sreen Display Page Settings
 *
 *
 * @file       onscreendisplaypagesettings2.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the OnScreenDisplayPageSettings2 object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: onscreendisplaypagesettings2.xml. 
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

#ifndef ONSCREENDISPLAYPAGESETTINGS2_H
#define ONSCREENDISPLAYPAGESETTINGS2_H

// Object constants
#define ONSCREENDISPLAYPAGESETTINGS2_OBJID 0x187745A0
#define ONSCREENDISPLAYPAGESETTINGS2_ISSINGLEINST 1
#define ONSCREENDISPLAYPAGESETTINGS2_ISSETTINGS 1
#define ONSCREENDISPLAYPAGESETTINGS2_NUMBYTES 106

// Generic interface functions
int32_t OnScreenDisplayPageSettings2Initialize();
UAVObjHandle OnScreenDisplayPageSettings2Handle();
void OnScreenDisplayPageSettings2SetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    int16_t AlarmPosX;
    int16_t AlarmPosY;
    int16_t AltitudeScalePos;
    int16_t ArmStatusPosX;
    int16_t ArmStatusPosY;
    int16_t BatteryVoltPosX;
    int16_t BatteryVoltPosY;
    int16_t BatteryCurrentPosX;
    int16_t BatteryCurrentPosY;
    int16_t BatteryConsumedPosX;
    int16_t BatteryConsumedPosY;
    int16_t CompassPos;
    int16_t CpuPosX;
    int16_t CpuPosY;
    int16_t FlightModePosX;
    int16_t FlightModePosY;
    int16_t GpsStatusPosX;
    int16_t GpsStatusPosY;
    int16_t GpsLatPosX;
    int16_t GpsLatPosY;
    int16_t GpsLonPosX;
    int16_t GpsLonPosY;
    int16_t HomeDistancePosX;
    int16_t HomeDistancePosY;
    int16_t RssiPosX;
    int16_t RssiPosY;
    int16_t SpeedScalePos;
    int16_t TimePosX;
    int16_t TimePosY;
    uint8_t Alarm;
    uint8_t AlarmFont;
    uint8_t AlarmAlign;
    uint8_t AltitudeScale;
    uint8_t AltitudeScaleAlign;
    uint8_t AltitudeScaleSource;
    uint8_t ArmStatus;
    uint8_t ArmStatusFont;
    uint8_t ArmStatusAlign;
    uint8_t ArtificialHorizon;
    uint8_t BatteryVolt;
    uint8_t BatteryVoltFont;
    uint8_t BatteryVoltAlign;
    uint8_t BatteryCurrent;
    uint8_t BatteryCurrentFont;
    uint8_t BatteryCurrentAlign;
    uint8_t BatteryConsumed;
    uint8_t BatteryConsumedFont;
    uint8_t BatteryConsumedAlign;
    uint8_t Compass;
    uint8_t CompassHomeDir;
    uint8_t Cpu;
    uint8_t CpuFont;
    uint8_t CpuAlign;
    uint8_t FlightMode;
    uint8_t FlightModeFont;
    uint8_t FlightModeAlign;
    uint8_t GpsStatus;
    uint8_t GpsStatusFont;
    uint8_t GpsStatusAlign;
    uint8_t GpsLat;
    uint8_t GpsLatFont;
    uint8_t GpsLatAlign;
    uint8_t GpsLon;
    uint8_t GpsLonFont;
    uint8_t GpsLonAlign;
    uint8_t HomeDistance;
    uint8_t HomeDistanceFont;
    uint8_t HomeDistanceAlign;
    uint8_t Rssi;
    uint8_t RssiFont;
    uint8_t RssiAlign;
    uint8_t SpeedScale;
    uint8_t SpeedScaleAlign;
    uint8_t SpeedScaleSource;
    uint8_t Time;
    uint8_t TimeFont;
    uint8_t TimeAlign;

} __attribute__((packed)) __attribute__((aligned(4))) OnScreenDisplayPageSettings2Data;

// Typesafe Object access functions
/**
 * @function OnScreenDisplayPageSettings2Get(dataOut)
 * @brief Populate a OnScreenDisplayPageSettings2Data object
 * @param[out] dataOut 
 */
static inline int32_t OnScreenDisplayPageSettings2Get(OnScreenDisplayPageSettings2Data *dataOut) { return UAVObjGetData(OnScreenDisplayPageSettings2Handle(), dataOut); }

static inline int32_t OnScreenDisplayPageSettings2Set(const OnScreenDisplayPageSettings2Data *dataIn) { return UAVObjSetData(OnScreenDisplayPageSettings2Handle(), dataIn); }

static inline int32_t OnScreenDisplayPageSettings2InstGet(uint16_t instId, OnScreenDisplayPageSettings2Data *dataOut) { return UAVObjGetInstanceData(OnScreenDisplayPageSettings2Handle(), instId, dataOut); }

static inline int32_t OnScreenDisplayPageSettings2InstSet(uint16_t instId, const OnScreenDisplayPageSettings2Data *dataIn) { return UAVObjSetInstanceData(OnScreenDisplayPageSettings2Handle(), instId, dataIn); }

static inline int32_t OnScreenDisplayPageSettings2ConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(OnScreenDisplayPageSettings2Handle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t OnScreenDisplayPageSettings2ConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(OnScreenDisplayPageSettings2Handle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t OnScreenDisplayPageSettings2CreateInstance() { return UAVObjCreateInstance(OnScreenDisplayPageSettings2Handle(), &OnScreenDisplayPageSettings2SetDefaults); }

static inline void OnScreenDisplayPageSettings2RequestUpdate() { UAVObjRequestUpdate(OnScreenDisplayPageSettings2Handle()); }

static inline void OnScreenDisplayPageSettings2RequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(OnScreenDisplayPageSettings2Handle(), instId); }

static inline void OnScreenDisplayPageSettings2Updated() { UAVObjUpdated(OnScreenDisplayPageSettings2Handle()); }

static inline void OnScreenDisplayPageSettings2InstUpdated(uint16_t instId) { UAVObjInstanceUpdated(OnScreenDisplayPageSettings2Handle(), instId); }

static inline int32_t OnScreenDisplayPageSettings2GetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(OnScreenDisplayPageSettings2Handle(), dataOut); }

static inline int32_t OnScreenDisplayPageSettings2SetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(OnScreenDisplayPageSettings2Handle(), dataIn); }

static inline int8_t OnScreenDisplayPageSettings2ReadOnly() { return UAVObjReadOnly(OnScreenDisplayPageSettings2Handle()); }

static inline uint16_t OnScreenDisplayPageSettings2GetNumInstances(){ return UAVObjGetNumInstances(OnScreenDisplayPageSettings2Handle()); }

static inline uint32_t OnScreenDisplayPageSettings2GetNumBytes(){ return UAVObjGetNumBytes(OnScreenDisplayPageSettings2Handle()); }

// Field information
// Field AlarmPosX information
// Field AlarmPosY information
// Field AltitudeScalePos information
// Field ArmStatusPosX information
// Field ArmStatusPosY information
// Field BatteryVoltPosX information
// Field BatteryVoltPosY information
// Field BatteryCurrentPosX information
// Field BatteryCurrentPosY information
// Field BatteryConsumedPosX information
// Field BatteryConsumedPosY information
// Field CompassPos information
// Field CpuPosX information
// Field CpuPosY information
// Field FlightModePosX information
// Field FlightModePosY information
// Field GpsStatusPosX information
// Field GpsStatusPosY information
// Field GpsLatPosX information
// Field GpsLatPosY information
// Field GpsLonPosX information
// Field GpsLonPosY information
// Field HomeDistancePosX information
// Field HomeDistancePosY information
// Field RssiPosX information
// Field RssiPosY information
// Field SpeedScalePos information
// Field TimePosX information
// Field TimePosY information
// Field Alarm information
/* Enumeration options for field Alarm */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ALARM_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_ALARM_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2AlarmOptions;
// Field AlarmFont information
/* Enumeration options for field AlarmFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ALARMFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_ALARMFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_ALARMFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2AlarmFontOptions;
// Field AlarmAlign information
/* Enumeration options for field AlarmAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ALARMALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_ALARMALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_ALARMALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2AlarmAlignOptions;
// Field AltitudeScale information
/* Enumeration options for field AltitudeScale */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ALTITUDESCALE_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_ALTITUDESCALE_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2AltitudeScaleOptions;
// Field AltitudeScaleAlign information
/* Enumeration options for field AltitudeScaleAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ALTITUDESCALEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_ALTITUDESCALEALIGN_RIGHT=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2AltitudeScaleAlignOptions;
// Field AltitudeScaleSource information
/* Enumeration options for field AltitudeScaleSource */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ALTITUDESCALESOURCE_BARO=0, ONSCREENDISPLAYPAGESETTINGS2_ALTITUDESCALESOURCE_NAV=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2AltitudeScaleSourceOptions;
// Field ArmStatus information
/* Enumeration options for field ArmStatus */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ARMSTATUS_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_ARMSTATUS_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2ArmStatusOptions;
// Field ArmStatusFont information
/* Enumeration options for field ArmStatusFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ARMSTATUSFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_ARMSTATUSFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_ARMSTATUSFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2ArmStatusFontOptions;
// Field ArmStatusAlign information
/* Enumeration options for field ArmStatusAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ARMSTATUSALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_ARMSTATUSALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_ARMSTATUSALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2ArmStatusAlignOptions;
// Field ArtificialHorizon information
/* Enumeration options for field ArtificialHorizon */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_ARTIFICIALHORIZON_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_ARTIFICIALHORIZON_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2ArtificialHorizonOptions;
// Field BatteryVolt information
/* Enumeration options for field BatteryVolt */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYVOLT_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYVOLT_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryVoltOptions;
// Field BatteryVoltFont information
/* Enumeration options for field BatteryVoltFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYVOLTFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYVOLTFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_BATTERYVOLTFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryVoltFontOptions;
// Field BatteryVoltAlign information
/* Enumeration options for field BatteryVoltAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYVOLTALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYVOLTALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_BATTERYVOLTALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryVoltAlignOptions;
// Field BatteryCurrent information
/* Enumeration options for field BatteryCurrent */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYCURRENT_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCURRENT_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryCurrentOptions;
// Field BatteryCurrentFont information
/* Enumeration options for field BatteryCurrentFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYCURRENTFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCURRENTFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCURRENTFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryCurrentFontOptions;
// Field BatteryCurrentAlign information
/* Enumeration options for field BatteryCurrentAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYCURRENTALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCURRENTALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCURRENTALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryCurrentAlignOptions;
// Field BatteryConsumed information
/* Enumeration options for field BatteryConsumed */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYCONSUMED_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCONSUMED_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryConsumedOptions;
// Field BatteryConsumedFont information
/* Enumeration options for field BatteryConsumedFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYCONSUMEDFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCONSUMEDFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCONSUMEDFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryConsumedFontOptions;
// Field BatteryConsumedAlign information
/* Enumeration options for field BatteryConsumedAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_BATTERYCONSUMEDALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCONSUMEDALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_BATTERYCONSUMEDALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2BatteryConsumedAlignOptions;
// Field Compass information
/* Enumeration options for field Compass */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_COMPASS_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_COMPASS_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2CompassOptions;
// Field CompassHomeDir information
/* Enumeration options for field CompassHomeDir */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_COMPASSHOMEDIR_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_COMPASSHOMEDIR_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2CompassHomeDirOptions;
// Field Cpu information
/* Enumeration options for field Cpu */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_CPU_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_CPU_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2CpuOptions;
// Field CpuFont information
/* Enumeration options for field CpuFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_CPUFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_CPUFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_CPUFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2CpuFontOptions;
// Field CpuAlign information
/* Enumeration options for field CpuAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_CPUALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_CPUALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_CPUALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2CpuAlignOptions;
// Field FlightMode information
/* Enumeration options for field FlightMode */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_FLIGHTMODE_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_FLIGHTMODE_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2FlightModeOptions;
// Field FlightModeFont information
/* Enumeration options for field FlightModeFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_FLIGHTMODEFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_FLIGHTMODEFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_FLIGHTMODEFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2FlightModeFontOptions;
// Field FlightModeAlign information
/* Enumeration options for field FlightModeAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_FLIGHTMODEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_FLIGHTMODEALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_FLIGHTMODEALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2FlightModeAlignOptions;
// Field GpsStatus information
/* Enumeration options for field GpsStatus */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSSTATUS_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_GPSSTATUS_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsStatusOptions;
// Field GpsStatusFont information
/* Enumeration options for field GpsStatusFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSSTATUSFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_GPSSTATUSFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_GPSSTATUSFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsStatusFontOptions;
// Field GpsStatusAlign information
/* Enumeration options for field GpsStatusAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSSTATUSALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_GPSSTATUSALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_GPSSTATUSALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsStatusAlignOptions;
// Field GpsLat information
/* Enumeration options for field GpsLat */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSLAT_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_GPSLAT_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsLatOptions;
// Field GpsLatFont information
/* Enumeration options for field GpsLatFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSLATFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_GPSLATFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_GPSLATFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsLatFontOptions;
// Field GpsLatAlign information
/* Enumeration options for field GpsLatAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSLATALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_GPSLATALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_GPSLATALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsLatAlignOptions;
// Field GpsLon information
/* Enumeration options for field GpsLon */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSLON_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_GPSLON_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsLonOptions;
// Field GpsLonFont information
/* Enumeration options for field GpsLonFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSLONFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_GPSLONFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_GPSLONFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsLonFontOptions;
// Field GpsLonAlign information
/* Enumeration options for field GpsLonAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_GPSLONALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_GPSLONALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_GPSLONALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2GpsLonAlignOptions;
// Field HomeDistance information
/* Enumeration options for field HomeDistance */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_HOMEDISTANCE_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_HOMEDISTANCE_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2HomeDistanceOptions;
// Field HomeDistanceFont information
/* Enumeration options for field HomeDistanceFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_HOMEDISTANCEFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_HOMEDISTANCEFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_HOMEDISTANCEFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2HomeDistanceFontOptions;
// Field HomeDistanceAlign information
/* Enumeration options for field HomeDistanceAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_HOMEDISTANCEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_HOMEDISTANCEALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_HOMEDISTANCEALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2HomeDistanceAlignOptions;
// Field Rssi information
/* Enumeration options for field Rssi */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_RSSI_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_RSSI_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2RssiOptions;
// Field RssiFont information
/* Enumeration options for field RssiFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_RSSIFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_RSSIFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_RSSIFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2RssiFontOptions;
// Field RssiAlign information
/* Enumeration options for field RssiAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_RSSIALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_RSSIALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_RSSIALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2RssiAlignOptions;
// Field SpeedScale information
/* Enumeration options for field SpeedScale */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_SPEEDSCALE_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_SPEEDSCALE_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2SpeedScaleOptions;
// Field SpeedScaleAlign information
/* Enumeration options for field SpeedScaleAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_SPEEDSCALEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_SPEEDSCALEALIGN_RIGHT=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2SpeedScaleAlignOptions;
// Field SpeedScaleSource information
/* Enumeration options for field SpeedScaleSource */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_SPEEDSCALESOURCE_GPS=0, ONSCREENDISPLAYPAGESETTINGS2_SPEEDSCALESOURCE_NAV=1, ONSCREENDISPLAYPAGESETTINGS2_SPEEDSCALESOURCE_AIRSPEED=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2SpeedScaleSourceOptions;
// Field Time information
/* Enumeration options for field Time */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_TIME_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS2_TIME_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings2TimeOptions;
// Field TimeFont information
/* Enumeration options for field TimeFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_TIMEFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS2_TIMEFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS2_TIMEFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2TimeFontOptions;
// Field TimeAlign information
/* Enumeration options for field TimeAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS2_TIMEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS2_TIMEALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS2_TIMEALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings2TimeAlignOptions;


// set/Get functions
extern void OnScreenDisplayPageSettings2AlarmPosXSet( int16_t *NewAlarmPosX );
extern void OnScreenDisplayPageSettings2AlarmPosXGet( int16_t *NewAlarmPosX );
extern void OnScreenDisplayPageSettings2AlarmPosYSet( int16_t *NewAlarmPosY );
extern void OnScreenDisplayPageSettings2AlarmPosYGet( int16_t *NewAlarmPosY );
extern void OnScreenDisplayPageSettings2AltitudeScalePosSet( int16_t *NewAltitudeScalePos );
extern void OnScreenDisplayPageSettings2AltitudeScalePosGet( int16_t *NewAltitudeScalePos );
extern void OnScreenDisplayPageSettings2ArmStatusPosXSet( int16_t *NewArmStatusPosX );
extern void OnScreenDisplayPageSettings2ArmStatusPosXGet( int16_t *NewArmStatusPosX );
extern void OnScreenDisplayPageSettings2ArmStatusPosYSet( int16_t *NewArmStatusPosY );
extern void OnScreenDisplayPageSettings2ArmStatusPosYGet( int16_t *NewArmStatusPosY );
extern void OnScreenDisplayPageSettings2BatteryVoltPosXSet( int16_t *NewBatteryVoltPosX );
extern void OnScreenDisplayPageSettings2BatteryVoltPosXGet( int16_t *NewBatteryVoltPosX );
extern void OnScreenDisplayPageSettings2BatteryVoltPosYSet( int16_t *NewBatteryVoltPosY );
extern void OnScreenDisplayPageSettings2BatteryVoltPosYGet( int16_t *NewBatteryVoltPosY );
extern void OnScreenDisplayPageSettings2BatteryCurrentPosXSet( int16_t *NewBatteryCurrentPosX );
extern void OnScreenDisplayPageSettings2BatteryCurrentPosXGet( int16_t *NewBatteryCurrentPosX );
extern void OnScreenDisplayPageSettings2BatteryCurrentPosYSet( int16_t *NewBatteryCurrentPosY );
extern void OnScreenDisplayPageSettings2BatteryCurrentPosYGet( int16_t *NewBatteryCurrentPosY );
extern void OnScreenDisplayPageSettings2BatteryConsumedPosXSet( int16_t *NewBatteryConsumedPosX );
extern void OnScreenDisplayPageSettings2BatteryConsumedPosXGet( int16_t *NewBatteryConsumedPosX );
extern void OnScreenDisplayPageSettings2BatteryConsumedPosYSet( int16_t *NewBatteryConsumedPosY );
extern void OnScreenDisplayPageSettings2BatteryConsumedPosYGet( int16_t *NewBatteryConsumedPosY );
extern void OnScreenDisplayPageSettings2CompassPosSet( int16_t *NewCompassPos );
extern void OnScreenDisplayPageSettings2CompassPosGet( int16_t *NewCompassPos );
extern void OnScreenDisplayPageSettings2CpuPosXSet( int16_t *NewCpuPosX );
extern void OnScreenDisplayPageSettings2CpuPosXGet( int16_t *NewCpuPosX );
extern void OnScreenDisplayPageSettings2CpuPosYSet( int16_t *NewCpuPosY );
extern void OnScreenDisplayPageSettings2CpuPosYGet( int16_t *NewCpuPosY );
extern void OnScreenDisplayPageSettings2FlightModePosXSet( int16_t *NewFlightModePosX );
extern void OnScreenDisplayPageSettings2FlightModePosXGet( int16_t *NewFlightModePosX );
extern void OnScreenDisplayPageSettings2FlightModePosYSet( int16_t *NewFlightModePosY );
extern void OnScreenDisplayPageSettings2FlightModePosYGet( int16_t *NewFlightModePosY );
extern void OnScreenDisplayPageSettings2GpsStatusPosXSet( int16_t *NewGpsStatusPosX );
extern void OnScreenDisplayPageSettings2GpsStatusPosXGet( int16_t *NewGpsStatusPosX );
extern void OnScreenDisplayPageSettings2GpsStatusPosYSet( int16_t *NewGpsStatusPosY );
extern void OnScreenDisplayPageSettings2GpsStatusPosYGet( int16_t *NewGpsStatusPosY );
extern void OnScreenDisplayPageSettings2GpsLatPosXSet( int16_t *NewGpsLatPosX );
extern void OnScreenDisplayPageSettings2GpsLatPosXGet( int16_t *NewGpsLatPosX );
extern void OnScreenDisplayPageSettings2GpsLatPosYSet( int16_t *NewGpsLatPosY );
extern void OnScreenDisplayPageSettings2GpsLatPosYGet( int16_t *NewGpsLatPosY );
extern void OnScreenDisplayPageSettings2GpsLonPosXSet( int16_t *NewGpsLonPosX );
extern void OnScreenDisplayPageSettings2GpsLonPosXGet( int16_t *NewGpsLonPosX );
extern void OnScreenDisplayPageSettings2GpsLonPosYSet( int16_t *NewGpsLonPosY );
extern void OnScreenDisplayPageSettings2GpsLonPosYGet( int16_t *NewGpsLonPosY );
extern void OnScreenDisplayPageSettings2HomeDistancePosXSet( int16_t *NewHomeDistancePosX );
extern void OnScreenDisplayPageSettings2HomeDistancePosXGet( int16_t *NewHomeDistancePosX );
extern void OnScreenDisplayPageSettings2HomeDistancePosYSet( int16_t *NewHomeDistancePosY );
extern void OnScreenDisplayPageSettings2HomeDistancePosYGet( int16_t *NewHomeDistancePosY );
extern void OnScreenDisplayPageSettings2RssiPosXSet( int16_t *NewRssiPosX );
extern void OnScreenDisplayPageSettings2RssiPosXGet( int16_t *NewRssiPosX );
extern void OnScreenDisplayPageSettings2RssiPosYSet( int16_t *NewRssiPosY );
extern void OnScreenDisplayPageSettings2RssiPosYGet( int16_t *NewRssiPosY );
extern void OnScreenDisplayPageSettings2SpeedScalePosSet( int16_t *NewSpeedScalePos );
extern void OnScreenDisplayPageSettings2SpeedScalePosGet( int16_t *NewSpeedScalePos );
extern void OnScreenDisplayPageSettings2TimePosXSet( int16_t *NewTimePosX );
extern void OnScreenDisplayPageSettings2TimePosXGet( int16_t *NewTimePosX );
extern void OnScreenDisplayPageSettings2TimePosYSet( int16_t *NewTimePosY );
extern void OnScreenDisplayPageSettings2TimePosYGet( int16_t *NewTimePosY );
extern void OnScreenDisplayPageSettings2AlarmSet( uint8_t *NewAlarm );
extern void OnScreenDisplayPageSettings2AlarmGet( uint8_t *NewAlarm );
extern void OnScreenDisplayPageSettings2AlarmFontSet( uint8_t *NewAlarmFont );
extern void OnScreenDisplayPageSettings2AlarmFontGet( uint8_t *NewAlarmFont );
extern void OnScreenDisplayPageSettings2AlarmAlignSet( uint8_t *NewAlarmAlign );
extern void OnScreenDisplayPageSettings2AlarmAlignGet( uint8_t *NewAlarmAlign );
extern void OnScreenDisplayPageSettings2AltitudeScaleSet( uint8_t *NewAltitudeScale );
extern void OnScreenDisplayPageSettings2AltitudeScaleGet( uint8_t *NewAltitudeScale );
extern void OnScreenDisplayPageSettings2AltitudeScaleAlignSet( uint8_t *NewAltitudeScaleAlign );
extern void OnScreenDisplayPageSettings2AltitudeScaleAlignGet( uint8_t *NewAltitudeScaleAlign );
extern void OnScreenDisplayPageSettings2AltitudeScaleSourceSet( uint8_t *NewAltitudeScaleSource );
extern void OnScreenDisplayPageSettings2AltitudeScaleSourceGet( uint8_t *NewAltitudeScaleSource );
extern void OnScreenDisplayPageSettings2ArmStatusSet( uint8_t *NewArmStatus );
extern void OnScreenDisplayPageSettings2ArmStatusGet( uint8_t *NewArmStatus );
extern void OnScreenDisplayPageSettings2ArmStatusFontSet( uint8_t *NewArmStatusFont );
extern void OnScreenDisplayPageSettings2ArmStatusFontGet( uint8_t *NewArmStatusFont );
extern void OnScreenDisplayPageSettings2ArmStatusAlignSet( uint8_t *NewArmStatusAlign );
extern void OnScreenDisplayPageSettings2ArmStatusAlignGet( uint8_t *NewArmStatusAlign );
extern void OnScreenDisplayPageSettings2ArtificialHorizonSet( uint8_t *NewArtificialHorizon );
extern void OnScreenDisplayPageSettings2ArtificialHorizonGet( uint8_t *NewArtificialHorizon );
extern void OnScreenDisplayPageSettings2BatteryVoltSet( uint8_t *NewBatteryVolt );
extern void OnScreenDisplayPageSettings2BatteryVoltGet( uint8_t *NewBatteryVolt );
extern void OnScreenDisplayPageSettings2BatteryVoltFontSet( uint8_t *NewBatteryVoltFont );
extern void OnScreenDisplayPageSettings2BatteryVoltFontGet( uint8_t *NewBatteryVoltFont );
extern void OnScreenDisplayPageSettings2BatteryVoltAlignSet( uint8_t *NewBatteryVoltAlign );
extern void OnScreenDisplayPageSettings2BatteryVoltAlignGet( uint8_t *NewBatteryVoltAlign );
extern void OnScreenDisplayPageSettings2BatteryCurrentSet( uint8_t *NewBatteryCurrent );
extern void OnScreenDisplayPageSettings2BatteryCurrentGet( uint8_t *NewBatteryCurrent );
extern void OnScreenDisplayPageSettings2BatteryCurrentFontSet( uint8_t *NewBatteryCurrentFont );
extern void OnScreenDisplayPageSettings2BatteryCurrentFontGet( uint8_t *NewBatteryCurrentFont );
extern void OnScreenDisplayPageSettings2BatteryCurrentAlignSet( uint8_t *NewBatteryCurrentAlign );
extern void OnScreenDisplayPageSettings2BatteryCurrentAlignGet( uint8_t *NewBatteryCurrentAlign );
extern void OnScreenDisplayPageSettings2BatteryConsumedSet( uint8_t *NewBatteryConsumed );
extern void OnScreenDisplayPageSettings2BatteryConsumedGet( uint8_t *NewBatteryConsumed );
extern void OnScreenDisplayPageSettings2BatteryConsumedFontSet( uint8_t *NewBatteryConsumedFont );
extern void OnScreenDisplayPageSettings2BatteryConsumedFontGet( uint8_t *NewBatteryConsumedFont );
extern void OnScreenDisplayPageSettings2BatteryConsumedAlignSet( uint8_t *NewBatteryConsumedAlign );
extern void OnScreenDisplayPageSettings2BatteryConsumedAlignGet( uint8_t *NewBatteryConsumedAlign );
extern void OnScreenDisplayPageSettings2CompassSet( uint8_t *NewCompass );
extern void OnScreenDisplayPageSettings2CompassGet( uint8_t *NewCompass );
extern void OnScreenDisplayPageSettings2CompassHomeDirSet( uint8_t *NewCompassHomeDir );
extern void OnScreenDisplayPageSettings2CompassHomeDirGet( uint8_t *NewCompassHomeDir );
extern void OnScreenDisplayPageSettings2CpuSet( uint8_t *NewCpu );
extern void OnScreenDisplayPageSettings2CpuGet( uint8_t *NewCpu );
extern void OnScreenDisplayPageSettings2CpuFontSet( uint8_t *NewCpuFont );
extern void OnScreenDisplayPageSettings2CpuFontGet( uint8_t *NewCpuFont );
extern void OnScreenDisplayPageSettings2CpuAlignSet( uint8_t *NewCpuAlign );
extern void OnScreenDisplayPageSettings2CpuAlignGet( uint8_t *NewCpuAlign );
extern void OnScreenDisplayPageSettings2FlightModeSet( uint8_t *NewFlightMode );
extern void OnScreenDisplayPageSettings2FlightModeGet( uint8_t *NewFlightMode );
extern void OnScreenDisplayPageSettings2FlightModeFontSet( uint8_t *NewFlightModeFont );
extern void OnScreenDisplayPageSettings2FlightModeFontGet( uint8_t *NewFlightModeFont );
extern void OnScreenDisplayPageSettings2FlightModeAlignSet( uint8_t *NewFlightModeAlign );
extern void OnScreenDisplayPageSettings2FlightModeAlignGet( uint8_t *NewFlightModeAlign );
extern void OnScreenDisplayPageSettings2GpsStatusSet( uint8_t *NewGpsStatus );
extern void OnScreenDisplayPageSettings2GpsStatusGet( uint8_t *NewGpsStatus );
extern void OnScreenDisplayPageSettings2GpsStatusFontSet( uint8_t *NewGpsStatusFont );
extern void OnScreenDisplayPageSettings2GpsStatusFontGet( uint8_t *NewGpsStatusFont );
extern void OnScreenDisplayPageSettings2GpsStatusAlignSet( uint8_t *NewGpsStatusAlign );
extern void OnScreenDisplayPageSettings2GpsStatusAlignGet( uint8_t *NewGpsStatusAlign );
extern void OnScreenDisplayPageSettings2GpsLatSet( uint8_t *NewGpsLat );
extern void OnScreenDisplayPageSettings2GpsLatGet( uint8_t *NewGpsLat );
extern void OnScreenDisplayPageSettings2GpsLatFontSet( uint8_t *NewGpsLatFont );
extern void OnScreenDisplayPageSettings2GpsLatFontGet( uint8_t *NewGpsLatFont );
extern void OnScreenDisplayPageSettings2GpsLatAlignSet( uint8_t *NewGpsLatAlign );
extern void OnScreenDisplayPageSettings2GpsLatAlignGet( uint8_t *NewGpsLatAlign );
extern void OnScreenDisplayPageSettings2GpsLonSet( uint8_t *NewGpsLon );
extern void OnScreenDisplayPageSettings2GpsLonGet( uint8_t *NewGpsLon );
extern void OnScreenDisplayPageSettings2GpsLonFontSet( uint8_t *NewGpsLonFont );
extern void OnScreenDisplayPageSettings2GpsLonFontGet( uint8_t *NewGpsLonFont );
extern void OnScreenDisplayPageSettings2GpsLonAlignSet( uint8_t *NewGpsLonAlign );
extern void OnScreenDisplayPageSettings2GpsLonAlignGet( uint8_t *NewGpsLonAlign );
extern void OnScreenDisplayPageSettings2HomeDistanceSet( uint8_t *NewHomeDistance );
extern void OnScreenDisplayPageSettings2HomeDistanceGet( uint8_t *NewHomeDistance );
extern void OnScreenDisplayPageSettings2HomeDistanceFontSet( uint8_t *NewHomeDistanceFont );
extern void OnScreenDisplayPageSettings2HomeDistanceFontGet( uint8_t *NewHomeDistanceFont );
extern void OnScreenDisplayPageSettings2HomeDistanceAlignSet( uint8_t *NewHomeDistanceAlign );
extern void OnScreenDisplayPageSettings2HomeDistanceAlignGet( uint8_t *NewHomeDistanceAlign );
extern void OnScreenDisplayPageSettings2RssiSet( uint8_t *NewRssi );
extern void OnScreenDisplayPageSettings2RssiGet( uint8_t *NewRssi );
extern void OnScreenDisplayPageSettings2RssiFontSet( uint8_t *NewRssiFont );
extern void OnScreenDisplayPageSettings2RssiFontGet( uint8_t *NewRssiFont );
extern void OnScreenDisplayPageSettings2RssiAlignSet( uint8_t *NewRssiAlign );
extern void OnScreenDisplayPageSettings2RssiAlignGet( uint8_t *NewRssiAlign );
extern void OnScreenDisplayPageSettings2SpeedScaleSet( uint8_t *NewSpeedScale );
extern void OnScreenDisplayPageSettings2SpeedScaleGet( uint8_t *NewSpeedScale );
extern void OnScreenDisplayPageSettings2SpeedScaleAlignSet( uint8_t *NewSpeedScaleAlign );
extern void OnScreenDisplayPageSettings2SpeedScaleAlignGet( uint8_t *NewSpeedScaleAlign );
extern void OnScreenDisplayPageSettings2SpeedScaleSourceSet( uint8_t *NewSpeedScaleSource );
extern void OnScreenDisplayPageSettings2SpeedScaleSourceGet( uint8_t *NewSpeedScaleSource );
extern void OnScreenDisplayPageSettings2TimeSet( uint8_t *NewTime );
extern void OnScreenDisplayPageSettings2TimeGet( uint8_t *NewTime );
extern void OnScreenDisplayPageSettings2TimeFontSet( uint8_t *NewTimeFont );
extern void OnScreenDisplayPageSettings2TimeFontGet( uint8_t *NewTimeFont );
extern void OnScreenDisplayPageSettings2TimeAlignSet( uint8_t *NewTimeAlign );
extern void OnScreenDisplayPageSettings2TimeAlignGet( uint8_t *NewTimeAlign );


#endif // ONSCREENDISPLAYPAGESETTINGS2_H

/**
 * @}
 * @}
 */
