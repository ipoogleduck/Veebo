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
cout << compOutput << endl;
CString str = "C:/Veebo/Vcheck.bat";
CString action = "open";
ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
compOutputLine2 = "";
compOutputLine3 = "";
letter = 0;
version = "";
cout << "Click enter" << endl;
cin.ignore();
ifstream reader3("here.txt");
if (!reader3) {
	cout << "Error";
}
else {

	for (int i = 0; !reader3.eof(); i++) {
		reader3.get(letter);
		version += letter;
	}
	reader3.close();
}
version.pop_back();
if (version == cversion) {
	cout << "You are up to date!" << endl;
}
else {
	cout << "Update available for version number " << version << ". Do you want to update?" << endl;
	getline(cin, tempString);
	if (tempString == "Yes" || tempString == "yes") {
		cout << "Beep Beep" << endl;
		CString str = "C:/Veebo/install.bat";
		CString action = "open";
		ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
		return;
	}
	else {
		cout << "Okay" << endl;
	}
}
}