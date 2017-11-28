#pragma once
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
#include <fstream>
#include <atlstr.h>
using namespace std;

void update(){
compOutput = "I'll check if a new version is available...";
cout << compOutput << endl << endl;
CString str = "C:/Veebo/Vcheck.bat";
CString action = "open";
ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
compOutputLine2 = "";
compOutputLine3 = "";
version = "";
ofstream writer21("done.txt");
if (!writer21) {
	cout << "Error opening file..." << endl;
}
else {
	writer21 << "_" << endl;
	writer21.close();
}
letter = '_';
while (letter == '_' || letter == ' ') {
	tempString = "";
	ifstream reader21("done.txt");
	if (!reader21) {
	}
	else {
		reader21.get(letter);
		tempString += letter;
		reader21.close();
		letter2++;
	}
}
letter2 = 0;
ifstream reader3("here.txt");
if (!reader3) {
	cout << "Error";
	tempString = "0";
}
else {

	for (int i = 0; !reader3.eof(); i++) {
		reader3.get(letter);
		version += letter;
	}
	reader3.close();
}
letter = 0;
compat = "";
ifstream reader7("compat.txt");
if (!reader7) {
	cout << "Error";
	tempString = "0";
}
else {

	for (int i = 0; !reader7.eof(); i++) {
		reader7.get(letter);
		compat += letter;
	}
	reader7.close();
}
compat.pop_back();
version.pop_back();
if (version == cversion) {
	cout << "You are up to date!" << endl;
	tempString = "1";
}
else {
	if (compat == ccompat) {
		cout << "Update available for version number " << version << ". Do you want to update?" << endl;
		getline(cin, tempString);
		if (tempString == "Yes" || tempString == "yes") {
			cout << "Beep Beep" << endl;
			CString str = "C:/Veebo/install.bat";
			CString action = "open";
			ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
			tempString = "0";
		}
		else {
			cout << "Okay" << endl;
			tempString = "1";
		}
	}
	else {
		cout << "There is an update for version " << version << endl << "Unfortunately there are parts of this update that cannot be updated by the auto update feature" << endl;
		cout << "You will have to reinstall Veebo using the installer. Would you like to proceed to the instructions?" << endl;
		getline(cin, tempString);
		if (tempString == "Yes" || tempString == "yes") {
			ShellExecute(0, 0, L"https://ipooglecodes.weebly.com/uninstall.html", 0, 0, SW_SHOW);
			tempString = "0";
		}
		else {
			cout << "Okay" << endl;
			tempString = "1";
		}
	}
}
}