// Veebo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>
#include <Windows.h> // use < > for all system and library headers
#include <winuser.h>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <complex>
#include <string>
using namespace std;

//strings containing what user types
string currentType;
string lastType;

int main()
{
	cout << "Hello, welcome to Veebo! Type 'my info' to tell me about you, or just ask me a question!" << endl;
	getline(cin, currentType);
    return 0;
}

