/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       altitudeholdsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the AltitudeHoldSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: altitudeholdsettings.xml. 
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
#include "altitudeholdsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t AltitudeHoldSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(ALTITUDEHOLDSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(ALTITUDEHOLDSETTINGS_OBJID,
			ALTITUDEHOLDSETTINGS_ISSINGLEINST, ALTITUDEHOLDSETTINGS_ISSETTINGS, ALTITUDEHOLDSETTINGS_NUMBYTES, &AltitudeHoldSettingsSetDefaults);

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
void AltitudeHoldSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	AltitudeHoldSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(AltitudeHoldSettingsData));
	data.PositionKp = 1;
	data.VelocityKp = 0.3;
	data.VelocityKi = 0.3;
	data.AttitudeComp = 100;
	data.MaxRate = 4;
	data.Expo = 40;

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
UAVObjHandle AltitudeHoldSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void AltitudeHoldSettingsPositionKpSet( float *NewPositionKp )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewPositionKp, offsetof( AltitudeHoldSettingsData, PositionKp), sizeof(float));
}
void AltitudeHoldSettingsPositionKpGet( float *NewPositionKp )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewPositionKp, offsetof( AltitudeHoldSettingsData, PositionKp), sizeof(float));
}
void AltitudeHoldSettingsVelocityKpSet( float *NewVelocityKp )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewVelocityKp, offsetof( AltitudeHoldSettingsData, VelocityKp), sizeof(float));
}
void AltitudeHoldSettingsVelocityKpGet( float *NewVelocityKp )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewVelocityKp, offsetof( AltitudeHoldSettingsData, VelocityKp), sizeof(float));
}
void AltitudeHoldSettingsVelocityKiSet( float *NewVelocityKi )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewVelocityKi, offsetof( AltitudeHoldSettingsData, VelocityKi), sizeof(float));
}
void AltitudeHoldSettingsVelocityKiGet( float *NewVelocityKi )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewVelocityKi, offsetof( AltitudeHoldSettingsData, VelocityKi), sizeof(float));
}
void AltitudeHoldSettingsAttitudeCompSet( uint16_t *NewAttitudeComp )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewAttitudeComp, offsetof( AltitudeHoldSettingsData, AttitudeComp), sizeof(uint16_t));
}
void AltitudeHoldSettingsAttitudeCompGet( uint16_t *NewAttitudeComp )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewAttitudeComp, offsetof( AltitudeHoldSettingsData, AttitudeComp), sizeof(uint16_t));
}
void AltitudeHoldSettingsMaxRateSet( uint8_t *NewMaxRate )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewMaxRate, offsetof( AltitudeHoldSettingsData, MaxRate), sizeof(uint8_t));
}
void AltitudeHoldSettingsMaxRateGet( uint8_t *NewMaxRate )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewMaxRate, offsetof( AltitudeHoldSettingsData, MaxRate), sizeof(uint8_t));
}
void AltitudeHoldSettingsExpoSet( uint8_t *NewExpo )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewExpo, offsetof( AltitudeHoldSettingsData, Expo), sizeof(uint8_t));
}
void AltitudeHoldSettingsExpoGet( uint8_t *NewExpo )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewExpo, offsetof( AltitudeHoldSettingsData, Expo), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

