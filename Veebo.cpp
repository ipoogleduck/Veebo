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
string currentType; //to store current user input
string lastType; //to store last user input
int randInt; //to store a random integer used for some responses
int lastRandInt; //to store the last random integer

int main()
{
	cout << "Hello, welcome to Veebo! Type 'My info' to tell me about yourself, or just ask me a question!" << endl;
	cout << "Type 'exit' to close and save" << endl;
	getline(cin, currentType);
	while(currentType != "exit") { //runs question loop until user inputs exit
		if (currentType == "Hi" || currentType == "hi") {
			cout << "Hey! Whats up?" << endl;
		}
		else if (currentType == "Hey" || currentType == "hey") {
			cout << "Hi! How are ya doing?" << endl;
		}

		else {
			cout << "I'm sorry, I don't know what you mean by " << currentType << endl;
		}
		lastType = currentType; //moves question to lastType in case user asks to repeate question or for other uses
		lastRandInt = randInt; //moves last random into over
		getline(cin, currentType); //asks for another input at end to avoid constant repeate
	}

	cout << "Type 'credits' for credits, otherwise click enter" << endl; //credits run after program is done
	getline(cin, currentType);
	if(currentType == "credits") {
		cout << "Service developed in Cpp and designed for Windows" << endl <<
			"All code created by iPoogleDuck (Oliver)" << endl;
	}
	cout << "If you are using more then 15 lines of this code please get permission." << endl <<
		"To acquire a permission please visit ipooglecodes.weebly.com" << endl;
	cout << "\nClick enter to close";
	cin.ignore();
    return 0;
}