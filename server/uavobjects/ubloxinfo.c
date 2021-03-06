/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       ubloxinfo.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the UBloxInfo object. This file has been 
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

#include "openpilot.h"
#include "ubloxinfo.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t UBloxInfoInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(UBLOXINFO_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(UBLOXINFO_OBJID,
			UBLOXINFO_ISSINGLEINST, UBLOXINFO_ISSETTINGS, UBLOXINFO_NUMBYTES, &UBloxInfoSetDefaults);

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
void UBloxInfoSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	UBloxInfoData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(UBloxInfoData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 2000;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 1000;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle UBloxInfoHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void UBloxInfoswVersionSet( float *NewswVersion )
{
	UAVObjSetDataField(UBloxInfoHandle(), (void*)NewswVersion, offsetof( UBloxInfoData, swVersion), sizeof(float));
}
void UBloxInfoswVersionGet( float *NewswVersion )
{
	UAVObjGetDataField(UBloxInfoHandle(), (void*)NewswVersion, offsetof( UBloxInfoData, swVersion), sizeof(float));
}
void UBloxInfoParseErrorsSet( uint32_t *NewParseErrors )
{
	UAVObjSetDataField(UBloxInfoHandle(), (void*)NewParseErrors, offsetof( UBloxInfoData, ParseErrors), sizeof(uint32_t));
}
void UBloxInfoParseErrorsGet( uint32_t *NewParseErrors )
{
	UAVObjGetDataField(UBloxInfoHandle(), (void*)NewParseErrors, offsetof( UBloxInfoData, ParseErrors), sizeof(uint32_t));
}
void UBloxInfohwVersionSet( uint8_t *NewhwVersion )
{
	UAVObjSetDataField(UBloxInfoHandle(), (void*)NewhwVersion, offsetof( UBloxInfoData, hwVersion), 8*sizeof(uint8_t));
}
void UBloxInfohwVersionGet( uint8_t *NewhwVersion )
{
	UAVObjGetDataField(UBloxInfoHandle(), (void*)NewhwVersion, offsetof( UBloxInfoData, hwVersion), 8*sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

