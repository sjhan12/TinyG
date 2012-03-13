/*
 * settings_zen7x12.h - LumenLabs MicRo V3 machine profile
 * Part of TinyG project
 *
 * Copyright (c) 2010 - 2012 Alden S. Hart Jr.
 *
 * TinyG is free software: you can redistribute it and/or modify it 
 * under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, 
 * or (at your option) any later version.
 *
 * TinyG is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for details. You should have received a copy of the GNU General Public 
 * License along with TinyG  If not, see <http://www.gnu.org/licenses/>.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
/* Note: The values in this file are the default settings that are loaded
 * 		 into a virgin EEPROM, and can be changed using the config commands.
 *		 After initial load the EEPROM values (or changed values) are used.
 *
 *		 System and hardware settings that you shouldn't need to change 
 *		 are in system.h  Application settings that also shouldn't need 
 *		 to be changed are in tinyg.h
 */

/***********************************************************************/
/**** Lumenlabs micRo v3 profile ***************************************/
/***********************************************************************/

#define TINYG_CONFIGURATION_PROFILE "LumenLabs micRo v3" // displays base config profile

#define JERK_MAX_COMMON 	50000000	// yes, that's "50,000,000" mm/(min^3)
#define JUNCTION_ACCELERATION 200000
#define JUNCTION_DEVIATION 	0.05		// default value, in mm

// motor values
#define M1_MOTOR_MAP X				// motor maps to axis
#define M2_MOTOR_MAP Y
#define M3_MOTOR_MAP Y
#define M4_MOTOR_MAP Z

#define M1_STEP_ANGLE 1.8			// degrees per whole step
#define M2_STEP_ANGLE 1.8
#define M3_STEP_ANGLE 1.8
#define M4_STEP_ANGLE 1.8

#define M1_TRAVEL_PER_REV 2.54		// mm of travel = 10 TPI lead screw pitch
#define M2_TRAVEL_PER_REV 2.54
#define M3_TRAVEL_PER_REV 2.54
#define M4_TRAVEL_PER_REV 2.54

#define M1_MICROSTEPS 8				// one of: 8, 4, 2, 1
#define M2_MICROSTEPS 8
#define M3_MICROSTEPS 8
#define M4_MICROSTEPS 8

#define M1_POLARITY 1				// 0=normal, 1=inverted
#define M2_POLARITY 1
#define M3_POLARITY 1
#define M4_POLARITY 0

#define M1_POWER_MODE TRUE			// TRUE=low power idle enabled 
#define M2_POWER_MODE TRUE
#define M3_POWER_MODE TRUE
#define M4_POWER_MODE TRUE

// axis values
#define X_AXIS_MODE AXIS_STANDARD	// see gcode.h for valid values
#define Y_AXIS_MODE AXIS_STANDARD
#define Z_AXIS_MODE AXIS_STANDARD
#define A_AXIS_MODE AXIS_RADIUS
#define B_AXIS_MODE AXIS_RADIUS
#define C_AXIS_MODE AXIS_RADIUS

#define X_VELOCITY_MAX 1600 		// G0 max seek rate in mm/min
#define Y_VELOCITY_MAX 1600
#define Z_VELOCITY_MAX 1600

#define M4_STEPS_PER_SEC 1200 		// motor characteristic
#define A_VELOCITY_MAX ((M4_STEPS_PER_SEC * M4_STEP_ANGLE * 60) / M4_TRAVEL_PER_REV)
#define B_VELOCITY_MAX A_VELOCITY_MAX
#define C_VELOCITY_MAX A_VELOCITY_MAX

#define X_FEEDRATE_MAX X_VELOCITY_MAX // G1 max feed rate in mm/min
#define Y_FEEDRATE_MAX Y_VELOCITY_MAX
#define Z_FEEDRATE_MAX Z_VELOCITY_MAX
#define A_FEEDRATE_MAX A_VELOCITY_MAX
#define B_FEEDRATE_MAX B_VELOCITY_MAX
#define C_FEEDRATE_MAX C_VELOCITY_MAX

#define X_TRAVEL_MAX 400		// travel between switches or crashes
#define Y_TRAVEL_MAX 300
#define Z_TRAVEL_MAX 75
#define A_TRAVEL_MAX -1		// -1 is no limit (typ for rotary axis)
#define B_TRAVEL_MAX -1
#define C_TRAVEL_MAX -1

#define X_JERK_MAX JERK_MAX_COMMON
#define Y_JERK_MAX JERK_MAX_COMMON
#define Z_JERK_MAX JERK_MAX_COMMON
#define A_JERK_MAX JERK_MAX_COMMON
#define B_JERK_MAX JERK_MAX_COMMON
#define C_JERK_MAX JERK_MAX_COMMON

#define X_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define Y_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define Z_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define A_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define B_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define C_JUNCTION_DEVIATION JUNCTION_DEVIATION

#define A_RADIUS 10					// radius in mm
#define B_RADIUS 10					// (XYZ values are not defined)
#define C_RADIUS 10

#define X_SWITCH_MODE TRUE			// 1=limit switches present and enabled
#define Y_SWITCH_MODE TRUE
#define Z_SWITCH_MODE TRUE
#define A_SWITCH_MODE FALSE
#define B_SWITCH_MODE FALSE
#define C_SWITCH_MODE FALSE

#define X_ZERO_OFFSET 3					// mm
#define Y_ZERO_OFFSET 3
#define Z_ZERO_OFFSET 3
#define A_ZERO_OFFSET 0					// degrees
#define B_ZERO_OFFSET 0
#define C_ZERO_OFFSET 0

#define X_SEARCH_VELOCITY -X_VELOCITY_MAX	// hit X minumum switch
#define Y_SEARCH_VELOCITY -Y_VELOCITY_MAX	// hit Y minimum switch
#define Z_SEARCH_VELOCITY Z_VELOCITY_MAX	// hit Z maximum switch
#define A_SEARCH_VELOCITY A_VELOCITY_MAX
#define B_SEARCH_VELOCITY B_VELOCITY_MAX
#define C_SEARCH_VELOCITY C_VELOCITY_MAX

#define X_LATCH_VELOCITY 100		// mm/min
#define Y_LATCH_VELOCITY 100
#define Z_LATCH_VELOCITY 100
#define A_LATCH_VELOCITY 3600	// degrees per minute
#define B_LATCH_VELOCITY 3600
#define C_LATCH_VELOCITY 3600

#define X_HOMING_JERK 1000000000		// 1,000,000,000
#define Y_HOMING_JERK X_HOMING_JERK
#define Z_HOMING_JERK X_HOMING_JERK
#define A_HOMING_JERK X_HOMING_JERK
#define B_HOMING_JERK A_HOMING_JERK
#define C_HOMING_JERK a_HOMING_JERK

/**** DEFAULT COORDINATE SYSTEM OFFSETS *************************************/

#define G54_X_OFFSET 0			// G54 is traditionally set to all zeros
#define G54_Y_OFFSET 0
#define G54_Z_OFFSET 0
#define G54_A_OFFSET 0
#define G54_B_OFFSET 0
#define G54_C_OFFSET 0

#define G55_X_OFFSET X_TRAVEL_MAX/2
#define G55_Y_OFFSET Y_TRAVEL_MAX/2
#define G55_Z_OFFSET 0
#define G55_A_OFFSET 0
#define G55_B_OFFSET 0
#define G55_C_OFFSET 0

#define G56_X_OFFSET 1
#define G56_Y_OFFSET 1
#define G56_Z_OFFSET 0
#define G56_A_OFFSET 0
#define G56_B_OFFSET 0
#define G56_C_OFFSET 0

#define G57_X_OFFSET 0
#define G57_Y_OFFSET 0
#define G57_Z_OFFSET 0
#define G57_A_OFFSET 0
#define G57_B_OFFSET 0
#define G57_C_OFFSET 0

#define G58_X_OFFSET 0
#define G58_Y_OFFSET 0
#define G58_Z_OFFSET 0
#define G58_A_OFFSET 0
#define G58_B_OFFSET 0
#define G58_C_OFFSET 0

#define G59_X_OFFSET 0
#define G59_Y_OFFSET 0
#define G59_Z_OFFSET 0
#define G59_A_OFFSET 0
#define G59_B_OFFSET 0
#define G59_C_OFFSET 0