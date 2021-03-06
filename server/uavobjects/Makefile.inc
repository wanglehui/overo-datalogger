#####
# Project: OpenPilot
#
# Makefile for OpenPilot UAVObject code
#
# The OpenPilot Team, http://www.openpilot.org, Copyright (C) 2011.
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
# for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
#####
#
# This file is to be included by firmware Makefiles to retrieve a list of all
# UAVObject source files.
#
# It's the task of the individual Makefile to build them at an apropriate
# output location
#
# This file is Autogenerated by the UAVObjGenerator, please do not modify
#
# Templates: 
#
# UAVOBJFILENAMES - lower case filenames of UAVObjects (without extension!)
# UAVOBJNAMES - Names of UAVObjects (correct casing)
#
#####

UAVOBJSRCFILENAMES =  acceldesired accels accessorydesired actuatorcommand actuatordesired actuatorsettings airspeedactual airspeedsettings altitudeholddesired altitudeholdsettings attitudeactual attitudesettings attitudesimulated baroairspeed baroaltitude brushlessgimbalsettings cameradesired camerastabsettings faultsettings firmwareiapobj fixedwingairspeeds fixedwingpathfollowersettings fixedwingpathfollowersettingscc fixedwingpathfollowerstatus flightbatterysettings flightbatterystate flightplancontrol flightplansettings flightplanstatus flightstatus flighttelemetrystats gcsreceiver gcstelemetrystats gpsposition gpssatellites gpstime gpsvelocity groundpathfollowersettings groundtruth gyros gyrosbias homelocation hottsettings hwcoptercontrol hwdiscoveryf4 hwflyingf3 hwflyingf4 hwfreedom hwquanton hwrevolution hwrevomini hwsparky i2cvm i2cvmuserprogram inssettings insstate loitercommand magbias magnetometer manualcontrolcommand manualcontrolsettings mixersettings mixerstatus modulesettings nedaccel nedposition objectpersistence oplinksettings oplinkstatus overosyncsettings overosyncstats pathdesired pathplannersettings pathstatus picocsettings picocstatus poilocation positionactual ratedesired receiveractivity relaytuning relaytuningsettings sensorsettings sessionmanaging sonaraltitude stabilizationdesired stabilizationsettings stateestimation systemalarms systemsettings systemstats tabletinfo taskinfo trimangles trimanglessettings txpidsettings ubloxinfo velocityactual velocitydesired vibrationanalysisoutput vibrationanalysissettings vtolpathfollowersettings vtolpathfollowerstatus watchdogstatus waypoint waypointactive windvelocityactual

UAVOBJSRC = $(foreach UAVOBJSRCFILE,$(UAVOBJSRCFILENAMES),$(UAVOBJSYNTHDIR)/$(UAVOBJSRCFILE).c )
UAVOBJDEFINE = $(foreach UAVOBJSRCFILE,$(UAVOBJSRCFILENAMES),-DUAVOBJ_INIT_$(UAVOBJSRCFILE) )
