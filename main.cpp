/////////////////////////////////////////////////////////////////////
//
// Name: Sebastian Valdez
// Date: Feburary 6th 2024
// Class: CSCI 1470.04
// Semester: Spring 2024
// CSCI 1470 Instructor: Gustavo dietrich
//
// Using your own words describe below what the program does 
// Program Description: 
//
/////////////////////////////////////////////////////////////////////

#include <iostream>				// to be able to use std I/O (cin, cout)
#include <typeinfo>				// to be able to use operator typeid
#include <string>
#include <cmath>
#include <iomanip>
// Include here all the other libraries that required for the program to compile
using namespace std;


// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int  main( )
{
	// Declares variable Name that holds text
    string name;
	// Declares variables a, h, k that hold whole numbers
    int a;
    int h;
    int k;
	// Declares variables x1 and x2 that hold double precision real numbers
    double x1;
    double x2;
	// Prompts the user to "Please enter your name: "
    cout << "Please enter your name: ";
	// Reads the name from keyboard and stores it in the corresponding variable
    cin >> name;
	// Displays title "Please enter the known terms for the quadratic equation:"
    cout << "Plase enter the known terms for the quadratic equation " << endl << endl;
	// Prompts the user to enter a
    cout << "a: ";
	// Reads the value from the keyboard and stores it in the corresponding variable
    cin >> a;
	// Prompts the user to enter h
    cout << endl << "h: ";
	// Reads the value from the keyboard and stores it in the corresponding variable
    cin >> h;
	// Prompts the user to enter k
    cout << endl << "k: ";
	// Reads the value from the keyboard and stores it in the corresponding variable
    cin >> k;
	// Displays "Thanks ", name
    cout << endl << "Thanks, " << name << endl;
	// Calculates x1 using the formula -h + square root(k/a)
    x1 = -h + sqrt(static_cast<float>(k)/static_cast<float>(a));
	// Rounds x1 to the second decimal digit and reassigns it to x1
    x1 = round(x1 * 100.0f) / 100.0f;
	// Calculates x2 using the formula -h - square root(k/a)
    x2 = -h - sqrt(static_cast<float>(k)/static_cast<float>(a));
	// Rounds x2 to the second decimal digit and reassigns it to x2
    x2 = round(x2 * 100.0f) / 100.0f;
	// Formats the output to display the solutions in fixed format with two decimal digits
    cout << fixed << setprecision(2);
	// Prints a message like the one below:
	// "The solutions for the equation are:"
	//                                 "x1: ", x1
	//								   "x2: ", x2
    cout << endl << "The solution for the equation are: " << endl << endl << setw(35) << "X1: " << x1 << endl << setw(35) << "X2: " << x2 << endl;
	// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(name) == typeid(string));		// Incorrect data type used for name
	test(typeid(x1) == typeid(double));				// Incorrect data type used for x1
	test(typeid(x2) == typeid(double));				// Incorrect data type used for x2
	test(typeid(a) == typeid(int));					// Incorrect data type used for a
	test(typeid(k) == typeid(int));					// Incorrect data type used for k
	test(typeid(h) == typeid(int));					// Incorrect data type used for h
	if (a == 4 && h == 2 && k == 3)					// Incorrect value of x1 (check expressions for calculating x1 and for rounding x1)
		test(fabs(fabs(x1) - 1.13) < 0.001);
	if (a == 4 && h == 2 && k == 3)					// Incorrect value of x2 (check expressions for calculating x2 and for rounding x2) 
		test(fabs(fabs(x2) - 2.87) < 0.001);

    return 0 ;								//  Successful completion
}










