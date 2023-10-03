#include "std_lib_facilities.h"
int main()
{
	double miles;

	//Prompt to the user to enter the number of miles they would like to convert
	cout << "enter the miles you would like to convert to kilometer: ";	
	cin >> miles;

	//Convert miles to kilometers
	double kilometers = miles * 1.609;

	//Display the resultant
	cout << miles << " miles is equivalent to " << kilometers << " kilometers.\n";
}