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



// Include iostream for output during the program.
#include <iostream>
using namespace std;

// Include temperature conversions header file using a relative path.
#include "TempConversions.h"
                                            

// Start of main function
int main() 
{
    // By including the example header, we can use any functions defined in it.
    {
        // Start with the freezing point of water in freedom units.
        float f = 32;
        cout << "Fahrenheit: " << f << endl;

        // Convert units and print the result.
        cout << "Converting from Fahrenheit to Celsius..." << endl;
        float c = tempConversion::fahrenheitToCelsius(f);       // The functions defined in the included headers are
        cout << "Celsius: " << c << endl;                       // defined in the tempConversion namespace.
                                                                // To use them, we need the scope resolution operator "::"
                                                                // Alternatively: "using namespace tempConversion"

        // More conversions.
        cout << "Converting from Celsius to Kelvin..." << endl;
        float k = tempConversion::celsiusToKelvin(c);
        cout << "Kelvin: " << k << endl;
    }

    // These braces change the scope (f and k can be defined here without overlapping with the f and k above)
    {
        cout << endl; // new line
        float k = 505.928f;
        cout << "Kelvin: " << k << endl;

        cout << "Converting from Kelvin to Fahrenheit..." << endl;
        float f = tempConversion::kelvinToFahrenheit(k);
        cout << "Fahrenheit: " << f << endl;
    }

    cin.get();
    return 0;   // End Program.
}