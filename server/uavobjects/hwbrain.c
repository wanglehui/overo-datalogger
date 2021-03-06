/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       hwbrain.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the HwBrain object. This file has been 
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

#include "openpilot.h"
#include "hwbrain.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t HwBrainInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(HWBRAIN_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(HWBRAIN_OBJID,
			HWBRAIN_ISSINGLEINST, HWBRAIN_ISSETTINGS, HWBRAIN_NUMBYTES, &HwBrainSetDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void HwBrainSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	HwBrainData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(HwBrainData));
	data.RxPort = 1;
	data.MainPort = 0;
	data.FlxPort = 0;
	data.RxPortUsart = 0;
	data.USB_HIDPort = 0;
	data.USB_VCPPort = 3;
	data.DSMxBind = 0;
	data.GyroRange = 1;
	data.AccelRange = 2;
	data.Barometer = 1;
	data.Magnetometer = 0;
	data.ExtMagOrientation = 0;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle HwBrainHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void HwBrainRxPortSet( uint8_t *NewRxPort )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewRxPort, offsetof( HwBrainData, RxPort), sizeof(uint8_t));
}
void HwBrainRxPortGet( uint8_t *NewRxPort )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewRxPort, offsetof( HwBrainData, RxPort), sizeof(uint8_t));
}
void HwBrainMainPortSet( uint8_t *NewMainPort )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewMainPort, offsetof( HwBrainData, MainPort), sizeof(uint8_t));
}
void HwBrainMainPortGet( uint8_t *NewMainPort )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewMainPort, offsetof( HwBrainData, MainPort), sizeof(uint8_t));
}
void HwBrainFlxPortSet( uint8_t *NewFlxPort )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewFlxPort, offsetof( HwBrainData, FlxPort), sizeof(uint8_t));
}
void HwBrainFlxPortGet( uint8_t *NewFlxPort )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewFlxPort, offsetof( HwBrainData, FlxPort), sizeof(uint8_t));
}
void HwBrainRxPortUsartSet( uint8_t *NewRxPortUsart )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewRxPortUsart, offsetof( HwBrainData, RxPortUsart), sizeof(uint8_t));
}
void HwBrainRxPortUsartGet( uint8_t *NewRxPortUsart )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewRxPortUsart, offsetof( HwBrainData, RxPortUsart), sizeof(uint8_t));
}
void HwBrainUSB_HIDPortSet( uint8_t *NewUSB_HIDPort )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewUSB_HIDPort, offsetof( HwBrainData, USB_HIDPort), sizeof(uint8_t));
}
void HwBrainUSB_HIDPortGet( uint8_t *NewUSB_HIDPort )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewUSB_HIDPort, offsetof( HwBrainData, USB_HIDPort), sizeof(uint8_t));
}
void HwBrainUSB_VCPPortSet( uint8_t *NewUSB_VCPPort )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewUSB_VCPPort, offsetof( HwBrainData, USB_VCPPort), sizeof(uint8_t));
}
void HwBrainUSB_VCPPortGet( uint8_t *NewUSB_VCPPort )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewUSB_VCPPort, offsetof( HwBrainData, USB_VCPPort), sizeof(uint8_t));
}
void HwBrainDSMxBindSet( uint8_t *NewDSMxBind )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewDSMxBind, offsetof( HwBrainData, DSMxBind), sizeof(uint8_t));
}
void HwBrainDSMxBindGet( uint8_t *NewDSMxBind )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewDSMxBind, offsetof( HwBrainData, DSMxBind), sizeof(uint8_t));
}
void HwBrainGyroRangeSet( uint8_t *NewGyroRange )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewGyroRange, offsetof( HwBrainData, GyroRange), sizeof(uint8_t));
}
void HwBrainGyroRangeGet( uint8_t *NewGyroRange )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewGyroRange, offsetof( HwBrainData, GyroRange), sizeof(uint8_t));
}
void HwBrainAccelRangeSet( uint8_t *NewAccelRange )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewAccelRange, offsetof( HwBrainData, AccelRange), sizeof(uint8_t));
}
void HwBrainAccelRangeGet( uint8_t *NewAccelRange )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewAccelRange, offsetof( HwBrainData, AccelRange), sizeof(uint8_t));
}
void HwBrainBarometerSet( uint8_t *NewBarometer )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewBarometer, offsetof( HwBrainData, Barometer), sizeof(uint8_t));
}
void HwBrainBarometerGet( uint8_t *NewBarometer )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewBarometer, offsetof( HwBrainData, Barometer), sizeof(uint8_t));
}
void HwBrainMagnetometerSet( uint8_t *NewMagnetometer )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewMagnetometer, offsetof( HwBrainData, Magnetometer), sizeof(uint8_t));
}
void HwBrainMagnetometerGet( uint8_t *NewMagnetometer )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewMagnetometer, offsetof( HwBrainData, Magnetometer), sizeof(uint8_t));
}
void HwBrainExtMagOrientationSet( uint8_t *NewExtMagOrientation )
{
	UAVObjSetDataField(HwBrainHandle(), (void*)NewExtMagOrientation, offsetof( HwBrainData, ExtMagOrientation), sizeof(uint8_t));
}
void HwBrainExtMagOrientationGet( uint8_t *NewExtMagOrientation )
{
	UAVObjGetDataField(HwBrainHandle(), (void*)NewExtMagOrientation, offsetof( HwBrainData, ExtMagOrientation), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

