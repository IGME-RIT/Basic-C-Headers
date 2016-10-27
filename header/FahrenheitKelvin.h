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


// Include guards. see TempConversions.h
#ifndef FAHRENHEIT_KELVIN_H
#define FAHRENHEIT_KELVIN_H


// Use the other two conversions to help with this conversion.
#include "CelsiusFahrenheit.h"
#include "CelsiusKelvin.h"


// These functions are defined within this namespace.
// To use them, the user will have to do tempConversion:: or using namespace tempConversion
namespace tempConversion
{
    // Conversion formula from farenheit to kelvin and back.
    // These conversions convert to celcius as an intermediary step.
    float fahrenheitToKelvin(float f)
    {
        float c = fahrenheitToCelsius(f);
        return celsiusToKelvin(c);
    }

    float kelvinToFahrenheit(float k)
    {
        float c = kelvinToCelsius(k);
        return celsiusToFahrenheit(c);
    }
}

#endif