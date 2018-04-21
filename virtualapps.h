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
	decOrEnc = "";
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
}



//GIGGLES WORKSPACE

string start;

string loading;
int loadingnumber = 1;
char centplace = '^';
string isgigglesopen;

string howOften;
string vFects;
string outofloop;

string openmass;
int numberofopens;

void giggles() {
	//Checking if VirtualApp is installed
	ifstream readerallofgiggles1("C:/Giggles/install.bat");
	if (!readerallofgiggles1) {
		ofstream writer21vapp("C:/Veebo/vappdown.txt");
		if (!writer21vapp) {
			cout << "Error opening file..." << endl;
		}
		else {
			writer21vapp << "_" << endl;
			writer21vapp.close();
		}
		cout << "Downloading";
		CString str = "C:/Veebo/OTAnew/OpenSetupGiggles.vbs";
		CString action = "open";
		ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
		letter = '_';
		updateabort = 0;
		while (letter == '_' && updateabort < 50 || letter == ' ' && updateabort < 50) {
			updateabort++;
			tempString = "";
			ifstream reader21vapp("C:/Veebo/vappdown.txt");
			if (!reader21vapp) {
			}
			else {
				reader21vapp.get(letter);
				tempString += letter;
				letter2++;
			}
			reader21vapp.close();
			Sleep(500);
			cout << ".";
		}
		if (updateabort == 50 || updateabort == 51) {
			cout << "\nThere was an error while downloading Giggles. Please close Veebo and try again." << endl;
			cin.ignore();
		}
			//loop
			cout << "\nInstalling";
			letter = '_';
			updateabort = 0;
			installdone = "";
			while (installdone != "G" && updateabort < 50) {
				ifstream reader21vapp2("C:/Giggles/install.bat");
				if (!reader21vapp2) {
				}
				else {
					installdone = "G";
				}
				reader21vapp2.close();
				Sleep(80);
				cout << ".";
				updateabort++;
				tempString = "";
			}
			//loop
			cout << endl;
			if (updateabort == 50 || updateabort == 51) {
				cout << "\nThere was an error while installing Giggles. Check that you are the admin, close Veebo, and try again." << endl;
				cin.ignore();
			}
	}
	readerallofgiggles1.close();

	ifstream readerG("C:/Giggles/Giggles.exe");
	if (!readerG) {
		//If Giggles.exe is NotGiggles.exe
		cout << "Activating Giggles..." << endl;
		CString str = "C:/Veebo/OTAnew/OpenChangeToG.vbs";
		CString action = "open";
		ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
		Sleep(1500);
	}
	readerG.close();
	system("CLS");
	//Check if giggles is already open, if not it will open it
	centplace = '^';
	loadingnumber = 1;
	start = "";
	ofstream isgigglesopenwriter("C:/Giggles/isgigglesopen.txt");
	if (!isgigglesopenwriter) {
		cout << "Error opening file..." << endl;
	}
	else {
		isgigglesopenwriter << "  ";
		isgigglesopenwriter.close();
	}
	loading = "{----------------------------}";
	for (int n = 0; n < 29; n++) {
		cout << "Checking if Giggles is opened" << endl;
		cout << loading;
		loading[loadingnumber] = centplace;
		loadingnumber++;
		Sleep(50);
		system("CLS");
	}
	ifstream isgigglesopenreader("C:/Giggles/isgigglesopen.txt");
	if (!isgigglesopenreader) {
	}
	else {
		isgigglesopen = "";
		for (int i = 0; !isgigglesopenreader.eof(); i++) {
			isgigglesopenreader.get(letter);
			isgigglesopen += letter;
		}
		isgigglesopenreader.close();
		isgigglesopen.pop_back();
	}
	if (isgigglesopen == "  ") {
		CString str = "C:/Giggles/GigglesStart.vbs";
		CString action = "open";
		ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
		cout << "Giggles has been opened in the background" << endl;
	}
	else if (isgigglesopen == "Yes") {
		cout << "Giggles is already opened in the background" << endl;
	}

	cout << "Hi, welcome to Giggles Settings Virtual Edition" << endl;
	cout << "Type 'start' to start Giggles, 'stop' to stop it, or 'settings' to adjust the settings" << endl;
	ifstream readervginstall("C:/Giggles/GigglesIcon.ico");
	if (!readervginstall) {
		cout << "Type 'deactivate' to deactivate opening Giggles on startup or 'install' to install giggles as a separate app" << endl;
	}
	readervginstall.close();
	cout << "You can return to Veebo by typing 'exit'" << endl << endl;
	while (start != "exit" && start != "Exit") {
		getline(cin, start);
		if (start == "start" || start == "Start") {
			ofstream isgigglesopenwriter4("C:/Giggles/isgigglesopen.txt");
			if (!isgigglesopenwriter4) {
				cout << "Error opening file..." << endl;
			}
			else {
				isgigglesopenwriter4 << "  ";
				isgigglesopenwriter4.close();
			}
			cout << "Checking if Giggles is opened" << endl;
			for (int n = 0; n < 29; n++) {
				cout << ".";
				Sleep(60);
			}
			ifstream isgigglesopenreader3("C:/Giggles/isgigglesopen.txt");
			if (!isgigglesopenreader3) {
				cout << "Error" << endl;
			}
			else {
				isgigglesopen = "";
				for (int i = 0; !isgigglesopenreader3.eof(); i++) {
					isgigglesopenreader3.get(letter);
					isgigglesopen += letter;
				}
				isgigglesopenreader3.close();
				isgigglesopen.pop_back();
			}
			if (isgigglesopen == "  ") {
				CString str = "C:/Giggles/GigglesStart.vbs";
				CString action = "open";
				ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
				cout << "\nGiggles has been opened in the background" << endl;
			}
			else if (isgigglesopen == "Yes") {
				outofloop = "";
				cout << "\nGiggles is already opened in the background" << endl;
				while (outofloop != "Yes") {
					cout << "You can choose to mass open Giggles windows. Would you like to continue?" << endl;
					getline(cin, openmass);
					if (openmass == "Yes" || openmass == "yes" || openmass == "Sure") {
						cout << "How many Giggles windows would you like to open?" << endl;
						cout << "You can choose a number between 1 and 1000" << endl;
						cin >> numberofopens;
						cin.ignore();
						if (numberofopens > 0 && numberofopens < 101) {
							cout << "Opening..." << endl;
							for (int n = 0; n < numberofopens; n++) {
								CString str = "C:/Giggles/GigglesStart.vbs";
								CString action = "open";
								ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
							}
							outofloop = "Yes";
							cout << "Files have been opened in background" << endl;
						}
						else if (numberofopens > 100 && numberofopens < 10001) {
							cout << "Anything over 100 is not recommended. Do you want to continue?" << endl;
							getline(cin, openmass);
							if (openmass == "Yes" || openmass == "yes" || openmass == "Sure") {
								cout << "Opening..." << endl;
								for (int n = 0; n < numberofopens; n++) {
									CString str = "C:/Giggles/GigglesStart.vbs";
									CString action = "open";
									ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
								}
								outofloop = "Yes";
								cout << "Files have been opened in background" << endl;
							}
							else {
								cout << "Okay, you can choose another number if you want" << endl;
							}
						}
						else {
							cout << "Invalid option" << endl;
							outofloop = "";
						}
					}
					else if (openmass == "No" || openmass == "no" || openmass == "Nah" || openmass == "nah") {
						outofloop = "Yes";
						cout << "Okay" << endl;
					}
					else {
						cout << "Try again and select a valid option (Yes/No)" << endl;
					}
				}
			}
			else {
				cout << "Error" << endl;
			}
		}
		else if (start == "Deactivate" || start == "deactivate") {
			ifstream readervginstall1("C:/Giggles/GigglesIcon.ico");
			if (!readervginstall1) {
				ofstream closegiggleswriter("C:/Giggles/closegiggles.txt");
				if (!closegiggleswriter) {
					cout << "Error opening file..." << endl;
				}
				else {
					closegiggleswriter << "Close";
					closegiggleswriter.close();
				}
				cout << "Deactivating and closing giggles... If you open Giggles from Veebo again it will automatically reactivate" << endl;
				Sleep(3000);
				CString str = "C:/Veebo/OTAnew/OpenChangeToNG.vbs";
				CString action = "open";
				ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
				start = "exit";
			}
			else {
				cout << "Deactivation is not permitted on the full version of Giggles, you must uninstall it separately" << endl;
				cout << "Try again and select a valid option from above" << endl;
			}

			readervginstall1.close();
		}
		else if (start == "Install" || start == "install") {
			ifstream readervginstall2("C:/Giggles/GigglesIcon.ico");
			if (!readervginstall2) {
				ofstream writer21vapp("C:/Veebo/vappdown.txt");
				if (!writer21vapp) {
					cout << "Error opening file..." << endl;
				}
				else {
					writer21vapp << "_" << endl;
					writer21vapp.close();
				}
				cout << "Downloading";
				CString str = "C:/Veebo/OTAnew/OpenSetupGiggles.vbs";
				CString action = "open";
				ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
				letter = '_';
				updateabort = 0;
				while (letter == '_' && updateabort < 50 || letter == ' ' && updateabort < 50) {
					updateabort++;
					tempString = "";
					ifstream reader21vapp("C:/Veebo/vappdown.txt");
					if (!reader21vapp) {
					}
					else {
						reader21vapp.get(letter);
						tempString += letter;
						letter2++;
					}
					reader21vapp.close();
					Sleep(500);
					cout << ".";
				}
				if (updateabort == 50 || updateabort == 51) {
					cout << "\nThere was an error while downloading Giggles. Please close Veebo and try again." << endl;
					cin.ignore();
				}
				//loop
				letter = '_';
				updateabort = 0;
				installdone = "";
				cout << "\nWaiting for user interaction..." << endl;
				CString str1 = "C:/Veebo/giggles_setup.msi";
				CString action1 = "open";
				ShellExecute(NULL, action1, str1, NULL, NULL, SW_SHOW);
				while (installdone != "G") {
					ifstream reader21vapp2("C:/Giggles/GigglesIcon.ico");
					if (!reader21vapp2) {
					}
					else {
						installdone = "G";
					}
					reader21vapp2.close();
					Sleep(500);
					tempString = "";
				}
				//loop
				cout << "Installation is complete" << endl;
			}
			else {
				cout << "Giggles is already installed as a separate app" << endl;
				cout << "Try again and select a valid option from above" << endl;
			}
			readervginstall2.close();
		}
		else if (start == "stop" || start == "Stop") {
			ofstream closegiggleswriter("C:/Giggles/closegiggles.txt");
			if (!closegiggleswriter) {
				cout << "Error opening file..." << endl;
			}
			else {
				closegiggleswriter << "Close";
				closegiggleswriter.close();
			}

			cout << "Success, Giggles is closed" << endl;
		}
		else if (start == "update" || start == "Update") {
			cout << "Updating is not available via Giggles Virtual Edition" << endl << "Install the full version of the app and open the shortcut on your desktop" << endl;
		}
		else if (start == "Settings" || start == "settings") {
			outofloop = "";
			while (outofloop != "Yes") {
				cout << "How frequent do you want giggles to occur?" << endl;
				cout << "1. Very Often [Once every 33 seconds]" << endl;
				cout << "2. Often [Once every 5.5 minutes]" << endl;
				cout << "3. Every once in a while (default) [Once every 55 minutes]" << endl;
				cout << "4. Pretty rare [Once every 9.2 hours]" << endl;
				cout << "5. Very rare (Almost never) [Once every 4 days]" << endl;
				getline(cin, howOften);
				if (howOften == "1" || howOften == "2" || howOften == "3" || howOften == "4" || howOften == "5") {
					ofstream howOftenwriter("C:/Giggles/howoften.txt");
					if (!howOftenwriter) {
						cout << "Error opening file..." << endl;
					}
					else {
						howOftenwriter << howOften;
					}
					howOftenwriter.close();
					outofloop = "Yes";
				}
				else {
					cout << "Try again and select a valid option" << endl;
				}
			}
			outofloop = "";
			while (outofloop != "Yes") {
				cout << "Do you want to enable visual effects? (Default no)" << endl;
				getline(cin, vFects);
				if (vFects == "Yes" || vFects == "yes" || vFects == "Sure") {
					vFects = "Yes";
					outofloop = "Yes";
				}
				else if (vFects == "No" || vFects == "no" || vFects == "Nah" || vFects == "nah") {
					vFects = "No";
					outofloop = "Yes";
				}
				else {
					cout << "Try again and select a valid option (Yes/No)" << endl;
				}
			}
			ofstream vfxwriter("C:/Giggles/vfx.txt");
			if (!vfxwriter) {
				cout << "Error opening file..." << endl;
			}
			else {
				vfxwriter << vFects;
			}
			vfxwriter.close();
			cout << "Settings have been saved and taken effect" << endl;
		}
		else if (start == "exit" || start == "Exit") {
		
		}
		else {
			cout << "Try again and select a valid option from above" << endl;
		}
	}
}