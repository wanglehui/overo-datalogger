/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       picocstatus.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the PicoCStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: picocstatus.xml. 
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
#include "picocstatus.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t PicoCStatusInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(PICOCSTATUS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(PICOCSTATUS_OBJID,
			PICOCSTATUS_ISSINGLEINST, PICOCSTATUS_ISSETTINGS, PICOCSTATUS_NUMBYTES, &PicoCStatusSetDefaults);

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
void PicoCStatusSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	PicoCStatusData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(PicoCStatusData));
	data.ExitValue = 0;
	data.TestValue = 0;
	data.SectorID = 0;
	data.FileID = 0;
	data.Command = 0;
	data.CommandError = 0;

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
UAVObjHandle PicoCStatusHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void PicoCStatusExitValueSet( int16_t *NewExitValue )
{
	UAVObjSetDataField(PicoCStatusHandle(), (void*)NewExitValue, offsetof( PicoCStatusData, ExitValue), sizeof(int16_t));
}
void PicoCStatusExitValueGet( int16_t *NewExitValue )
{
	UAVObjGetDataField(PicoCStatusHandle(), (void*)NewExitValue, offsetof( PicoCStatusData, ExitValue), sizeof(int16_t));
}
void PicoCStatusTestValueSet( int16_t *NewTestValue )
{
	UAVObjSetDataField(PicoCStatusHandle(), (void*)NewTestValue, offsetof( PicoCStatusData, TestValue), sizeof(int16_t));
}
void PicoCStatusTestValueGet( int16_t *NewTestValue )
{
	UAVObjGetDataField(PicoCStatusHandle(), (void*)NewTestValue, offsetof( PicoCStatusData, TestValue), sizeof(int16_t));
}
void PicoCStatusSectorIDSet( uint16_t *NewSectorID )
{
	UAVObjSetDataField(PicoCStatusHandle(), (void*)NewSectorID, offsetof( PicoCStatusData, SectorID), sizeof(uint16_t));
}
void PicoCStatusSectorIDGet( uint16_t *NewSectorID )
{
	UAVObjGetDataField(PicoCStatusHandle(), (void*)NewSectorID, offsetof( PicoCStatusData, SectorID), sizeof(uint16_t));
}
void PicoCStatusFileIDSet( uint8_t *NewFileID )
{
	UAVObjSetDataField(PicoCStatusHandle(), (void*)NewFileID, offsetof( PicoCStatusData, FileID), sizeof(uint8_t));
}
void PicoCStatusFileIDGet( uint8_t *NewFileID )
{
	UAVObjGetDataField(PicoCStatusHandle(), (void*)NewFileID, offsetof( PicoCStatusData, FileID), sizeof(uint8_t));
}
void PicoCStatusCommandSet( uint8_t *NewCommand )
{
	UAVObjSetDataField(PicoCStatusHandle(), (void*)NewCommand, offsetof( PicoCStatusData, Command), sizeof(uint8_t));
}
void PicoCStatusCommandGet( uint8_t *NewCommand )
{
	UAVObjGetDataField(PicoCStatusHandle(), (void*)NewCommand, offsetof( PicoCStatusData, Command), sizeof(uint8_t));
}
void PicoCStatusCommandErrorSet( int8_t *NewCommandError )
{
	UAVObjSetDataField(PicoCStatusHandle(), (void*)NewCommandError, offsetof( PicoCStatusData, CommandError), sizeof(int8_t));
}
void PicoCStatusCommandErrorGet( int8_t *NewCommandError )
{
	UAVObjGetDataField(PicoCStatusHandle(), (void*)NewCommandError, offsetof( PicoCStatusData, CommandError), sizeof(int8_t));
}
void PicoCStatusSectorSet( uint8_t *NewSector )
{
	UAVObjSetDataField(PicoCStatusHandle(), (void*)NewSector, offsetof( PicoCStatusData, Sector), 32*sizeof(uint8_t));
}
void PicoCStatusSectorGet( uint8_t *NewSector )
{
	UAVObjGetDataField(PicoCStatusHandle(), (void*)NewSector, offsetof( PicoCStatusData, Sector), 32*sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

