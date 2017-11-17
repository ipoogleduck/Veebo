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
#include <ctime>
using namespace std;

//strings containing what user types
string currentType; //to store current user input
string lastType; //to store last user input
int randInt = 0; //to store a random integer used for some responses
int lastRandInt = 0; //to store the last random integer

int main()
{
	cout << "Hello, welcome to Veebo! Type 'My info' to tell me about yourself, or just ask me a question!" << endl;
	cout << "You can also type 'Help' for a list of questions I can currently answer" << endl;
	cout << "Type 'exit' at any time to close and save" << endl;
	srand(time(0)); // This will ensure a really randomized number by help of time
	getline(cin, currentType);
	while(currentType != "exit") { //runs question loop until user inputs exit
		if (currentType == "Hi" || currentType == "hi") {
			cout << "Hey! Whats up?" << endl;
		}
		else if (currentType == "Hey" || currentType == "hey") {
			cout << "Hi! How are ya doing?" << endl;
		}
		else if (currentType == "My info" || currentType == "my info" || currentType == "My Info") {
			cout << "This feture is coming soon!" << endl;
		}
		else if (currentType == "help" || currentType == "Help") {
			cout << "Here are some things you can ask me about:" << endl;
			cout << "(nothing yet)" << endl;
		}
		else {
			randInt = rand() % 3 + 1; //rand char
			if (randInt == 1) {
				cout << "I'm not sure I understand." << endl;
			}
			else if (randInt == 2) {
				cout << "I'm sorry, I don't think I know the answer to that..." << endl;
			}
			else {
				cout << "I'm sorry, I don't know what you mean by " << currentType << endl;
			}
		}
		lastType = currentType; //moves question to lastType in case user asks to repeate question or for other uses
		lastRandInt = randInt; //moves last random int over
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