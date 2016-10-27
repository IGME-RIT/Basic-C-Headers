/*
Headers
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// These are special compiler instructions that aren't part of the code.
// This is a commonly used expression called an include guard.
// #include essentially copy pastes the included file where the include is, which causes errors when including a file twice.
// If something is defined multiple times, the compiler doesn't know which one to use, even if they are technically the same.

#ifndef TEMP_CONVERSIONS_H  // This line checks that the given name hasn't been defined.
                            // If it hasn't, everything until #endif is used.
                            // If it has been defined, we skip until after #endif.

#define TEMP_CONVERSIONS_H  // If the thing was not defined, define it.
                            // Now, next time this file is read, it will be skipped.

// #pragma once             // Alternatively, most C++ compilers support #pragma once.
                            // #pragma once is an automatic include guard.
                            // You don't have to come up with a unique name for each define
                            // and you don't need an #endif at the end of the file either.

// Here, we're just going to include all of the different temperature conversions.
// Realistically, these files are all short enough that they could be combined into one file.
// We're just doing it this way as an example.
#include "../header/CelsiusFahrenheit.h"
#include "../header/CelsiusKelvin.h"
#include "../header/FahrenheitKelvin.h" // Because this header also includes the previous two headers,
                                        // there should be redundant declarations.
                                        // In order to fix that problem, they will also use include guards.

#endif