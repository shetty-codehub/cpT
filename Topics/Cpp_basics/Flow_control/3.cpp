//Illustrates the importance of using braces in if-else statements.
/*learning:dangling else problem;*/
/*requirement:if the fuel gauge is below 3/4 full, then:
Check whether the fuel gauge is below 1/4 full and issue a low fuel
warning if it is.
otherwise (that is, if fuel gauge is over 3/4 full):
output a statement telling the driver not to stop*/


#include <iostream>
using namespace std;
int main( )
{
double fuel_gauge_reading;

cout << "Enter fuel gauge reading: ";
cin >> fuel_gauge_reading;

 cout << "First with braces:\n";
 if (fuel_gauge_reading < 0.75)
 {
 if (fuel_gauge_reading < 0.25)
 cout << "Fuel very low. Caution!\n";
 }
 else
 {
 cout << "Fuel over 3/4. Don't stop now!\n";
 }

 cout << "Now without braces:\n";
 if (fuel_gauge_reading < 0.75)
 if (fuel_gauge_reading < 0.25)
 cout << "Fuel very low. Caution!\n";
 else
 cout << "Fuel over 3/4. Don't stop now!\n";

 return 0;
 }
