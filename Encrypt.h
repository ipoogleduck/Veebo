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
void encryptionbone() {
	key = "";
	ifstream readere("bone.txt");
	if (!readere) {
	}
	else {

		for (int i = 0; !readere.eof(); i++) {
			readere.get(letter);
			key += letter;
		}
		readere.close();
	}
	key.pop_back();
	passcheckfile += "*";
	while (cryptMessage[cryptChar] != '*') {
		keyChar = 0;
		while (uncyrptable[keyChar] != '_') {
			if (uncyrptable[keyChar] == '*') { // also for caps
			}
			if (cryptMessage[cryptChar] == uncyrptable[keyChar]) { // also for caps
				cryptMessage[cryptChar] = key[keyChar];
				keyChar = 67;
			}
			keyChar++;

		}
		cryptChar++;
	}

}
void encryptionbtwo() {
	key = "";
	ifstream readerer("btwo.txt");
	if (!readerer) {
	}
	else {

		for (int i = 0; !readerer.eof(); i++) {
			readerer.get(letter);
			key += letter;
		}
		readerer.close();
	}
	key.pop_back();
	passcheckfile += "*";
	while (cryptMessage[cryptChar] != '*') {
		keyChar = 0;
		while (uncyrptable[keyChar] != '_') {
			if (uncyrptable[keyChar] == '*') { // also for caps

			}
			if (cryptMessage[cryptChar] == uncyrptable[keyChar]) { // also for caps
				cryptMessage[cryptChar] = key[keyChar];
				keyChar = 67;
			}
			keyChar++;

		}
		cryptChar++;
	}

}