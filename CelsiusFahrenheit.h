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
#ifndef CELSIUS_FAHRENHEIT_H
#define CELSIUS_FAHRENHEIT_H

// These functions are defined within this namespace.
// To use them, the user will have to do tempConversion:: or using namespace tempConversion
namespace tempConversion
{
    // Conversion formula from celcius to fahrenheit and back.
    float celsiusToFahrenheit(float c)
    {
        return (9.0f / 5.0f * c) + 32;
    }

    float fahrenheitToCelsius(float f)
    {
        return 5.0f / 9.0f * (f - 32);
    }
}
#endif