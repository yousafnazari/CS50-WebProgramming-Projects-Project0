//------------------------------------------------------------------
//
// Lab 1-A: Getting Started with C++
// printHello.cpp: The program prints Hello World! then Hello Again
//
// Author: Yousaf Nazari, 6354		Date: September 11, 2020
//
//------------------------------------------------------------------

//#include <iostream>
using namespace std;

int main() {
	// This program outputs 2 messages
	cout << "Hello World!" << endl;
	cout << "Hello Again." << endl;
	system("pause");

	return 0;	// Return to OS and indicate no errors
} // End main

// Question 7.a) When I comment out the #include <iostream> line
// the program does not run. I get multiple errors saying "cout", 
// "endl" and "system" are undefined. I am guessing that line
// is a preprocessor directive that contains definitions/functions
// for these statements.