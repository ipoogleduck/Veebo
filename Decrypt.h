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

using namespace std;

void decryptionbone() {
	key = "";
	cryptChar = 0;
	ifstream readeree("bone.txt");
	if (!readeree) {
		cout << "Error opening bone.txt";
	}
	else {

		for (int i = 0; !readeree.eof(); i++) {
			readeree.get(letter);
			key += letter;
		}
		readeree.close();
	}
	key.pop_back();
	while (cryptMessage[cryptChar] != '*') {
		keyChar = 0;
		while (uncyrptable[keyChar] != '_') {
			if (cryptMessage[cryptChar] == key[keyChar]) { // also for caps
				cryptMessage[cryptChar] = uncyrptable[keyChar];
				keyChar = 67;
			}
			keyChar++;

		}
		cryptChar++;
	}
	cryptMessage.pop_back();
}
void decryptionbtwo() {
	cryptChar = 0;
	key = "";
	ifstream readere("btwo.txt");
	if (!readere) {
		cout << "Error opening name.txt";
	}
	else {

		for (int i = 0; !readere.eof(); i++) {
			readere.get(letter);
			key += letter;
		}
		readere.close();
	}
	key.pop_back();
	while (cryptMessage[cryptChar] != '*') {
		keyChar = 0;
		while (uncyrptable[keyChar] != '_') {
			if (cryptMessage[cryptChar] == key[keyChar]) { // also for caps
				cryptMessage[cryptChar] = uncyrptable[keyChar];
				keyChar = 67;
			}
			keyChar++;

		}
		cryptChar++;
	}
	cryptMessage.pop_back();
}