#pragma once
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

//CRYPION WORKSPACE
string key1;
string decOrEnc;
string cryptMessage1;
string cryrptable1 = "qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnNmM1234567890#:><(){}[]-?!@^&=+";
string uncyrptable1 = "ravLNcED!Yhe5ZQq2Sb?U lBRGCdgA7mn8413tpjuKFMJHzxoPX,W6wfOVI.Ty0iks9*_";
int keyChar1 = 0; //for kepping track of char in code
int cryptChar1 = 0; //for keeping track of how many chars have been crypted
				   //All func
void toClipboard(HWND hwnd, const std::string &s);
void encryption() {
	do while (cryptMessage1[cryptChar1] != '*') {
		keyChar1 = 0;
		do while (uncyrptable1[keyChar1] != '_') {
			if (uncyrptable1[keyChar1] == '*') { // also for caps
				cout << "ERROR: THE CHARACTER " << cryptMessage1[cryptChar1] << " IS NOT SUPPORTED. " <<
					"There may be an error when decrypting..." << endl;
			}
			if (cryptMessage1[cryptChar1] == uncyrptable1[keyChar1]) { // also for caps
				cryptMessage1[cryptChar1] = key1[keyChar1];
				keyChar1 = 67;
			}
			keyChar1++;

		} while (uncyrptable1[keyChar1] != '_');

		cout << ".";
		cryptChar1++;
	} while (cryptMessage1[cryptChar1] != '*');

}


void decryption() {

	do while (cryptMessage1[cryptChar1] != '*') {
		keyChar1 = 0;
		do while (uncyrptable1[keyChar1] != '_') {
			if (cryptMessage1[cryptChar1] == key1[keyChar1]) { // also for caps
				cryptMessage1[cryptChar1] = uncyrptable1[keyChar1];
				keyChar1 = 67;
			}
			keyChar1++;

		} while (uncyrptable1[keyChar1] != '_');
		cout << ".";
		cryptChar1++;
	} while (cryptMessage1[cryptChar1] != '*');

}
void toClipboard(HWND hwnd, const std::string &s) { //copy to clipboard
	OpenClipboard(hwnd);
	EmptyClipboard();
	HGLOBAL hg = GlobalAlloc(GMEM_MOVEABLE, s.size() + 1);
	if (!hg) {
		CloseClipboard();
		return;
	}
	memcpy(GlobalLock(hg), s.c_str(), s.size() + 1);
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT, hg);
	CloseClipboard();
	GlobalFree(hg);
}
void encrypt() {

	cout << "\nType or paste the message you want to encrypt" << endl;
	cout << "Note that this service only supports the special characters of . , ! ?" << endl;
	getline(cin, cryptMessage1);
	//add * to end of crypt
	cryptMessage1 += "*";
	encryption();
	cout << "\nEncryption has been copied to clipboard" << endl << "Click enter to continue";

	size_t len = strlen(cryptMessage1.c_str());
	// get desktop windows and the call toClipboard
	HWND hwnd = GetDesktopWindow();
	toClipboard(hwnd, cryptMessage1);
	cin.clear();
	cin.ignore(255, '\n');
	cryptMessage1 = "";
}



void decrypt() {

	cout << "Paste the encrypted message (ctrl v)" << endl;
	getline(cin, cryptMessage1);
	decryption();
	cryptMessage1.pop_back();
	cout << "\n" << cryptMessage1 << endl;
	cryptMessage1 = "";
}

void startAsk() { //for the beginning question
	cryptChar1 = 0;
	cout << "\nType 'e' to encrypt a string of text, 'd' to decrypt one, and 'c' to return to Veebo" << endl;
	getline(cin, decOrEnc);

	if (decOrEnc == "e") {

		encrypt();
		decOrEnc = "N/A";

	}
	else if (decOrEnc == "d") {

		decrypt();
		decOrEnc = "N/A";

	}
	else if  (decOrEnc != "e" && decOrEnc != "c" && decOrEnc != "d" && decOrEnc != "N/A") {

		cout << "\nError in text" << endl;
		decOrEnc = "N/A";
		startAsk(); //to repeate again

	}
}

void cryption() {
	cout << "Welcome to Cryption 2.3: Virtual Edition" << endl;
	cout << "To create a cryption key type 'create', otherwise paste the code below" << endl;
	cout << "If you don't know what a cryption key is type 'help'" << endl;
	key1 = "help";
	while (key1 == "help") {
		getline(cin, key1);
		if (key1 == "help") {

			cout << "A cryption key is used to determine how your text is encrypted" << endl
				<< "This is to ensure that your text is encrypted and decrypted securely" << endl
				<< "Only people who have access to the key can decrypt your messages" << endl
				<< "The key is used throughout the entire program, so you won't" << endl
				<< "have to paste it every time you encrypt/decrypt something" << endl
				<< "The cryption key usually takes a couple of minutes to generate" << endl
				<< "There are 5,360 possible cryption key combinations." << endl
				<< "If you are creating the key type 'create'" << endl
				<< "Otherwise paste a pre-created code" << endl;

		}
		else if (key1 == "create") {

			cout << "Creating key... (usually takes a couple of minutes)" << endl;
			key1 = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ .?!,0123456789";
			do while (keyChar1 != 67) { //while its not on *
				srand(time(0)); // This will ensure a really randomized number by help of time.
				cryptChar1 = rand() % 79 + 1; //rand char
				if (cryrptable1[cryptChar1] == '_') { //will read _ if char is already used

				}
				else if (cryrptable1[cryptChar1] != '_') {
					key1[keyChar1] = cryrptable1[cryptChar1]; //transfer encrypted char
					cryrptable1[cryptChar1] = '_'; //will put _ if char is already used
					keyChar1++; //goes to next char for key
					cout << "."; //to show progress
				}
			} while (keyChar1 != 67);

			cout << "\n" << key1;
			cout << "\nKey has been copied to clipboard (please share it now)" << endl;
			cout << "Click enter to continue" << endl;
			size_t len = strlen(key1.c_str());
			// get desktop windows and the call toClipboard
			HWND hwnd = GetDesktopWindow();
			toClipboard(hwnd, key1);
			cin.clear();
			cin.ignore(255, '\n');
		}
	}

	while (decOrEnc != "c") {

		startAsk(); //yes goes back to encrypt

	}
	cout << "Type 'credits' for credits, otherwise click enter to return to Veebo" << endl;
	getline(cin, decOrEnc);
	while (decOrEnc == "credits") {
		cout << "Service developed in Cpp and designed for Windows" << endl <<
			"Code created by iPoogleDuck (Oliver)" << endl << "Original encryption key by Sleeperpad32" << endl <<
			"Cryption 2.0 introduces a randomized cryption key to improve security" << endl;
		getline(cin, decOrEnc);
		decOrEnc = "";
	}

}



//GIGGLES WORKSPACE
void giggles() {

}