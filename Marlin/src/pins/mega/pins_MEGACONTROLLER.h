/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Mega controller pin assignments
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "Mega Controller supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#include "env_validate.h"

#define BOARD_INFO_NAME "Mega Controller"

//
// Limit Switches
//
#define X_MIN_PIN                             43
#define Y_MAX_PIN                             38
#define Z_MIN_PIN                             37

//
// Steppers
//
#define X_STEP_PIN                            2  // A8
#define X_DIR_PIN                             3  // A9
#define X_ENABLE_PIN                          0  // A7

#define Y_STEP_PIN                            4  // A11
#define Y_DIR_PIN                             5  // A12
#define Y_ENABLE_PIN                          0  // A10

#define Z_STEP_PIN                            68  // A14
#define Z_DIR_PIN                             69  // A15
#define Z_ENABLE_PIN                          67  // A13

#define E0_STEP_PIN                           23
#define E0_DIR_PIN                            24
#define E0_ENABLE_PIN                         22

#define E1_STEP_PIN                          26
#define E1_DIR_PIN                            27
#define E1_ENABLE_PIN                         30

#define TEMP_0_PIN 0
#define HEATER_0_PIN 0
#define FAN_COUNT                           5
#define FAN1_PIN 59
#define FAN2_PIN 60
#define FAN3_PIN 61
#define FAN4_PIN 62
#define FAN5_PIN 63
