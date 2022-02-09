#include <iostream>
using namespace std;

/*
   Helpful conversions:
     inches * 2.54 -> cm
	 cm   * 0.01   -> m
	 feet * 12     -> inches
*/

//Write your converHeightToMeters function here


int main() {

	convertHeightToMeters(6, 4);
	convertHeightToMeters(0, 6);
	convertHeightToMeters(5, 8);
	convertHeightToMeters(5, 5);
	convertHeightToMeters(10, 3);
	convertHeightToMeters(10, 0);

	
	system("pause");
}