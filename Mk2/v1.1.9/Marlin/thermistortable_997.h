/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// 100k bed thermistor
const short temptable_997[][2] PROGMEM = {
  {    35 * OVERSAMPLENR, 180 },
  {   210 * OVERSAMPLENR, 140 },
  {   230 * OVERSAMPLENR, 135 },
  {   260 * OVERSAMPLENR, 130 },
  {   290 * OVERSAMPLENR, 125 },
  {  325 * OVERSAMPLENR, 120 },
  {  370 * OVERSAMPLENR, 115 },
  {  400 * OVERSAMPLENR, 110 },
  {  460 * OVERSAMPLENR, 105 },
  {  500 * OVERSAMPLENR, 100 },
  {  530 * OVERSAMPLENR,  95 },
  {  590 * OVERSAMPLENR,  90 },
  {  625 * OVERSAMPLENR,  85 },
  {  665 * OVERSAMPLENR,  80 },
  {  705 * OVERSAMPLENR,  75 },
  {  750 * OVERSAMPLENR,  70 },
  {  795 * OVERSAMPLENR,  65 },
  {  815 * OVERSAMPLENR,  60 },
  {  840 * OVERSAMPLENR,  55 },
  {  870 * OVERSAMPLENR,  50 },
  {  900 * OVERSAMPLENR,  45 },
  {  920 * OVERSAMPLENR,  40 },
  {  945 * OVERSAMPLENR,  35 },
  {  960 * OVERSAMPLENR,  30 },
  {  975 * OVERSAMPLENR,  25 },
  {  985 * OVERSAMPLENR,  20 },
  {  990 * OVERSAMPLENR,  15 },
  { 1000 * OVERSAMPLENR,  10 },
  { 1004 * OVERSAMPLENR,   5 },
  { 1008 * OVERSAMPLENR,   0 },
  { 1023 * OVERSAMPLENR, -40 }
};
