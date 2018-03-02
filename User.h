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

void t2() {
	cout << "\nI'm going to create two keys to keep your account more secure..." << endl << "This may take up to three minutes..." << endl;
	CString str = "C:/Veebo/OTAnew/Keycreate.vbs";
	CString action = "open";
	ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
	cryptChar = 0;
	keyChar = 0;
	cryptable = "qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnNmM1234567890#:><(){}[]-?!@^&=+";
	uncyrptable = "ravLNcED!Yhe5ZQq2Sb?U lBRGCdgA7mn8413tpjuKFMJHzxoPX,W6wfOVI.Ty0iks9*_";
	key = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ .?!,0123456789";
	while (keyChar != 67) { //while its not on *
		srand(time(0)); // This will ensure a really randomized number by help of time.
		cryptChar = rand() % 79 + 1; //rand char
		if (cryptable[cryptChar] == '_') { //will read _ if char is already used

		}
		else if (cryptable[cryptChar] != '_') {
			key[keyChar] = cryptable[cryptChar]; //transfer encrypted char
			cryptable[cryptChar] = '_'; //will put _ if char is already used
			keyChar++; //goes to next char for key
			cout << "."; //to show progress
		}
	}
	ofstream writer27("bone.txt");
	writer27 << key << endl;
	writer27.close();

	cryptable = "qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnNmM1234567890#:><(){}[]-?!@^&=+";
	uncyrptable = "ravLNcED!Yhe5ZQq2Sb?U lBRGCdgA7mn8413tpjuKFMJHzxoPX,W6wfOVI.Ty0iks9*_";
	keyChar = 0; //for kepping track of char in code
	cryptChar = 0;
	cout << "\nCreating 2nd Key..." << endl;
	str = "C:/Veebo/OTAnew/Keycreate2.vbs";
	action = "open";
	ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
	key = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ .?!,0123456789";
	while (keyChar != 67) { //while its not on *
		srand(time(0)); // This will ensure a really randomized number by help of time.
		cryptChar = rand() % 79 + 1; //rand char
		if (cryptable[cryptChar] == '_') { //will read _ if char is already used

		}
		else if (cryptable[cryptChar] != '_') {
			key[keyChar] = cryptable[cryptChar]; //transfer encrypted char
			cryptable[cryptChar] = '_'; //will put _ if char is already used
			keyChar++; //goes to next char for key
			cout << "."; //to show progress
		}
	}
	ofstream writer28("btwo.txt");
	writer28 << key << endl;
	writer28.close();
	system("CLS");
}
void createUser() { //Sets up info
	ofstream writer2(currentY);
	if (!writer2) {
		cout << "Error 2343 opening file" << endl;
	}
	else {
		writer2 << "Y" << endl;
		writer2.close();
	}
	cout << "What's your name?" << endl; //gets name
	getline(cin, name);
	ofstream writer(currentN);
	if (!writer) {
		cout << "Error 6543 opening file..." << endl;
	}
	else {
		writer << name << endl;
		writer.close();
		cout << "What theme do you prefer: White/Black" << endl;
		getline(cin, IDE);
		if (IDE == "White" || IDE == "white" || IDE == "W" || IDE == "w") {
			system("color F0");
			cout << "Okay, you can change this later by typing 'change theme'" << endl;
			IDE = "W";
			ofstream writer30(currentT);
			if (!writer30) {
				cout << "Error 7294 opening file..." << endl;
			}
			else {
				writer30 << IDE << endl;
				writer30.close();
			}
		}
		else if (IDE == "Black" || IDE == "black" || IDE == "B" || IDE == "b") {
			system("color 0F");
			cout << "Okay, you can cange this later by typing 'change theme'" << endl;
			IDE = "B";
			ofstream writer31(currentT);
			if (!writer31) {
				cout << "Error opening file..." << endl;
			}
			else {
				writer31 << IDE << endl;
				writer31.close();
			}
		}
		else {
			cout << "Invalid entry, you can change this later by typing 'change theme'" << endl;
		}
	}
	/*
	ofstream writer2("info.txt", ios::app);
	//Open a stream to add to whats there with ios::app
	//treat a file as binary with ios::binary
	//read input of a file ios::in
	//default ios::trunc
	//Open a file to write output ios::out
	*/
	cout << "Do you want to password protect your account?" << endl;
	getline(cin, currentType);
	ofstream writerPass(nastpass);
	ofstream writerlog(logdid);
	if (currentType == "Yes" || currentType == "yes" || currentType == "Y" || currentType == "y") {
		//create and encrypt password
		cout << "Would you like me to" << endl << "1. Ask for your password whenever you open Veebo or" << endl << "2. Just after you log out or switch accounts" << endl;
		getline(cin, diditlog);
		if (diditlog == "1" || diditlog == "1." || diditlog == "ask" || diditlog == "Ask") {
			writerlog << "Y";
		}
		else {
			writerlog << "";
		}
		confirmpass = "____";
		while (passtype != confirmpass) { //check that the user knows password
			cout << "Please type the password you would like to use" << endl;
			getline(cin, passtype);
			cout << "Retype password" << endl;
			getline(cin, confirmpass);
			if (passtype == confirmpass) {
				if (startfromclean != "YES") {
					cryptMessage = passtype;
					encryptionbone();               ////
					passtype = cryptMessage;
					writerPass << passtype;
					cryptMessage = passtype;
					decryptionbone();               ////
					passtype = cryptMessage;
				}
				else {

				}
			}
			else {
				cout << "Passwords don't match, please try again" << endl;
			}
		}
		system("CLS");
	}
	else {
		system("CLS");
		cout << "When you log back in after loging out use your name as your password" << endl;
		cout << "You can change this at a later time by typing 'add password'" << endl;
		cryptMessage = name;
		if (startfromclean != "YES") {
			encryptionbone();               ////
			name = cryptMessage;
			writerPass << name;
		}
		writerlog << "";
	}
	//add crypter to crypt pass
	writerPass.close();
	writerlog.close();
	cout << "When you want to log out, type 'logout'" << endl;
	compOutputLine2 = "";
	compOutputLine3 = "";
	if (startfromclean != "YES") {
		ofstream writetgg("lastpass.txt"); //I gave up on good names for writer and reader
		diditlog = "";
		if (account == "1") {
			ifstream use1222reader(logdid1);
			if (!use1222reader) {

			}
			else {
				for (int i = 0; !use1222reader.eof(); i++) {
					use1222reader.get(letter);
					diditlog += letter;
				}
				use1222reader.close();
				diditlog.pop_back();
			}
			ifstream nnmmnmm(nastpass1);
			if (!nnmmnmm) {

			}
			else {
				passcheckfile = "";
				for (int i = 0; !nnmmnmm.eof(); i++) {
					nnmmnmm.get(letter);
					passcheckfile += letter;
				}
				nnmmnmm.close();
				passcheckfile.pop_back();
			}
			writetgg << passcheckfile;
		}

		else if (account == "2") {
			ifstream use1222reader(logdid2);
			if (!use1222reader) {

			}
			else {
				for (int i = 0; !use1222reader.eof(); i++) {
					use1222reader.get(letter);
					diditlog += letter;
				}
				use1222reader.close();
				diditlog.pop_back();
			}
			ifstream nnmmnmm(nastpass2);
			if (!nnmmnmm) {

			}
			else {
				passcheckfile = "";
				for (int i = 0; !nnmmnmm.eof(); i++) {
					nnmmnmm.get(letter);
					passcheckfile += letter;
				}
				nnmmnmm.close();
				passcheckfile.pop_back();
			}
			writetgg << passcheckfile;
		}

		else if (account == "3") {
			ifstream use1222reader(logdid3);
			if (!use1222reader) {

			}
			else {
				for (int i = 0; !use1222reader.eof(); i++) {
					use1222reader.get(letter);
					diditlog += letter;
				}
				use1222reader.close();
				diditlog.pop_back();
			}
			ifstream nnmmnmm(nastpass3);
			if (!nnmmnmm) {

			}
			else {
				passcheckfile = "";
				for (int i = 0; !nnmmnmm.eof(); i++) {
					nnmmnmm.get(letter);
					passcheckfile += letter;
				}
				nnmmnmm.close();
				passcheckfile.pop_back();
			}
			writetgg << passcheckfile;
		}
		else if (account == "4") {
			ifstream use1222reader(logdid4);
			if (!use1222reader) {

			}
			else {
				for (int i = 0; !use1222reader.eof(); i++) {
					use1222reader.get(letter);
					diditlog += letter;
				}
				use1222reader.close();
				diditlog.pop_back();
			}
			ifstream nnmmnmm(nastpass4);
			if (!nnmmnmm) {

			}
			else {
				passcheckfile = "";
				for (int i = 0; !nnmmnmm.eof(); i++) {
					nnmmnmm.get(letter);
					passcheckfile += letter;
				}
				nnmmnmm.close();
				passcheckfile.pop_back();
			}
			writetgg << passcheckfile;
		}
		writetgg.close();
	}
	Sleep(1000);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";
}

void addUser() { //Checks users
	dointro = "";
	letter = 'h';
	ifstream user1reader(yorn1);
	if (!user1reader) {
		currentY = yorn1;
		currentN = name1;
		currentB = betasurvey1;
		currentT = theme1;
		nastpass = nastpass1;
		logdid = logdid1;
		account = "1";
		createUser();
	}
	else {
		letter = 'h';
		user1reader.get(letter);
		user1reader.close();
		
		if (letter == 'Y') {
			ifstream user2reader(yorn2);
			if (!user2reader) {
				currentY = yorn2;
				currentN = name2;
				currentB = betasurvey2;
				currentT = theme2;
				nastpass = nastpass2;
				logdid = logdid2;
				createUser();
			}
			else {
				letter = 'h';
				user2reader.get(letter);
				user2reader.close();
				if (letter == 'Y') {
					ifstream user3reader(yorn3);
					if (!user3reader) {
						currentY = yorn3;
						currentN = name3;
						currentB = betasurvey3;
						currentT = theme3;
						nastpass = nastpass3;
						logdid = logdid3;
						createUser();
					}
					else {
						letter = 'h';
						user3reader.get(letter);
						user3reader.close();
						if (letter == 'Y') {
							ifstream user4reader(yorn4);
							if (!user4reader) {
								currentY = yorn4;
								currentN = name4;
								currentB = betasurvey4;
								currentT = theme4;
								nastpass = nastpass4;
								logdid = logdid4;
								createUser();
							}
							else {
								letter = 'h';
								user4reader.get(letter);
								user4reader.close();
								if (letter == 'Y') {
									cout << "There are no user slots available, please make space by typing 'delete user'" << endl;
									dointro = "MnM";
								}
								else {
									currentY = yorn4;
									currentN = name4;
									currentB = betasurvey4;
									currentT = theme4;
									nastpass = nastpass4;
									logdid = logdid4;
									createUser();
								}
							}
						}
						else {
							currentY = yorn3;
							currentN = name3;
							currentB = betasurvey3;
							currentT = theme3;
							nastpass = nastpass3;
							logdid = logdid3;
							createUser();
						}
					}
					}
				else {
					currentY = yorn2;
					currentN = name2;
					currentB = betasurvey2;
					currentT = theme2;
					nastpass = nastpass2;
					logdid = logdid2;
					createUser();
				}
			}
			}
		else {
			currentY = yorn1;
			currentN = name1;
			currentB = betasurvey1;
			currentT = theme1;
			nastpass = nastpass1;
			logdid = logdid1;
			createUser();
		}
	}
	
}
void switchUser() {
	if (gogo != "hhy") {
		void logout();
	}
	system("color F0");
	cout << "Log in with your password or type 'GUEST' If you don't have a password use your account name..." << endl;
	getline(cin, passtype);
	system("CLS");
	if (passtype == "GUEST" || passtype == "Guest" || passtype == "guest") {
		account = "GUEST";
		currentY = "";
		currentN = "";
		currentB = "";
		currentT = "";
		nastpass = "";
		logdid = "";
		name = "";
		cout << "You are logged in as a guest. No data will be saved. Type 'log out' to log out" << endl;
	}
	else {
		passcheckfile = "";
		ifstream ser1reader(nastpass1);
		if (!ser1reader) {
		}
		else {
			for (int i = 0; !ser1reader.eof(); i++) {
				ser1reader.get(letter);
				passcheckfile += letter;
			}
			ser1reader.close();
			passcheckfile.pop_back();
			cryptMessage = passcheckfile;
			decryptionbone();               ////
			passcheckfile = cryptMessage;
		}
		if (passcheckfile != passtype) {
			ifstream use2reader(nastpass2);
			if (!use2reader) {

			}
			else {
				passcheckfile = "";
				for (int i = 0; !use2reader.eof(); i++) {
					use2reader.get(letter);
					passcheckfile += letter;
				}
				use2reader.close();
				passcheckfile.pop_back();
				cryptMessage = passcheckfile;
				decryptionbone();               ////
				passcheckfile = cryptMessage;
			}
			if (passcheckfile != passtype) {
				ifstream use3reader(nastpass3);
				if (!use3reader) {

				}
				else {
					passcheckfile = "";
					for (int i = 0; !use3reader.eof(); i++) {
						use3reader.get(letter);
						passcheckfile += letter;
					}
					use3reader.close();
					passcheckfile.pop_back();
					cryptMessage = passcheckfile;
					decryptionbone();               ////
					passcheckfile = cryptMessage;
				}
				if (passcheckfile != passtype) {
					ifstream use4reader(nastpass4);
					if (!use4reader) {

					}
					else {
						passcheckfile = "";
						for (int i = 0; !use4reader.eof(); i++) {
							use4reader.get(letter);
							passcheckfile += letter;
						}
						use4reader.close();
						passcheckfile.pop_back();
						cryptMessage = passcheckfile;
						decryptionbone();               ////
						passcheckfile = cryptMessage;
					}
					if (passcheckfile != passtype) {
						cout << "The password is incorrect" << endl;
						gogo = "hhy";
						switchUser();
					}
					else {
						if (tempString != "Y") {
							currentY = yorn4;
							currentN = name4;
							currentB = betasurvey4;
							currentT = theme4;
							nastpass = nastpass4;
							logdid = logdid4;
							account = "4";
						}
						else {
							cout << "The password is incorrect" << endl;
							gogo = "hhy";
							switchUser();
						}
					}
				}
				else {
					if (tempString != "Y") {
						currentY = yorn3;
						currentN = name3;
						currentB = betasurvey3;
						currentT = theme3;
						nastpass = nastpass3;
						logdid = logdid3;
						account = "3";
					}
					else {
						cout << "The password is incorrect" << endl;
						gogo = "hhy";
						switchUser();
					}
				}
			}
			else {
				if (tempString != "Y") {
					currentY = yorn2;
					currentN = name2;
					currentB = betasurvey2;
					currentT = theme2;
					nastpass = nastpass2;
					logdid = logdid2;
					account = "2";
				}
				else {
					cout << "The password is incorrect" << endl;
					gogo = "hhy";
					switchUser();
				}
			}
		}
		else {
			if (tempString != "Y") {
				currentY = yorn1;
				currentN = name1;
				currentB = betasurvey1;
				currentT = theme1;
				nastpass = nastpass1;
				logdid = logdid1;
				account = "1";
			}
			else {
				cout << "The password is incorrect" << endl;
				gogo = "hhy";
				switchUser();

			}
		}
		ofstream writetgg("lastpass.txt"); //I gave up on good names for writer and reader
		diditlog = "";
		if (account == "1") {
			ifstream use1222reader(logdid1);
			if (!use1222reader) {

			}
			else {
				for (int i = 0; !use1222reader.eof(); i++) {
					use1222reader.get(letter);
					diditlog += letter;
				}
				use1222reader.close();
				diditlog.pop_back();
			}
				ifstream nnmmnmm(nastpass1);
				if (!nnmmnmm) {

				}
				else {
					passcheckfile = "";
					for (int i = 0; !nnmmnmm.eof(); i++) {
						nnmmnmm.get(letter);
						passcheckfile += letter;
					}
					nnmmnmm.close();
					passcheckfile.pop_back();
					cryptMessage = passcheckfile;
					decryptionbone();               ////
					passcheckfile = cryptMessage;
				}
				cryptMessage = passcheckfile; //
				encryptionbtwo(); //
				passcheckfile = cryptMessage; //
				writetgg << passcheckfile;
			}

		else if (account == "2") {
			ifstream use1222reader(logdid2);
			if (!use1222reader) {

			}
			else {
				for (int i = 0; !use1222reader.eof(); i++) {
					use1222reader.get(letter);
					diditlog += letter;
				}
				use1222reader.close();
				diditlog.pop_back();
				}
				ifstream nnmmnmm(nastpass2);
				if (!nnmmnmm) {

				}
				else {
					passcheckfile = "";
					for (int i = 0; !nnmmnmm.eof(); i++) {
						nnmmnmm.get(letter);
						passcheckfile += letter;
					}
					nnmmnmm.close();
					passcheckfile.pop_back();
					cryptMessage = passcheckfile;
					decryptionbone();               ////
					passcheckfile = cryptMessage;
				}
				cryptMessage = passcheckfile; //
				encryptionbtwo(); //
				passcheckfile = cryptMessage; //
			writetgg << passcheckfile;
		}

		else if (account == "3") {
			ifstream use1222reader(logdid3);
			if (!use1222reader) {

			}
			else {
				for (int i = 0; !use1222reader.eof(); i++) {
					use1222reader.get(letter);
					diditlog += letter;
				}
				use1222reader.close();
				diditlog.pop_back();
			}
				ifstream nnmmnmm(nastpass3);
				if (!nnmmnmm) {

				}
				else {
					passcheckfile = "";
					for (int i = 0; !nnmmnmm.eof(); i++) {
						nnmmnmm.get(letter);
						passcheckfile += letter;
					}
					nnmmnmm.close();
					passcheckfile.pop_back();
					cryptMessage = passcheckfile;
					decryptionbone();               ////
					passcheckfile = cryptMessage;
				}
				cryptMessage = passcheckfile; //
				encryptionbtwo(); //
				passcheckfile = cryptMessage; //
				writetgg << passcheckfile;
		}
		else if (account == "4") {
			ifstream use1222reader(logdid4);
			if (!use1222reader) {

			}
			else {
				for (int i = 0; !use1222reader.eof(); i++) {
					use1222reader.get(letter);
					diditlog += letter;
				}
				use1222reader.close();
				diditlog.pop_back();
			}
				ifstream nnmmnmm(nastpass4);
				if (!nnmmnmm) {

				}
				else {
					passcheckfile = "";
					for (int i = 0; !nnmmnmm.eof(); i++) {
						nnmmnmm.get(letter);
						passcheckfile += letter;
					}
					nnmmnmm.close();
					passcheckfile.pop_back();
					cryptMessage = passcheckfile;
					decryptionbone();               ////
					passcheckfile = cryptMessage;
				}
				cryptMessage = passcheckfile; //
				encryptionbtwo(); //
				passcheckfile = cryptMessage; //
				writetgg << passcheckfile;
			}
		writetgg.close();
	}
	if (ruffruff != "iii") {
		ruffruff = "iii";
		name = "";
		ifstream reader2(currentY);
		reader2.get(letter);
		if (letter == 'Y') {
			cout << "Hi ";
			ifstream reader(currentN);
			if (!reader) {
				cout << "Error opening name.txt";

			}
			else {

				for (int i = 0; !reader.eof(); i++) {
					reader.get(letter);
					name += letter;
				}
				reader.close();
			}
			name.pop_back();
			name.pop_back();
			cout << name;
			cout << ", welcome to Veebo! Say hi, or ask me a question!" << endl;
			cout << "You can also type 'help' for a list of cool features currently available" << endl;
			ifstream readerbeta2("BetaProfile.txt");
			if (!readerbeta2) {
			}
			else {
				cout << "The Veebo Beta Software Program is active on your device" << endl;
			}
		}
		else {
			system("color F0");
			cout << "Hi Guest, welcome to Veebo!" << endl;
			cout << "As a guest, some features may not be availiable" << endl;
			ifstream readerbeta4("BetaProfile.txt");
			if (!readerbeta4) {
			}
			else {
				cout << "The Veebo Beta Software Program is active on your device" << endl;
			}
			account = "GUEST";
		}
		reader2.close();

		ifstream reader31(currentT);
		if (!reader31) {
			ofstream writer5444(currentT);
			writer5444.close();
		}
		IDE = "";
		reader31.get(letter);
		IDE += letter;
		reader31.close();
		if (IDE == "W") {
			system("color F0");
		}
		else if (account == "GUEST") {
			system("color F0");
		}
		else {
			system("color 0F");
		}
	}
}
void logout() {
	system("CLS");
	currentY = "";
	currentN = "";
	currentB = "";
	currentT = "";
	nastpass = "";
	logdid = "";
	account = "";
	ofstream writer544477("lastpass.txt");
	writer544477 << "";
	writer544477.close();
	switchUser();
}
void removeUser() {
	cout << "Type the password/name of the account you would like to remove" << endl;
	cout << "If you forgot your password, type 'forgot password'" << endl;
	getline(cin, passtype);
	passcheckfile = "";
	if (passtype == "forgot password" || passtype == "Forgot password" || passtype == "Forgot Password") {
		ShellExecute(0, 0, L"https://ipooglecodes.weebly.com/userfiledelete.html", 0, 0, SW_SHOW);
	}
	ifstream ser1reader(nastpass1);
	if (!ser1reader) {
	}
	else {
		for (int i = 0; !ser1reader.eof(); i++) {
			ser1reader.get(letter);
			passcheckfile += letter;
		}
		ser1reader.close();
		passcheckfile.pop_back();
		cryptMessage = passcheckfile;
		decryptionbone();               ////
		passcheckfile = cryptMessage;
	}
	if (passcheckfile != passtype) {
		ifstream use2reader(nastpass2);
		if (!use2reader) {

		}
		else {
			passcheckfile = "";
			for (int i = 0; !use2reader.eof(); i++) {
				use2reader.get(letter);
				passcheckfile += letter;
			}
			use2reader.close();
			passcheckfile.pop_back();
			cryptMessage = passcheckfile;
			decryptionbone();               ////
			passcheckfile = cryptMessage;
		}
		if (passcheckfile != passtype) {
			ifstream use3reader(nastpass3);
			if (!use3reader) {

			}
			else {
				passcheckfile = "";
				for (int i = 0; !use3reader.eof(); i++) {
					use3reader.get(letter);
					passcheckfile += letter;
				}
				use3reader.close();
				passcheckfile.pop_back();
				cryptMessage = passcheckfile;
				decryptionbone();               ////
				passcheckfile = cryptMessage;
			}
			if (passcheckfile != passtype) {
				ifstream use4reader(nastpass4);
				if (!use4reader) {

				}
				else {
					passcheckfile = "";
					for (int i = 0; !use4reader.eof(); i++) {
						use4reader.get(letter);
						passcheckfile += letter;
					}
					use4reader.close();
					passcheckfile.pop_back();
					cryptMessage = passcheckfile;
					decryptionbone();               ////
					passcheckfile = cryptMessage;
				}
				if (passcheckfile != passtype) {
					cout << "The password is incorrect" << endl;
					gogo = "hhy";
					didalready = "";
				}
				else {
					if (tempString != "Y") {
						currentY = yorn4;
						currentN = name4;
						currentB = betasurvey4;
						currentT = theme4;
						nastpass = nastpass4;
						logdid = logdid4;
						account = "4";
						didalready = "mnm";
					}
					else {
						cout << "The password is incorrect" << endl;
						gogo = "hhy";
						didalready = "";
					}
				}
			}
			else {
				if (tempString != "Y") {
					currentY = yorn3;
					currentN = name3;
					currentB = betasurvey3;
					currentT = theme3;
					nastpass = nastpass3;
					logdid = logdid3;
					account = "3";
					didalready = "mnm";
				}
				else {
					cout << "The password is incorrect" << endl;
					gogo = "hhy";
					didalready = "";
				}
			}
		}
		else {
			if (tempString != "Y") {
				currentY = yorn2;
				currentN = name2;
				currentB = betasurvey2;
				currentT = theme2;
				nastpass = nastpass2;
				logdid = logdid2;
				account = "2";
				didalready = "mnm";
			}
			else {
				cout << "The password is incorrect" << endl;
				gogo = "hhy";
				didalready = "";
			}
		}
	}
	else {
		if (tempString != "Y") {
			currentY = yorn1;
			currentN = name1;
			currentB = betasurvey1;
			currentT = theme1;
			nastpass = nastpass1;
			logdid = logdid1;
			account = "1";
			didalready = "mnm";
		}
		else {
			cout << "The password is incorrect" << endl;
			gogo = "hhy";
			didalready = "";

		}
	}
	if (didalready == "mnm") {
		ifstream reader0(currentN);
		name = "";
		if (!reader0) {
			cout << "Error opening name.txt";

		}
		else {
			for (int i = 0; !reader0.eof(); i++) {
				reader0.get(letter);
				name += letter;
			}
			reader0.close();
		}
		name.pop_back();
		name.pop_back(); 
		cout << "Are you sure you want to say bye-bye to the account " << name << "?" << endl;
		getline(cin, currentType);
		if (currentType == "Yes" || currentType == "yes" || currentType == "y" || currentType == "Y") {
			//add deleating files
			ofstream user44343(nastpass);
			user44343 << "";
			user44343.close();
			ofstream user46343(logdid);
			user46343 << "";
			user46343.close();
			ofstream user47343(currentY);
			user47343 << "";
			user47343.close();
			ofstream user48343(currentN);
			user48343 << "";
			user48343.close();
			ofstream user49343(currentT);
			user49343 << "";
			user49343.close();
			//Add archive for betasurvey
			ifstream betachiveread(currentB);
			tempString = "";
			for (int i = 0; !betachiveread.eof(); i++) {
				betachiveread.get(letter);
				tempString += letter;
			}
			ofstream betarchivewrite("surveyarchive.txt", ios::app);
			betarchivewrite << name << endl << tempString << endl << endl << endl;
			betarchivewrite.close();
			ofstream user449943(currentB);
			user449943 << "";
			user449943.close();
			didalready = "mnm";
			ifstream readeriii(yorn1);
			ifstream readeriiii(yorn2);
			ifstream readeriiiii(yorn3);
			ifstream readeriiiiii(yorn4);
			if (!readeriii && !readeriiii && !readeriiiii && !readeriiiiii) {
				currentY = yorn1;
				currentN = name1;
				currentB = betasurvey1;
				currentT = theme1;
				nastpass = nastpass1;
				logdid = logdid1;
				account = "1";
				createUser();
				t2();
			}
			cout << "You will need to log in again. Click enter..." << endl;
			cin.ignore();
			startup();
			logout();
			didalready = "mnm";
		}
		else {
			cout << "Okay" << endl;
			didalready = "mnm";
		}
	}
}