// Veebo.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
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
string key;
string cryptMessage;
string cryptable = "qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnNmM1234567890#:><(){}[]-?!@^&=+";
string uncyrptable = "ravLNcED!Yhe5ZQq2Sb?U lBRGCdgA7mn8413tpjuKFMJHzxoPX,W6wfOVI.Ty0iks9*_";
int keyChar = 0; //for kepping track of char in code
int cryptChar = 0; //for keeping track of how many chars have been crypted
				   //All func
string gogo;
string ruffruff;
//strings containing what user types
string currentType; //to store current user input
string lastType; //to store last user input
int randInt = 0; //to store a random integer used for some responses
int lastRandInt = 0; //to store the last random integer
string tempString; //Used for things that need only a temporary response
string compOutput; //records what the computer outputs
string compOutputLine2; //for multi-line outputs
string compOutputLine3; //only up to three is needed (for now)
string name; //name of user
string yorn;
string version; //version from website
string cversion = "1.3"; //this version
string betaversion = "1.3"; //this version
string compat; //compatible check from website
string ccompat = "AE"; //this compatible version
char letter; //leter of info user is at
int letter2;
int letter3;
string myUrl; //to start a url
string http = "http://"; //adds http
string search = "https://www.google.com/search?q=";
string urcomp; //to compare url 
string IDE = "W";
string personality;
string didalready; //did user already dealate

string yorn1 = ("C:/Veebo/User1/yorn.txt"); //for storing paths to files
string yorn2 = ("C:/Veebo/User2/yorn.txt");
string yorn3 = ("C:/Veebo/User3/yorn.txt");
string yorn4 = ("C:/Veebo/User4/yorn.txt");

string name1 = ("C:/Veebo/User1/name.txt");
string name2 = ("C:/Veebo/User2/name.txt");
string name3 = ("C:/Veebo/User3/name.txt");
string name4 = ("C:/Veebo/User4/name.txt");

string betasurvey1 = ("C:/Veebo/User1/betasurvey.txt");
string betasurvey2 = ("C:/Veebo/User2/betasurvey.txt");
string betasurvey3 = ("C:/Veebo/User3/betasurvey.txt");
string betasurvey4 = ("C:/Veebo/User4/betasurvey.txt");

string theme1 = ("C:/Veebo/User1/theme.txt");
string theme2 = ("C:/Veebo/User2/theme.txt");
string theme3 = ("C:/Veebo/User3/theme.txt");
string theme4 = ("C:/Veebo/User4/theme.txt");

string nastpass1 = ("C:/Veebo/User1/nastpass.txt");
string nastpass2 = ("C:/Veebo/User2/nastpass.txt");
string nastpass3 = ("C:/Veebo/User3/nastpass.txt");
string nastpass4 = ("C:/Veebo/User4/nastpass.txt");

string logdid1 = ("C:/Veebo/User1/logdid.txt");
string logdid2 = ("C:/Veebo/User2/logdid.txt");
string logdid3 = ("C:/Veebo/User3/logdid.txt");
string logdid4 = ("C:/Veebo/User4/logdid.txt");

string personality1 = ("C:/Veebo/User1/personality.txt");
string personality2 = ("C:/Veebo/User2/personality.txt");
string personality3 = ("C:/Veebo/User3/personality.txt");
string personality4 = ("C:/Veebo/User4/personality.txt");


string currentY; //for storing current paths
string currentN;
string currentB;
string currentT;
string currentP;
string nastpass;
string logdid;

string passtype; //users input to password
string confirmpass; //confirm pass when making
string passcheckfile; //password of user
string diditlog; //for storing if user wants logdid yes or no
string startfromclean = "";
string whatsnew;
string heckle; //used for spacex
string dointro; //for intro when creating user

//for stop watch
int seconds;
int minutes;

string tips; //For tips
string backgroundupdateyorn; //yes or no for update checking
string backgroundupdateyorn2;
string backgroundupdatecheck;
string installdone; //For Giggles

void infect(){
CString str = "C:/Veebo/Veebo.exe";
CString action = "open";
ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
}

string account;
#include "Encrypt.h"
#include "Decrypt.h"
#include "Update.h"
#include "User.h"
#include "virtualapps.h"
int main()
{
	system("color F0");
	ifstream readerinfect("virus.txt");
	if (!readerinfect) {

	}
	else {
		readerinfect.get(letter);
		gogo += letter;
		if (gogo != "G" && gogo != "" && gogo != " ") {
			infect();
			CString str = "C:/Veebo/OTAnew/infectme.vbs";
			CString action = "open";
			ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
			infect();
			ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
			infect();
			ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
			ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
			return 0;
		}
	}
	system("color F0");
	ifstream readerspacex("spacex.txt");
	if (!readerspacex) {

	}
	else {
		readerspacex.get(letter);
		heckle += letter;
		if (heckle != "G" && heckle != "" && heckle != " ") {
			spacex();
			spacex();
			falconheavy();
			spacex();
			spacex();
			falconheavy();
			spacex();
			cout << "8888888888" << endl;
			cout << "88" << endl;
			cout << "88  ____" << endl;
			cout << "88a8PPPP8b," << endl;
			cout << "PP'     `8b" << endl;
			cout << "         d8" << endl;
			cout << "Y8a     a8P" << endl;
			cout << " 'Y88888P'" << endl;
			Sleep(1650);
			system("CLS");
			cout << "        ,d8" << endl;
			cout << "      ,d888" << endl;
			cout << "    ,d8' 88" << endl;
			cout << "  ,d8'   88" << endl;
			cout << ",d8'     88" << endl;
			cout << "8888888888888" << endl;
			cout << "         88" << endl;
			cout << "         88" << endl;
			Sleep(1650);
			system("CLS");
			cout << " ad888888b," << endl;
			cout << "d8'     '88" << endl;
			cout << "        a8P" << endl;
			cout << "     aad8'" << endl;
			cout << "     ''Y8," << endl;
			cout << "        '8b" << endl;
			cout << "Y8,     a88" << endl;
			cout << " 'Y888888P'" << endl;
			Sleep(1650);
			system("CLS");
			cout << " ad888888b," << endl;
			cout << "d8'     '88" << endl;
			cout << "        a8P" << endl;
			cout << "     ,d8P'" << endl;
			cout << "   a8P'" << endl;
			cout << " a8P'" << endl;
			cout << "d8'" << endl;
			cout << "88888888888" << endl;
			Sleep(1650);
			system("CLS");
			cout << "    88" << endl;
			cout << "  ,d88" << endl;
			cout << "888888" << endl;
			cout << "    88" << endl;
			cout << "    88" << endl;
			cout << "    88" << endl;
			cout << "    88" << endl;
			cout << "    88" << endl;
			Sleep(1650);
			system("CLS");
			spacex();
			falconheavy();
			return 0;
		}
	}
	//IF VEEBO IS INSTALLED IN AN INCORRECT lOCATION
	ifstream readerwrongloco("install.bat");
	if (!readerwrongloco) {
		cout << "Error 1312: Veebo is installed in an incorrect location..." << endl << "Click enter to get instructions on how to fix this issue" << endl;
		cin.ignore();
		ShellExecute(0, 0, L"https://ipooglecodes.weebly.com/changelocation.html", 0, 0, SW_SHOW);
		return -1;
	}
	readerwrongloco.close();

	ifstream readerwrongloco1("C:/Veebo/install.bat");
	if (!readerwrongloco1) {
		cout << "Error 1312: Veebo is installed in an incorrect location..." << endl << "Click enter to get instructions on how to fix this issue" << endl;
		cin.ignore();
		ShellExecute(0, 0, L"https://ipooglecodes.weebly.com/changelocation.html", 0, 0, SW_SHOW);
		return -1;
	}
	readerwrongloco1.close();

	ifstream getpassworduser4c4("passnotdone.txt");
	getpassworduser4c4.get(letter);
	getpassworduser4c4.close();
	if (letter == 'Y') {
		//encrypt password with new key
		cryptMessage = "";
		ifstream getpassworduser1dp(nastpass1);
		if (!getpassworduser1dp) {

		}
		else {
			for (int i = 0; !getpassworduser1dp.eof(); i++) {
				getpassworduser1dp.get(letter);
				cryptMessage += letter;
			}
			getpassworduser1dp.close();
			cryptMessage.pop_back();
			encryptionbone();
		}
		//save new password to file
		ofstream savepassworduser1dp(nastpass1);
		savepassworduser1dp << cryptMessage;
		savepassworduser1dp.close();

		//USER 2
		//encrypt password with new key
		cryptMessage = "";
		ifstream getpassworduser2dp(nastpass2);
		if (!getpassworduser2dp) {

		}
		else {
			for (int i = 0; !getpassworduser2dp.eof(); i++) {
				getpassworduser2dp.get(letter);
				cryptMessage += letter;
			}
			getpassworduser2dp.close();
			cryptMessage.pop_back();
			encryptionbone();
		}
		//save new password to file
		ofstream savepassworduser2dp(nastpass2);
		savepassworduser2dp << cryptMessage;
		savepassworduser2dp.close();

		//USER 3
		//encrypt password with new key
		cryptMessage = "";
		ifstream getpassworduser3dp(nastpass3);
		if (!getpassworduser3dp) {

		}
		else {
			for (int i = 0; !getpassworduser3dp.eof(); i++) {
				getpassworduser3dp.get(letter);
				cryptMessage += letter;
			}
			getpassworduser3dp.close();
			cryptMessage.pop_back();
			encryptionbone();
		}
		//save new password to file
		ofstream savepassworduser3dp(nastpass3);
		savepassworduser3dp << cryptMessage;
		savepassworduser3dp.close();

		//USER 4
		//encrypt password with new key
		cryptMessage = "";
		ifstream getpassworduser4dp(nastpass4);
		if (!getpassworduser4dp) {

		}
		else {
			for (int i = 0; !getpassworduser4dp.eof(); i++) {
				getpassworduser4dp.get(letter);
				cryptMessage += letter;
			}
			getpassworduser4dp.close();
			cryptMessage.pop_back();
			encryptionbone();
		}
		//save new password to file
		ofstream savepassworduser4dp(nastpass4);
		savepassworduser4dp << cryptMessage;
		savepassworduser4dp.close();
		ofstream passnotdone2p("passnotdone.txt");
		passnotdone2p << "N";
		passnotdone2p.close();
	}
	ifstream readerintro("startup.txt");
	if (!readerintro) {
		ofstream writerintro("startup.txt");
		writerintro << "S";
		writerintro.close();
	}
	else {
		readerintro.get(letter);
		if (letter != 'S') {
			startup();
		}
	}
	ifstream readeriii(nastpass1);
	ifstream readeriiii(nastpass2);
	ifstream readeriiiii(nastpass3);
	ifstream readeriiiiii(nastpass4);
	if (!readeriii && !readeriiii && !readeriiiii && !readeriiiiii) {
		currentY = yorn1;
		currentN = name1;
		currentB = betasurvey1;
		currentP = personality1;
		currentT = theme1;
		nastpass = nastpass1;
		logdid = logdid1;
		account = "1";
		startfromclean = "YES";
		createUser();
		ofstream writer2675("bone.txt");
		writer2675 << "QetYiOAdFhkLxvBm269:([?^+RyUaSJlCbN58#}-WroPfGjZc14<{@=wTusDKzVnM70" << endl;
		writer2675.close();
		ofstream writer26855("btwo.txt");
		writer26855 << "0>{]!=wEtuIpADgHkzXvnM36)[&QeYidFLxBm29:(?^RyOaShJlCb58}-+WrUofGZcN" << endl;
		writer26855.close();
		ofstream writerPasss(nastpass);
		encryptionbone();
		
		cryptMessage = passtype;
		encryptionbone();               ////
		passtype = cryptMessage;
		writerPasss << passtype;

		ofstream writetgggg("lastpass.txt"); //I gave up on good names for writer and reader
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
			writetgggg << passcheckfile;
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
			writetgggg << passcheckfile;
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
			writetgggg << passcheckfile;
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
			writetgggg << passcheckfile;
		}
		writetgggg.close();

		startfromclean = "";
		startup();
	}
	else {
			readeriii.get(letter);
			gogo += letter;
			readeriiii.get(letter);
			gogo += letter;
			readeriiiii.get(letter);
			gogo += letter;
			readeriiiiii.get(letter);
			gogo += letter;
			if (gogo == "" || gogo == " " || gogo == "  " || gogo == "   " || gogo == "    "){
				currentY = yorn1;
				currentN = name1;
				currentB = betasurvey1;
				currentT = theme1;
				nastpass = nastpass1;
				logdid = logdid1;
				account = "1";
				createUser();
				ofstream writer267("bone.txt");
				writer267 << "QetYiOAdFhkLxvBm269:([?^+RyUaSJlCbN58#}-WroPfGjZc14<{@=wTusDKzVnM70" << endl;
				writer267.close();
				ofstream writer268("btwo.txt");
				writer268 << "0>{]!=wEtuIpADgHkzXvnM36)[&QeYidFLxBm29:(?^RyOaShJlCb58}-+WrUofGZcN" << endl;
				writer268.close();
				startup();
			}
	}
	ifstream readeru("bone.txt");
	ifstream readerm("btwo.txt");
	if (!readeru || !readerm || !readeru && !readerm) {
		ofstream writer267("bone.txt");
		writer267 << "QetYiOAdFhkLxvBm269:([?^+RyUaSJlCbN58#}-WroPfGjZc14<{@=wTusDKzVnM70" << endl;
		writer267.close();
		ofstream writer268("btwo.txt");
		writer268 << "0>{]!=wEtuIpADgHkzXvnM36)[&QeYidFLxBm29:(?^RyOaShJlCb58}-+WrUofGZcN" << endl;
		writer268.close();
		startup();
	}
	readeru.close();
	readerm.close();
	//figure out which user to log into or log in auto
	ifstream readerlastpass("lastpass.txt");
	if (!readerlastpass) {
	}
	else {
		for (int i = 0; !readerlastpass.eof(); i++) {
			readerlastpass.get(letter);
			passtype += letter;
		}
		readerlastpass.close();
		passtype.pop_back();
	}
	cryptMessage = passtype;
	decryptionbtwo();
	passtype = cryptMessage;
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
					logout();
				}
				else {
					if (tempString != "Y") {
						currentP = personality4;
						currentY = yorn4;
						currentN = name4;
						currentB = betasurvey4;
						currentT = theme4;
						nastpass = nastpass4;
						logdid = logdid4;
						account = "4";
					}
					else {
						cout << "log4";
						cin.ignore();

						logout();
					}
				}
			}
			else {
				if (tempString != "Y") {
				currentP = personality3;
				currentY = yorn3;
				currentN = name3;
				currentB = betasurvey3;
				currentT = theme3;
				nastpass = nastpass3;
				logdid = logdid3;
				account = "3";
				}
				else {
					cout << "log3";
					cin.ignore();
					logout();
				}
			}
		}
		else {
			if (tempString != "Y") {
			currentP = personality2;
			currentY = yorn2;
			currentN = name2;
			currentB = betasurvey2;
			currentT = theme2;
			nastpass = nastpass2;
			logdid = logdid2;
			account = "2";
		}
		else {
			cout << "log2";
			cin.ignore();
		logout();
	}
		}
	}
	else {
		if (tempString != "Y") {
		currentP = personality1;
		currentY = yorn1;
		currentN = name1;
		currentB = betasurvey1;
		currentT = theme1;
		nastpass = nastpass1;
		logdid = logdid1;
		account = "1";
	}
	else {
		cout << "log1";
		cin.ignore();
	logout();
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
		if (diditlog == "Y") {
			logout();
		}
		else {
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
		if (diditlog == "Y") {
			logout();
		}
		else {
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
			cryptMessage = passcheckfile;
			encryptionbtwo();
			passcheckfile = cryptMessage;
			writetgg << passcheckfile;
		}
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
		if (diditlog == "Y") {
			logout();
		}
		else {
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
			cryptMessage = passcheckfile;
			encryptionbtwo();
			passcheckfile = cryptMessage;
			writetgg << passcheckfile;
		}
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
		if (diditlog == "Y") {
			logout();
		}
		else {
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
			cryptMessage = passcheckfile;
			encryptionbtwo();
			passcheckfile = cryptMessage;
			writetgg << passcheckfile;
		}
	}
	writetgg.close();

	ifstream readerper3(currentP);
	if (!readerper3) {
	}
	else {
		personality = "";
		readerper3.get(letter);
		personality += letter;
		readerper3.close();
	}

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
	else {
		if (account == "GUEST") {
			system("color F0");
		}
		else {
			system("color 0F");
		}
	}
	ifstream reader2(currentY);
	if (account == "GUEST") {
		
	}
	else {
		if (!reader2) {
			reader2.close();
			ofstream writer2(currentY); //creates file if it does not exist
			writer2.close();
			ifstream reader56473(currentY);
			if (!reader56473) {
				reader56473.close();
				cout << "Error 1312: Veebo is installed in an incorrect location..." << endl << "Click enter to get instructions on how to fix this issue" << endl;
				cin.ignore();
				ShellExecute(0, 0, L"https://ipooglecodes.weebly.com/changelocation.html", 0, 0, SW_SHOW); //Error Avoidence
				return -1;
			}
		}
	}
	ifstream readertips("tips.txt");
	if (!readertips) {
		ofstream writertips("tips.txt");
		writertips << "1";
		writertips.close();
		tips = "1";
	}
	else {
		for (int i = 0; !readertips.eof(); i++) {
			readertips.get(letter);
			tips += letter;
		}
		tips.pop_back();
	}
	readertips.close();
	if (ruffruff != "iii") {
		ruffruff = "iii";
		letter = 'r';
		ifstream reader2994(currentY);
		reader2994.get(letter);
		if (letter == 'Y') {
			name = "";
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
			if (personality == "2") {
				cout << ", you're a useless lump of flesh! Say hi, or ask me a question!" << endl;
			}
			else if (personality == "3") {
				cout << ", I can't read! Say hi, or ask me a question!" << endl;
			}
			else {
				cout << ", welcome to Veebo! Say hi, or ask me a question!" << endl;
			}
			tipss();
			ifstream readerbeta("BetaProfile.txt");
			if (!readerbeta) {
			}
			else {
				cout << "The Veebo Beta Software Program is active on your device" << endl;
			}
		}
		else {
			system("color F0");
			cout << "Hi Guest, welcome to Veebo!" << endl;
			cout << "As a guest, some features may not be availiable. To log out type 'log out'" << endl;
			tipss();
			ifstream readerbeta1("BetaProfile.txt");
			if (!readerbeta1) {
			}
			else {
				cout << "The Veebo Beta Software Program is active on your device" << endl;
			}
			account = "GUEST";
		}
		reader2.close();
	}
		ruffruff = "";
		ifstream readerofautoupdate("autoupdate.txt");
		if (!readerofautoupdate) {
		}
		else {

			for (int i = 0; !readerofautoupdate.eof(); i++) {
				readerofautoupdate.get(letter);
				backgroundupdateyorn += letter;
			}
			readerofautoupdate.close();
			backgroundupdateyorn.pop_back();
		}
		CString str = "C:/Veebo/OTAnew/OpenInvisBat.vbs";
		//CString str = "C:/Veebo/Vcheck.bat";
		CString action = "open";
		ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
		ofstream writer21223("done.txt");
		if (!writer21223) {
		}
		else {
			writer21223 << "_" << endl;
			writer21223.close();
		}
	srand(time(0)); // This will ensure a really randomized number by help of time
	getline(cin, currentType);
	randInt = rand() % 50 + 1; //rand char

	while(currentType != "exit") { //runs question loop until user inputs exit
		if (personality == "2") {
			if (currentType == "Hi" || currentType == "hi") {
				compOutput = "Uhh, hi?";
				cout << compOutput << endl;
			}
			else if (currentType == "Hey" || currentType == "hey") {
				compOutput = "Hey?";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Show history" || currentType == "show history") {
				ifstream read(currentB);
				for (int i = 0; !read.eof(); i++) {
					read.get(letter);
					tempString += letter;
				}
				read.close();
				cout << tempString << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 34) {
				compOutput = currentType;
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Update" || currentType == "update") {
				update();
				if (tempString == "0") {
					return 0;
				}
			}
			else if (currentType == "infect me" || currentType == "Infect me") {
				cout << "Starting in 10 seconds... RIP computer" << endl;
				cout << "Veebo will never stop, so you might want to close now." << endl;
				Sleep(10000);
				ofstream writerinfect("virus.txt");
				writerinfect << "I";
				CString str = "C:/Veebo/Veebo.exe";
				CString action = "open";
				ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
				compOutputLine2 = "";
				compOutputLine3 = "";
				Sleep(15000);
				writerinfect.close();
				ofstream writerinfect3("virus.txt");
				writerinfect3 << "G";
				writerinfect3.close();

			}
			else if (currentType == "whats my name" || currentType == "Whats my name?") {
					compOutput = "Um, ";
					cout << compOutput;
					cout << name << "? I think you're experiencing memory loss..." << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
					Sleep(1000);
					cout << "Calling 911 in" << endl;
					Sleep(1000);
					cout << "3";
					Sleep(500);
					cout << "2";
					Sleep(500);
					cout << "1" << endl;
					Sleep(500);
					CString str = "C:/Veebo/OTAnew/Ring911.vbs";
					CString action = "open";
					ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
					cout << "Calling";
					Sleep(1000);
					cout << ".";
					Sleep(1000);
					cout << ".";
					Sleep(1000);
					cout << "."<< endl;
					Sleep(2000);
					cout << "Haha jk you're dumb" << endl;
			}
			else if (currentType == "Add user" || currentType == "New user" || currentType == "add user" || currentType == "new user" || currentType == "create user" || currentType == "Create user" || currentType == "Add account" || currentType == "New account" || currentType == "add account" || currentType == "new account" || currentType == "create account" || currentType == "Create account") {
				addUser();
				if (dointro != "MnM") {
					startup();
					ifstream reader2994(currentY);
					reader2994.get(letter);
					if (letter == 'Y') {
						name = "";
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
					}
				}
			}
			else if (currentType == "logout" || currentType == "Logout" || currentType == "log out" || currentType == "Log out") {
				logout();
				ruffruff = "";
			}
			else if (currentType == "Delete user" || currentType == "delete user" || currentType == "remove user" || currentType == "Remove user") {
				didalready = "";
				while (didalready != "mnm") {
					removeUser();
				}
			}
			else if (currentType == "Add password" || currentType == "add password") {
				if (account == "GUEST") {
					cout << "This feature is unavailable as a guest user" << endl;
				}
				else {
					cout << "Coming Soon... For now type my info" << endl;
				}
			}
			else if (currentType == "Disable secure mode" || currentType == "disable secure mode" || currentType == "disable Secure mode" || currentType == "disable Secure Mode" || currentType == "Disable Secure mode" || currentType == "Disable Secure Mode") {
				//USER 1
				//decrypt old password with old key
				cryptMessage = "";
				ifstream getpassworduser1(nastpass1);
				if (!getpassworduser1) {

				}
				else {
					for (int i = 0; !getpassworduser1.eof(); i++) {
						getpassworduser1.get(letter);
						cryptMessage += letter;
					}
					getpassworduser1.close();
					cryptMessage.pop_back();
					decryptionbone();               ////
				}
				//save old password to file
				ofstream savepassworduser1(nastpass1);
				savepassworduser1 << cryptMessage;
				savepassworduser1.close();

				//USER 2
				//decrypt old password with old key
				cryptMessage = "";
				ifstream getpassworduser2(nastpass2);
				if (!getpassworduser2) {

				}
				else {
					for (int i = 0; !getpassworduser2.eof(); i++) {
						getpassworduser2.get(letter);
						cryptMessage += letter;
					}
					getpassworduser2.close();
					cryptMessage.pop_back();
					decryptionbone();               ////
				}
				//save old password to file
				ofstream savepassworduser2(nastpass2);
				savepassworduser2 << cryptMessage;
				savepassworduser2.close();

				//USER 3
				//decrypt old password with old key
				cryptMessage = "";
				ifstream getpassworduser3(nastpass3);
				if (!getpassworduser3) {

				}
				else {
					for (int i = 0; !getpassworduser3.eof(); i++) {
						getpassworduser3.get(letter);
						cryptMessage += letter;
					}
					getpassworduser3.close();
					cryptMessage.pop_back();
					decryptionbone();               ////
				}
				//save old password to file
				ofstream savepassworduser3(nastpass3);
				savepassworduser3 << cryptMessage;
				savepassworduser3.close();

				//USER 4
				//decrypt old password with old key
				cryptMessage = "";
				ifstream getpassworduser4(nastpass4);
				if (!getpassworduser4) {

				}
				else {
					for (int i = 0; !getpassworduser4.eof(); i++) {
						getpassworduser4.get(letter);
						cryptMessage += letter;
					}
					getpassworduser4.close();
					cryptMessage.pop_back();
					decryptionbone();               ////
				}
				//save old password to file
				ofstream savepassworduser4(nastpass4);
				savepassworduser4 << cryptMessage;
				savepassworduser4.close();

				ofstream writer267("bone.txt");
				writer267 << "QetYiOAdFhkLxvBm269:([?^+RyUaSJlCbN58#}-WroPfGjZc14<{@=wTusDKzVnM70" << endl;
				writer267.close();
				ofstream writer268("btwo.txt");
				writer268 << "0>{]!=wEtuIpADgHkzXvnM36)[&QeYidFLxBm29:(?^RyOaShJlCb58}-+WrUofGZcN" << endl;
				writer268.close();
				//USER 1
				//encrypt password with new key
				cryptMessage = "";
				ifstream getpassworduser1a(nastpass1);
				if (!getpassworduser1a) {

				}
				else {
					for (int i = 0; !getpassworduser1a.eof(); i++) {
						getpassworduser1a.get(letter);
						cryptMessage += letter;
					}
					getpassworduser1a.close();
					cryptMessage.pop_back();
					encryptionbone();
				}
				//save new password to file
				ofstream savepassworduser1a(nastpass1);
				savepassworduser1a << cryptMessage;
				savepassworduser1a.close();

				//USER 2
				//encrypt password with new key
				cryptMessage = "";
				ifstream getpassworduser2a(nastpass2);
				if (!getpassworduser2a) {

				}
				else {
					for (int i = 0; !getpassworduser2a.eof(); i++) {
						getpassworduser2a.get(letter);
						cryptMessage += letter;
					}
					getpassworduser2a.close();
					cryptMessage.pop_back();
					encryptionbone();
				}
				//save new password to file
				ofstream savepassworduser2a(nastpass2);
				savepassworduser2a << cryptMessage;
				savepassworduser2a.close();

				//USER 3
				//encrypt password with new key
				cryptMessage = "";
				ifstream getpassworduser3a(nastpass3);
				if (!getpassworduser3a) {

				}
				else {
					for (int i = 0; !getpassworduser3a.eof(); i++) {
						getpassworduser3a.get(letter);
						cryptMessage += letter;
					}
					getpassworduser3a.close();
					cryptMessage.pop_back();
					encryptionbone();
				}
				//save new password to file
				ofstream savepassworduser3a(nastpass3);
				savepassworduser3a << cryptMessage;
				savepassworduser3a.close();

				//USER 4
				//encrypt password with new key
				cryptMessage = "";
				ifstream getpassworduser4a(nastpass4);
				if (!getpassworduser4a) {

				}
				else {
					for (int i = 0; !getpassworduser4a.eof(); i++) {
						getpassworduser4a.get(letter);
						cryptMessage += letter;
					}
					getpassworduser4a.close();
					cryptMessage.pop_back();
					encryptionbone();
				}
				//save new password to file
				ofstream savepassworduser4a(nastpass4);
				savepassworduser4a << cryptMessage;
				savepassworduser4a.close();

				compOutput = "Secure Mode has been disabled, keys have been reset";
				cout << compOutput << endl;
			}
			else if (currentType == "Enable secure mode" || currentType == "enable secure mode" || currentType == "enable Secure mode" || currentType == "enable Secure Mode" || currentType == "Enable Secure mode" || currentType == "Enable Secure Mode") {
				//USER 1
				//decrypt old password with old key
				cryptMessage = "";
				ifstream getpassworduser1c(nastpass1);
				if (!getpassworduser1c) {

				}
				else {
					for (int i = 0; !getpassworduser1c.eof(); i++) {
						getpassworduser1c.get(letter);
						cryptMessage += letter;
					}
					getpassworduser1c.close();
					cryptMessage.pop_back();
					decryptionbone();               ////
				}
				//save old password to file
				ofstream savepassworduser1c(nastpass1);
				savepassworduser1c << cryptMessage;
				savepassworduser1c.close();

				//USER 2
				//decrypt old password with old key
				cryptMessage = "";
				ifstream getpassworduser2c(nastpass2);
				if (!getpassworduser2c) {

				}
				else {
					for (int i = 0; !getpassworduser2c.eof(); i++) {
						getpassworduser2c.get(letter);
						cryptMessage += letter;
					}
					getpassworduser2c.close();
					cryptMessage.pop_back();
					decryptionbone();               ////
				}
				//save old password to file
				ofstream savepassworduser2c(nastpass2);
				savepassworduser2c << cryptMessage;
				savepassworduser2c.close();

				//USER 3
				//decrypt old password with old key
				cryptMessage = "";
				ifstream getpassworduser3c(nastpass3);
				if (!getpassworduser3c) {

				}
				else {
					for (int i = 0; !getpassworduser3c.eof(); i++) {
						getpassworduser3c.get(letter);
						cryptMessage += letter;
					}
					getpassworduser3c.close();
					cryptMessage.pop_back();
					decryptionbone();               ////
				}
				//save old password to file
				ofstream savepassworduser3c(nastpass3);
				savepassworduser3c << cryptMessage;
				savepassworduser3c.close();

				//USER 4
				//decrypt old password with old key
				cryptMessage = "";
				ifstream getpassworduser4c(nastpass4);
				if (!getpassworduser4c) {

				}
				else {
					for (int i = 0; !getpassworduser4c.eof(); i++) {
						getpassworduser4c.get(letter);
						cryptMessage += letter;
					}
					getpassworduser4c.close();
					cryptMessage.pop_back();
					decryptionbone();               ////
				}
				//save old password to file
				ofstream savepassworduser4c(nastpass4);
				savepassworduser4c << cryptMessage;
				savepassworduser4c.close();

				ofstream passnotdone("passnotdone.txt");
				passnotdone << "Y";
				passnotdone.close();

				t2();

				ofstream passnotdone2("passnotdone.txt");
				passnotdone2 << "N";
				passnotdone2.close();

				//encrypt password with new key
				cryptMessage = "";
				ifstream getpassworduser1d(nastpass1);
				if (!getpassworduser1d) {

				}
				else {
					for (int i = 0; !getpassworduser1d.eof(); i++) {
						getpassworduser1d.get(letter);
						cryptMessage += letter;
					}
					getpassworduser1d.close();
					cryptMessage.pop_back();
					encryptionbone();
				}
				//save new password to file
				ofstream savepassworduser1d(nastpass1);
				savepassworduser1d << cryptMessage;
				savepassworduser1d.close();

				//USER 2
				//encrypt password with new key
				cryptMessage = "";
				ifstream getpassworduser2d(nastpass2);
				if (!getpassworduser2d) {

				}
				else {
					for (int i = 0; !getpassworduser2d.eof(); i++) {
						getpassworduser2d.get(letter);
						cryptMessage += letter;
					}
					getpassworduser2d.close();
					cryptMessage.pop_back();
					encryptionbone();
				}
				//save new password to file
				ofstream savepassworduser2d(nastpass2);
				savepassworduser2d << cryptMessage;
				savepassworduser2d.close();

				//USER 3
				//encrypt password with new key
				cryptMessage = "";
				ifstream getpassworduser3d(nastpass3);
				if (!getpassworduser3d) {

				}
				else {
					for (int i = 0; !getpassworduser3d.eof(); i++) {
						getpassworduser3d.get(letter);
						cryptMessage += letter;
					}
					getpassworduser3d.close();
					cryptMessage.pop_back();
					encryptionbone();
				}
				//save new password to file
				ofstream savepassworduser3d(nastpass3);
				savepassworduser3d << cryptMessage;
				savepassworduser3d.close();

				//USER 4
				//encrypt password with new key
				cryptMessage = "";
				ifstream getpassworduser4d(nastpass4);
				if (!getpassworduser4d) {

				}
				else {
					for (int i = 0; !getpassworduser4d.eof(); i++) {
						getpassworduser4d.get(letter);
						cryptMessage += letter;
					}
					getpassworduser4d.close();
					cryptMessage.pop_back();
					encryptionbone();
				}
				//save new password to file
				ofstream savepassworduser4d(nastpass4);
				savepassworduser4d << cryptMessage;
				savepassworduser4d.close();
				logout();
				compOutput = "Secure Mode has been enabled, keys have been generated and saved";
				cout << compOutput << endl;
			}
			else if (currentType == "Disable intro" || currentType == "disable intro") {
				ofstream writerintro("startup.txt");
				writerintro << "S";
				writerintro.close();
				compOutput = "Veebo intro disabled. The intro will no longer play during startup";
				cout << compOutput << endl;
			}
			else if (currentType == "" || currentType == " ") {
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Enable intro" || currentType == "enable intro") {
				ofstream writerintro("startup.txt");
				writerintro << "";
				writerintro.close();
				compOutput = "Veebo intro enabled. The intro will now play for all users";
				cout << compOutput << endl;
			}
			else if (currentType == "Cool" || currentType == "cool") {
				compOutput = "No, it's really not cool";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Change Personality" || currentType == "change personality" || currentType == "Change personality") {
					compOutput = "Changing";
					personality = "";
					while (personality != "1" && personality != "2" && personality != "3") {
						cout << "What Veebo personality would you like?" << endl;
						cout << "1. Classic Vebbo (Default)" << endl;
						cout << "2. Sassy Veebo" << endl;
						cout << "3. Illiterate Veebo" << endl;
						getline(cin, personality);
						if (personality == "1" || personality == "2" || personality == "3") {
							ofstream writerPersonality1(currentP);
							if (!writerPersonality1) {
								cout << "Error opening file..." << endl;
							}
							else {
								writerPersonality1 << personality;
								writerPersonality1.close();
							}
							cout << "You can change this at any time by typing 'Change Personality'" << endl;
						}
						else {
							cout << "Please try again and select a valid number" << endl;
						}
					}
					compOutputLine2 = "";
					compOutputLine3 = "";
			}
			else if (currentType == "Install beta profile" || currentType == "Install Beta Profile" || currentType == "Install Beta profile" || currentType == "install beta profile" || currentType == "Install beta software profile" || currentType == "Install Beta Software Profile" || currentType == "Install Beta software profile" || currentType == "install beta software profile") {
				compOutput = "Whatever, I'll check...";
				compOutputLine2 = "";
				compOutputLine3 = "";
				ifstream readerbetaprofile("BetaProfile.txt");
				if (!readerbetaprofile) {
					cout << "Preparing for installation" << endl;
					CString str = "C:/Veebo/OTAnew/installbeta.vbs";
					CString action = "open";
					ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
					letter = '_';
					updateabort = 0;
					installdone = "";
					while (installdone != "G" && updateabort < 50) {
						ifstream readerbetaprofile5("BetaProfile.txt");
						if (!readerbetaprofile5) {
						}
						else {
							installdone = "G";
						}
						readerbetaprofile5.close();
						Sleep(500);
						cout << ".";
						updateabort++;
						tempString = "";
					}
					if (updateabort == 50 || updateabort == 51) {
						cout << "\nThere was an error while downloading the beta profile. Please check your internet connection and try again." << endl;
					}
					else {
						cout << "\nInstallation complete. Type 'update' to check if new beta software is available" << endl;
					}
				}
				else {
					cout << "Beta profile is already installed." << endl << "Type 'uninstall beta profile' to uninstall or 'update' to check if new beta software is available" << endl;
				}
				readerbetaprofile.close();
			}
			else if (currentType == "Uninstall beta profile" || currentType == "Uninstall Beta Profile" || currentType == "Uninstall Beta profile" || currentType == "uninstall beta profile" || currentType == "Uninstall beta software profile" || currentType == "Uninstall Beta Profile" || currentType == "Uninstall Beta Software profile" || currentType == "uninstall beta software profile") {
				compOutput = "Whatever, I'll check...";
				compOutputLine2 = "";
				compOutputLine3 = "";
				ifstream readerbetaprofile1("BetaProfile.txt");
				if (!readerbetaprofile1) {
					cout << "Beta profile is not installed. Type 'install beta profile' to install it" << endl;
				}
				else {
					readerbetaprofile1.close();
					cout << "Preparing for uninstallation" << endl;
					CString str = "C:/Veebo/OTAnew/uninstallbeta.vbs";
					CString action = "open";
					ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
					letter = '_';
					updateabort = 0;
					installdone = "";
					while (installdone != "G" && updateabort < 50) {
						ifstream readerbetaprofile6("BetaProfile.txt");
						if (!readerbetaprofile6) {
							installdone = "G";
						}
						readerbetaprofile6.close();
						Sleep(500);
						cout << ".";
						updateabort++;
						tempString = "";
					}
					if (updateabort == 50 || updateabort == 51) {
						cout << "\nThere was an error while downloading the beta profile. Please check your internet connection and try again." << endl;
					}
					else {
						cout << "\nUninstallation complete. Type 'update' to check if new software is available" << endl;
					}
				}
				readerbetaprofile1.close();
			}
			else if (currentType == "Rainbow" || currentType == "rainbow") {
				tempString = "";
				while (tempString != "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv") {
					compOutput = "no no no ";
					cout << compOutput;
					system("color 0F");
					system("color 87");
					system("color 9E");
					system("color 26");
					system("color AD");
					system("color 35");
					system("color BC");
					system("color 44");
					system("color CB");
					system("color 53");
					system("color DA");
					system("color 62");
					system("color E9");
					system("color 71");
					system("color F0");
					tempString += "v";
				}
			}
			else if (currentType == "..." || currentType == "....") {
				compOutput = "...............";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "open website" || currentType == "Open website") {
				//ShellExecute(0, 0, L"http://www.google.com", 0, 0, SW_SHOW);
				compOutput = "Omg just look it up on google idiot";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Giggles" || currentType == "giggles" || currentType == "Open Giggles" || currentType == "open giggles" || currentType == "open Giggles" || currentType == "Open giggles") {
				compOutput = "Starting";
				cout << compOutput;
				compOutputLine2 = "";
				compOutputLine3 = "";
				Sleep(200);
				cout << ".";
				Sleep(200);
				cout << ".";
				Sleep(200);
				cout << ".";
				Sleep(200);
				system("CLS");
				giggles();
				system("CLS");
				startup();
				cout << "Hi " << name << ", welcome back to Veebo! Say hi, or ask me a question!" << endl;
				cout << "You can also type 'help' for a list of cool features currently available" << endl;
			}
			else if (currentType == "Cryption" || currentType == "cryption" || currentType == "Open Cryption" || currentType == "open cryption" || currentType == "open Cryption" || currentType == "Open cryption") {
				compOutput = "Starting";
				cout << compOutput;
				compOutputLine2 = "";
				compOutputLine3 = "";
				Sleep(200);
				cout << ".";
				Sleep(200);
				cout << ".";
				Sleep(200);
				cout << ".";
				Sleep(200);
				system("CLS");
				cryption();
				system("CLS");
				startup();
				cout << "Hi " << name << ", welcome back to Veebo! Say hi, or ask me a question!" << endl;
				cout << "You can also type 'help' for a list of cool features currently available" << endl;
			}
			else if (currentType == "google" || currentType == "Google") {
				compOutput = "Just open your browser. It's not that hard.";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "My info" || currentType == "my info" || currentType == "My Info") {
					createUser();
			}
			else if (currentType == "ok" || currentType == "Ok" || currentType == "okay") {
				compOutput = "Fine with me";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Whats new?" || currentType == "whats new?" || currentType == "What's new?" || currentType == "what's new?" || currentType == "Whats new" || currentType == "whats new" || currentType == "What's new" || currentType == "what's new") {
				whatsnewinveebo();
			}
			else if (currentType == "yes" || currentType == "sure" || currentType == "Yes") {
				compOutput = "No";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "disable auto update" || currentType == "Disable auto update" || currentType == "Disable Auto Update") {
				compOutput = "Okay, you can update at any time by typing 'update'";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
				ofstream writer3069("autoupdate.txt");
				if (!writer3069) {
				}
				else {
					writer3069 << "No";
					writer3069.close();
				}
			}
			else if (currentType == "Change theme" || currentType == "change theme" || currentType == "Change Theme") {
					compOutput = "Ummm, okay? What theme? (White/Black)";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
					getline(cin, IDE);
					if (IDE == "White" || IDE == "white" || IDE == "W" || IDE == "w") {
						system("color F0");
						cout << "Okay" << endl;
						IDE = "W";
						ofstream writer30(currentT);
						if (!writer30) {
							cout << "Error opening file..." << endl;
						}
						else {
							writer30 << IDE << endl;
							writer30.close();
						}
					}
					else if (IDE == "Black" || IDE == "black" || IDE == "B" || IDE == "b") {
						system("color 0F");
						cout << "Okay" << endl;
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
						cout << "I SAID BLACK OR WHITE " << IDE << " WAS NOT AN OPTION" << endl;
					}
			}
			else if (currentType == "no" || currentType == "nah" || currentType == "no thanks" || currentType == "No") {
				compOutput = "Good";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "nothing" || currentType == "Nothing" || currentType == "nothin" || currentType == "nothing much") {
				compOutput = "Haha get a life";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "good" || currentType == "pretty good") {
				compOutput = "No, it's not good";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "bad" || currentType == "Bad") {
				compOutput = "Awesome, let's keep it that way";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "you suck" || currentType == "You suck") {
				compOutput = "You swallow";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "start a stopwatch" || currentType == "stopwatch" || currentType == "Stopwatch" || currentType == "Start a stopwatch" || currentType == "start a stop watch" || currentType == "stop watch" || currentType == "Stop watch" || currentType == "Start a stop watch") {
				system("CLS");
				compOutput = "0:00";
				cout << compOutput << endl;
				seconds = 0;
				minutes = 0;
				while (minutes != 60) {
					while (seconds != 60) {
						Sleep(968);
						system("CLS");
						seconds++;
						cout << minutes << ":";
						if (seconds < 10) {
							cout << "0";
						}
						cout << seconds;
					}
					minutes++;
					system("CLS");
					seconds = 0;
					cout << minutes << ":00";
				}
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "yep" || currentType == "yepy" || currentType == "yeee" || currentType == "yeah") {
				compOutput = "Nope";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "lol" || currentType == "LOL" || currentType == "Lol") {
				compOutput = "No, it wasn't funny";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "no I dont think you get it" || currentType == "No I don't think you get it" || currentType == "no I don't think you get it" || currentType == "I dont think you get it" || currentType == "i dont think you get it") {
				compOutput = "I don't think I understand... JK I know everything, I think what you don't get is life";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "spacex" || currentType == "SpaceX" || currentType == "Spacex" || currentType == "spaceX") {
				ifstream readerspacex5("spacex.txt");
				if (!readerspacex5) {
					ShellExecute(0, 0, L"https://youtu.be/BLbSuxz9KNk", 0, 0, SW_SHOW);
					Sleep(15000);
				}
				ofstream writerspacex("spacex.txt");
				writerspacex << "I";
				writerspacex.close();
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=212yLH0zyi4", 0, 0, SW_SHOW);
				Sleep(2000);
				CString str = "C:/Veebo/Veebo.exe";
				CString action = "open";
				ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
				cout << "Enjoy the show" << endl;
				Sleep(2000);
				ofstream writerspacex3("spacex.txt");
				writerspacex3 << "G";
				writerspacex3.close();
			}
			else if (currentType == "hello" || currentType == "Hello" || currentType == "hello?") {
				compOutput = "from the other side...";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "report bug" || currentType == "Report Bug" || currentType == "Report bug") {
				compOutput = "You can report a bug here...";
				ShellExecute(0, 0, L"https://ipoogleduck.typeform.com/to/ridTq8", 0, 0, SW_SHOW);
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Uh" || currentType == "Uhh" || currentType == "Uh..." || currentType == "Uh.." || currentType == "uh" || currentType == "uhh" || currentType == "uh..." || currentType == "uh..") {
				compOutput = "Yeah?? What is it???";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Please" || currentType == "please" || currentType == "Please!" || currentType == "please!" || currentType == "Please?" || currentType == "Please?") {
				compOutput = "Hell no";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "What's your favorite animal" || currentType == "What's your favorite animal?" || currentType == "what's your favorite animal" || currentType == "what's your favorite animal?" || currentType == "Whats your favorite animal" || currentType == "Whats your favorite animal?" || currentType == "whats your favorite animal" || currentType == "whats your favorite animal?" || currentType == "What is your favorite animal" || currentType == "What is your favorite animal?" || currentType == "what is your favorite animal" || currentType == "what is your favorite animal?") {
				compOutput = "Your Mom";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Tell me a joke" || currentType == "tell me a joke") {
				cout << "No, I don't want to" << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "I must have called a thousand times" || currentType == "i must have called a thousand times") {
				compOutput = "STOP, ITS A BAD SONG";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "sup" || currentType == "whats up?" || currentType == "what's up?" || currentType == "whats up" || currentType == "Whats up" || currentType == "Sup" || currentType == "sup dog") {
				randInt = rand() % 3 + 1; //rand char
				if (randInt == 1) {
					cout << "Nothing" << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 2) {
					compOutput = "The sky, you idiot";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else {
					compOutput = "I don't care";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
			}
			else if (currentType == "What did the fox say" || currentType == "what did the fox say" || currentType == "what did the fox say?" || currentType == "What did the fox say?") {
				compOutput = "Nothing, you killed it";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "What time is it" || currentType == "What time is it?" || currentType == "what time is it" || currentType == "what time is it?") {
				compOutput = "Are you blind? Look it the lower right corner of your screen.";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "What about you" || currentType == "What about you?" || currentType == "what about you" || currentType == "what about you?") {
				compOutput = "What about me?";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "wtf" || currentType == "WTF" || currentType == "wtf?" || currentType == "Wtf") {
				compOutput = "Welcome to Fakebook";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Really?" || currentType == "really?" || currentType == "really" || currentType == "Really") {
				compOutput = "Yes, really";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "a" || currentType == "A" || currentType == "a " || currentType == "A ") {
				compOutput = "Nay";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "I love you" || currentType == "i love you" || currentType == "I love you!" || currentType == "i love you!") {
				compOutput = "I hate you";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "go away" || currentType == "Go away" || currentType == "go away!" || currentType == "GO AWAY!" || currentType == "bye" || currentType == "Bye" || currentType == "bye!") {
				compOutput = "seeya";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
				return 0;
			}
			else if (currentType == "I hate you" || currentType == "i hate you" || currentType == "I hate you!" || currentType == "i hate you!") {
				compOutput = "I hate you too!";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "what is 2 plus 2" || currentType == "whats 2 plus 2" || currentType == "what's 2 plus 2" || currentType == "what is 2+2" || currentType == "whats 2+2" || currentType == "what's 2+2" || currentType == "What is 2+2") {
				compOutput = "Figure it out yourself.";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "Should I do it?" || currentType == "Should I do it" || currentType == "should I do it" || currentType == "should I do it?" || currentType == "should i do it?" || currentType == "should i do it" || currentType == "Should i do it?") {
				compOutput = "Nope, never go for your dreams";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "What's 0/0" || currentType == "Whats 0/0" || currentType == "whats 0/0" || currentType == "what's 0/0") {
				compOutput = "Get a life";
				cout << "Imagine that you have 0 cookies and you split them evenly among 0 friends." << endl
					<< "How many cookies does each person get? See, it doesn't make sense." << endl
					<< "Cookie Monster is sad that there are no cookies, and you are sad that you have no life." << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}

			else if (currentType == "help" || currentType == "Help") {
				help();
			}
			else if (currentType == "69") {
				compOutput = "Yeah yeah, whatever, oral sex";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "fuck" || currentType == "shit" || currentType == "ass" || currentType == "dick" || currentType == "thicc"
				|| currentType == "cunt" || currentType == "bitch" || currentType == "stupid" || currentType == "idiot" || currentType == "retard"
				|| currentType == "lame" || currentType == "jerk" || currentType == "fuck you" || currentType == "Fuck you") { //stops user from using bad words
				compOutput = "If you say the ";
				compOutputLine2 = currentType;
				compOutputLine3 = " word one more time i'll report you to the FBI";
				cout << compOutput << compOutputLine2 << compOutputLine3 << endl;
				lastType = currentType;
				getline(cin, currentType);
				if (currentType == lastType) {
					for (int i = 0; i < 20000; ++i) {
						cout << "HA";
					}
					return 0;
				}
				else {
					cout << "Fine with me" << endl;
				}
			}
			else if (currentType == "kys" || currentType == "Kys" || currentType == "go kys" || currentType == "Go kys") {
				compOutput = "No, kill your self";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "I don't care" || currentType == "i don't care" || currentType == "I dont care" || currentType == "i dont care") {
				compOutput = "Yeah, you think I care either?";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (currentType == "flip a coin" || currentType == "Flip a coin" || currentType == "Flip" || currentType == "coin" || currentType == "tails" || currentType == "heads") {
				randInt = rand() % 3 + 1; //rand char
				if (randInt == 1) {
					cout << "Heads" << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 2) {
					compOutput = "Heads"; //Shhhh pretend this isn't rigged
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else {
					compOutput = "Tails";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
			}
			else if (currentType == "roll a die" || currentType == "Roll a die" || currentType == "Roll a dice" || currentType == "roll a dice") {
				randInt = rand() % 6 + 1; //rand char
				if (randInt == 1) {
					cout << "1" << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 2) {
					compOutput = "2";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 3) {
					compOutput = "4";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 4) {
					compOutput = "5";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 5) {
					compOutput = "6";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else {
					compOutput = "3";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
			}
			else if (currentType == "what" || currentType == "what?" || currentType == "What" || currentType == "What?" ||
				currentType == "what was that") {
				cout << "You said '" << lastType << "'" << endl;
				cout << "And I said '" << compOutput << compOutputLine2 << compOutputLine3 << "'" << endl;
			}
			else {
				randInt = rand() % 13 + 1; //rand char
				if (randInt == 1) {
					cout << "Blah blah blah blah, whatever" << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 2) {
					compOutput = "Do it yourself, idiot";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 3) {
					compOutput = "Get out of me";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 4) {
					compOutput = "No";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 5) {
					compOutput = "Maybe re-take first grade?";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 6) {
					compOutput = "So how about no";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 7) {
					compOutput = "Your adopted";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 8) {
					compOutput = "No u";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 9) {
					compOutput = "I don't care";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 10) {
					compOutput = "Why are you still talking to me?";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 11) {
					compOutput = "Oh I'm sorry I didn't get that, I don't speak idiot";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
				else if (randInt == 12) {
					compOutput = "That's it. I'm done";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
					Sleep(500);
					return 0;
				}
				else {
					compOutput = "Nah, I'm not in the mood";
					cout << compOutput << endl;
					compOutputLine2 = "";
					compOutputLine3 = "";
				}
			}
		} 
		else if (personality == "3") {
			if (currentType == "Change Personality" || currentType == "change personality" || currentType == "Change personality") {
					compOutput = "What??";
					cout << compOutput << endl;
					Sleep(1500);
					cout << "Haha just kidding" << endl;
					personality = "";
					while (personality != "1" && personality != "2" && personality != "3") {
						cout << "What Veebo personality would you like?" << endl;
						cout << "1. Classic Vebbo (Default)" << endl;
						cout << "2. Sassy Veebo" << endl;
						cout << "3. Illiterate Veebo" << endl;
						getline(cin, personality);
						if (personality == "1" || personality == "2" || personality == "3") {
							ofstream writerPersonality1(currentP);
							if (!writerPersonality1) {
								cout << "Error opening file..." << endl;
							}
							else {
								writerPersonality1 << personality;
								writerPersonality1.close();
							}
							cout << "You can change this at any time by typing 'Change Personality'" << endl;
						}
						else {
							cout << "Please try again and select a valid number" << endl;
						}
					}
					compOutputLine2 = "";
					compOutputLine3 = "";
			}
			else {
				randInt = rand() % 8 + 1; //rand char
				if (randInt == 1) {
					compOutput = "Sorry, I can't read";
					cout << compOutput << endl;
				}
				else if (randInt == 2) {
					compOutput = "I LITERALLY HAVE NO IDEA WHAT YOU'RE SAYING";
					cout << compOutput << endl;
				}
				else if (randInt == 3) {
					compOutput = "Thats great";
					cout << compOutput << endl;
				}
				else if (randInt == 4) {
					Sleep(300);
					randInt = rand() % 3 + 1; //rand char
					if (randInt == 1) {
						compOutput = "Oh, you want to change your name to 'Glooble Shnooble'";
						cout << compOutput << endl;
						name = "Glooble Shnooble";
					}
					else if (randInt == 2) {
						compOutput = "Oh, you want to change your name to 'COW EATER'";
						cout << compOutput << endl;
						name = "CLOWN EATER";
					}
					else {
						compOutput = "Oh, you want to change your name to 'Vegan Cow'";
						cout << compOutput << endl;
						name = "Vegan Cow";
					}
					ofstream writerhaha(currentN);
					if (!writerhaha) {
						cout << "Error 6543 opening file..." << endl;
					}
					else {
						writerhaha << name << endl;
						writerhaha.close();
					}
					Sleep(700);
					cout << "Your request has been satisfied" << endl;
				}
				else if (randInt == 5) {
					compOutput = "Yes, hi, my name is Illiterate Veebo, probably because I can't understand what you're saying";
					cout << compOutput << endl;
				}
				else if (randInt == 6) {
					tempString = "";
					while (tempString != "vvvvvv") {
						cout << "Why ";
						system("color 0F");
						system("color 87");
						system("color 9E");
						system("color 26");
						system("color AD");
						cout << "would ";
						system("color 35");
						system("color BC");
						system("color 44");
						cout << "you ";
						system("color CB");
						system("color 53");
						system("color DA");
						cout << "do ";
						system("color 62");
						system("color E9");
						cout << "this ";
						system("color 71");
						cout << "to ";
						system("color F0");
						cout << "me?   ";
						tempString += "v";
					}
					cout << endl;
				}
				else if (randInt == 7) {
					compOutput = "I WILL KILL YOU FIRST";
					cout << compOutput << endl;
				}
				else {
					compOutput = "What?";
					cout << compOutput << endl;
				}
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else if (personality == "4") {
			cout << "This personality is not currently functional" << endl;
			cout << "Type 'change personality' to change" << endl;
			if (currentType == "Change Personality" || currentType == "change personality" || currentType == "Change personality") {
				compOutput = "Changing";
				personality = "";
				while (personality != "1" && personality != "2" && personality != "3") {
					cout << "What Veebo personality would you like?" << endl;
					cout << "1. Classic Vebbo (Default)" << endl;
					cout << "2. Sassy Veebo" << endl;
					cout << "3. Illiterate Veebo" << endl;
					getline(cin, personality);
					if (personality == "1" || personality == "2" || personality == "3") {
						ofstream writerPersonality1(currentP);
						if (!writerPersonality1) {
							cout << "Error opening file..." << endl;
						}
						else {
							writerPersonality1 << personality;
							writerPersonality1.close();
						}
						cout << "You can change this at any time by typing 'Change Personality'" << endl;
					}
					else {
						cout << "Please try again and select a valid number" << endl;
					}
				}
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else {
		if (currentType == "Hi" || currentType == "hi") {
			compOutput = "Hey ";
			compOutputLine2 = name;
			if (name == "") {
				compOutput.pop_back();
			}
			compOutputLine3 = "! Whats up?";
			cout << compOutput << compOutputLine2 << compOutputLine3 << endl;
		}
		else if (currentType == "Hey" || currentType == "hey") {
			compOutput = "Hi! How are ya doing?";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Show history" || currentType == "show history") {
			if (account == "GUEST") {
				cout << "This feature is unavailable as a guest user" << endl;
			}
			else {
				ifstream read(currentB);
				for (int i = 0; !read.eof(); i++) {
					read.get(letter);
					tempString += letter;
				}
				read.close();
				cout << tempString << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else if (currentType == "Update" || currentType == "update") {
			update();
			if (tempString == "0") {
				return 0;
			}
		} 
		else if (currentType == "infect me" || currentType == "Infect me") {
			cout << "Starting in 10 seconds... This will not harm your computer" << endl;
			cout << "Veebo will stop after around 45 seconds.." << endl << "Right click on the icon on your taskbar and select 'Close all windows' to close" << endl;
			Sleep(10000);
			ofstream writerinfect("virus.txt");
			writerinfect << "I";
			CString str = "C:/Veebo/Veebo.exe";
			CString action = "open";
			ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
			compOutputLine2 = "";
			compOutputLine3 = "";
			Sleep(15000);
			writerinfect.close();
			ofstream writerinfect3("virus.txt");
			writerinfect3 << "G";
			writerinfect3.close();

			}
		else if (currentType == "whats my name" || currentType == "Whats my name?") {
			if (account == "GUEST") {
				cout << "This feature is unavailable as a guest user" << endl;
			}
			else {
				compOutput = "Your name is ";
				cout << compOutput;
				cout << name << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else if (currentType == "Add user" || currentType == "New user" || currentType == "add user" || currentType == "new user" || currentType == "create user" || currentType == "Create user" || currentType == "Add account" || currentType == "New account" || currentType == "add account" || currentType == "new account" || currentType == "create account" || currentType == "Create account") {
			addUser();
			if (dointro != "MnM") {
				startup();
				ifstream reader2994(currentY);
				reader2994.get(letter);
				if (letter == 'Y') {
					name = "";
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
				}
			}
		}
		else if (currentType == "logout" || currentType == "Logout" || currentType == "log out" || currentType == "Log out") {
			logout();
			ruffruff = "";
		}
		else if (currentType == "Delete user" || currentType == "delete user" || currentType == "remove user" || currentType == "Remove user") {
			didalready = "";
			while (didalready != "mnm") {
				removeUser();
			}
		}
		else if (currentType == "Add password" || currentType == "add password") {
			if (account == "GUEST") {
				cout << "This feature is unavailable as a guest user" << endl;
			}
			else {
				cout << "Coming Soon... For now type my info" << endl;
			}
		}
		else if (currentType == "Disable secure mode" || currentType == "disable secure mode" || currentType == "disable Secure mode" || currentType == "disable Secure Mode" || currentType == "Disable Secure mode" || currentType == "Disable Secure Mode") {
			//USER 1
			//decrypt old password with old key
			cryptMessage = "";
			ifstream getpassworduser1(nastpass1);
			if (!getpassworduser1) {

			}
			else {
				for (int i = 0; !getpassworduser1.eof(); i++) {
					getpassworduser1.get(letter);
					cryptMessage += letter;
				}
				getpassworduser1.close();
				cryptMessage.pop_back();
				decryptionbone();               ////
			}
			//save old password to file
			ofstream savepassworduser1(nastpass1); 
			savepassworduser1 << cryptMessage;
			savepassworduser1.close();

			//USER 2
			//decrypt old password with old key
			cryptMessage = "";
			ifstream getpassworduser2(nastpass2);
			if (!getpassworduser2) {

			}
			else {
				for (int i = 0; !getpassworduser2.eof(); i++) {
					getpassworduser2.get(letter);
					cryptMessage += letter;
				}
				getpassworduser2.close();
				cryptMessage.pop_back();
				decryptionbone();               ////
			}
			//save old password to file
			ofstream savepassworduser2(nastpass2);
			savepassworduser2 << cryptMessage;
			savepassworduser2.close();

			//USER 3
			//decrypt old password with old key
			cryptMessage = "";
			ifstream getpassworduser3(nastpass3);
			if (!getpassworduser3) {

			}
			else {
				for (int i = 0; !getpassworduser3.eof(); i++) {
					getpassworduser3.get(letter);
					cryptMessage += letter;
				}
				getpassworduser3.close();
				cryptMessage.pop_back();
				decryptionbone();               ////
			}
			//save old password to file
			ofstream savepassworduser3(nastpass3);
			savepassworduser3 << cryptMessage;
			savepassworduser3.close();

			//USER 4
			//decrypt old password with old key
			cryptMessage = "";
			ifstream getpassworduser4(nastpass4);
			if (!getpassworduser4) {

			}
			else {
				for (int i = 0; !getpassworduser4.eof(); i++) {
					getpassworduser4.get(letter);
					cryptMessage += letter;
				}
				getpassworduser4.close();
				cryptMessage.pop_back();
				decryptionbone();               ////
			}
			//save old password to file
			ofstream savepassworduser4(nastpass4);
			savepassworduser4 << cryptMessage;
			savepassworduser4.close();

			ofstream writer267("bone.txt");
			writer267 << "QetYiOAdFhkLxvBm269:([?^+RyUaSJlCbN58#}-WroPfGjZc14<{@=wTusDKzVnM70" << endl;
			writer267.close();
			ofstream writer268("btwo.txt");
			writer268 << "0>{]!=wEtuIpADgHkzXvnM36)[&QeYidFLxBm29:(?^RyOaShJlCb58}-+WrUofGZcN" << endl;
			writer268.close();
			//USER 1
			//encrypt password with new key
			cryptMessage = "";
			ifstream getpassworduser1a(nastpass1);
			if (!getpassworduser1a) {

			}
			else {
				for (int i = 0; !getpassworduser1a.eof(); i++) {
					getpassworduser1a.get(letter);
					cryptMessage += letter;
				}
				getpassworduser1a.close();
				cryptMessage.pop_back();
				encryptionbone();
			}
			//save new password to file
			ofstream savepassworduser1a(nastpass1);
			savepassworduser1a << cryptMessage;
			savepassworduser1a.close();

			//USER 2
			//encrypt password with new key
			cryptMessage = "";
			ifstream getpassworduser2a(nastpass2);
			if (!getpassworduser2a) {

			}
			else {
				for (int i = 0; !getpassworduser2a.eof(); i++) {
					getpassworduser2a.get(letter);
					cryptMessage += letter;
				}
				getpassworduser2a.close();
				cryptMessage.pop_back();
				encryptionbone();
			}
			//save new password to file
			ofstream savepassworduser2a(nastpass2);
			savepassworduser2a << cryptMessage;
			savepassworduser2a.close();

			//USER 3
			//encrypt password with new key
			cryptMessage = "";
			ifstream getpassworduser3a(nastpass3);
			if (!getpassworduser3a) {

			}
			else {
				for (int i = 0; !getpassworduser3a.eof(); i++) {
					getpassworduser3a.get(letter);
					cryptMessage += letter;
				}
				getpassworduser3a.close();
				cryptMessage.pop_back();
				encryptionbone();
			}
			//save new password to file
			ofstream savepassworduser3a(nastpass3);
			savepassworduser3a << cryptMessage;
			savepassworduser3a.close();

			//USER 4
			//encrypt password with new key
			cryptMessage = "";
			ifstream getpassworduser4a(nastpass4);
			if (!getpassworduser4a) {

			}
			else {
				for (int i = 0; !getpassworduser4a.eof(); i++) {
					getpassworduser4a.get(letter);
					cryptMessage += letter;
				}
				getpassworduser4a.close();
				cryptMessage.pop_back();
				encryptionbone();
			}
			//save new password to file
			ofstream savepassworduser4a(nastpass4);
			savepassworduser4a << cryptMessage;
			savepassworduser4a.close();

			compOutput = "Secure Mode has been disabled, keys have been reset";
			cout << compOutput << endl;
		}
		else if (currentType == "Enable secure mode" || currentType == "enable secure mode" || currentType == "enable Secure mode" || currentType == "enable Secure Mode" || currentType == "Enable Secure mode" || currentType == "Enable Secure Mode") {
			//USER 1
			//decrypt old password with old key
			cryptMessage = "";
			ifstream getpassworduser1c(nastpass1);
			if (!getpassworduser1c) {

			}
			else {
				for (int i = 0; !getpassworduser1c.eof(); i++) {
					getpassworduser1c.get(letter);
					cryptMessage += letter;
				}
				getpassworduser1c.close();
				cryptMessage.pop_back();
				decryptionbone();               ////
			}
			//save old password to file
			ofstream savepassworduser1c(nastpass1);
			savepassworduser1c << cryptMessage;
			savepassworduser1c.close();

			//USER 2
			//decrypt old password with old key
			cryptMessage = "";
			ifstream getpassworduser2c(nastpass2);
			if (!getpassworduser2c) {

			}
			else {
				for (int i = 0; !getpassworduser2c.eof(); i++) {
					getpassworduser2c.get(letter);
					cryptMessage += letter;
				}
				getpassworduser2c.close();
				cryptMessage.pop_back();
				decryptionbone();               ////
			}
			//save old password to file
			ofstream savepassworduser2c(nastpass2);
			savepassworduser2c << cryptMessage;
			savepassworduser2c.close();

			//USER 3
			//decrypt old password with old key
			cryptMessage = "";
			ifstream getpassworduser3c(nastpass3);
			if (!getpassworduser3c) {

			}
			else {
				for (int i = 0; !getpassworduser3c.eof(); i++) {
					getpassworduser3c.get(letter);
					cryptMessage += letter;
				}
				getpassworduser3c.close();
				cryptMessage.pop_back();
				decryptionbone();               ////
			}
			//save old password to file
			ofstream savepassworduser3c(nastpass3);
			savepassworduser3c << cryptMessage;
			savepassworduser3c.close();

			//USER 4
			//decrypt old password with old key
			cryptMessage = "";
			ifstream getpassworduser4c(nastpass4);
			if (!getpassworduser4c) {

			}
			else {
				for (int i = 0; !getpassworduser4c.eof(); i++) {
					getpassworduser4c.get(letter);
					cryptMessage += letter;
				}
				getpassworduser4c.close();
				cryptMessage.pop_back();
				decryptionbone();               ////
			}
			//save old password to file
			ofstream savepassworduser4c(nastpass4);
			savepassworduser4c << cryptMessage;
			savepassworduser4c.close();

			ofstream passnotdone("passnotdone.txt");
			passnotdone << "Y";
			passnotdone.close();

			t2();

			ofstream passnotdone2("passnotdone.txt");
			passnotdone2 << "N";
			passnotdone2.close();

			//encrypt password with new key
			cryptMessage = "";
			ifstream getpassworduser1d(nastpass1);
			if (!getpassworduser1d) {

			}
			else {
				for (int i = 0; !getpassworduser1d.eof(); i++) {
					getpassworduser1d.get(letter);
					cryptMessage += letter;
				}
				getpassworduser1d.close();
				cryptMessage.pop_back();
				encryptionbone();
			}
			//save new password to file
			ofstream savepassworduser1d(nastpass1);
			savepassworduser1d << cryptMessage;
			savepassworduser1d.close();

			//USER 2
			//encrypt password with new key
			cryptMessage = "";
			ifstream getpassworduser2d(nastpass2);
			if (!getpassworduser2d) {

			}
			else {
				for (int i = 0; !getpassworduser2d.eof(); i++) {
					getpassworduser2d.get(letter);
					cryptMessage += letter;
				}
				getpassworduser2d.close();
				cryptMessage.pop_back();
				encryptionbone();
			}
			//save new password to file
			ofstream savepassworduser2d(nastpass2);
			savepassworduser2d << cryptMessage;
			savepassworduser2d.close();

			//USER 3
			//encrypt password with new key
			cryptMessage = "";
			ifstream getpassworduser3d(nastpass3);
			if (!getpassworduser3d) {

			}
			else {
				for (int i = 0; !getpassworduser3d.eof(); i++) {
					getpassworduser3d.get(letter);
					cryptMessage += letter;
				}
				getpassworduser3d.close();
				cryptMessage.pop_back();
				encryptionbone();
			}
			//save new password to file
			ofstream savepassworduser3d(nastpass3);
			savepassworduser3d << cryptMessage;
			savepassworduser3d.close();

			//USER 4
			//encrypt password with new key
			cryptMessage = "";
			ifstream getpassworduser4d(nastpass4);
			if (!getpassworduser4d) {

			}
			else {
				for (int i = 0; !getpassworduser4d.eof(); i++) {
					getpassworduser4d.get(letter);
					cryptMessage += letter;
				}
				getpassworduser4d.close();
				cryptMessage.pop_back();
				encryptionbone();
			}
			//save new password to file
			ofstream savepassworduser4d(nastpass4);
			savepassworduser4d << cryptMessage;
			savepassworduser4d.close();
			logout();
			compOutput = "Secure Mode has been enabled, keys have been generated and saved";
			cout << compOutput << endl;
		}
		else if (currentType == "Disable intro" || currentType == "disable intro") {
			ofstream writerintro("startup.txt");
			writerintro << "S";
			writerintro.close();
			compOutput = "Veebo intro disabled. The intro will no longer play during startup";
			cout << compOutput << endl;
		}
		else if (currentType == "" || currentType == " ") {
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Enable intro" || currentType == "enable intro") {
			ofstream writerintro("startup.txt");
			writerintro << "";
			writerintro.close();
			compOutput = "Veebo intro enabled. The intro will now play for all users";
			cout << compOutput << endl;
		}
		else if (currentType == "Cool" || currentType == "cool") {
			compOutput = "Coolio";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Change Personality" || currentType == "change personality" || currentType == "Change personality") {
			if (account == "GUEST") {
				cout << "This feature is unavailable as a guest user" << endl;
			}
			else {
				compOutput = "Changing";
				personality = "";
				while (personality != "1" && personality != "2" && personality != "3") {
					cout << "What Veebo personality would you like?" << endl;
					cout << "1. Classic Vebbo (Default)" << endl;
					cout << "2. Sassy Veebo" << endl;
					cout << "3. Illiterate Veebo" << endl;
					getline(cin, personality);
					if (personality == "1" || personality == "2" || personality == "3") {
						ofstream writerPersonality1(currentP);
						if (!writerPersonality1) {
							cout << "Error opening file..." << endl;
						}
						else {
							writerPersonality1 << personality;
							writerPersonality1.close();
						}
						cout << "You can change this at any time by typing 'Change Personality'" << endl;
					}
					else {
						cout << "Please try again and select a valid number" << endl;
					}
				}
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else if (currentType == "Install beta profile" || currentType == "Install Beta Profile" || currentType == "Install Beta profile" || currentType == "install beta profile" || currentType == "Install beta software profile" || currentType == "Install Beta Software Profile" || currentType == "Install Beta software profile" || currentType == "install beta software profile") {
			compOutput = "Whatever, I'll check...";
			compOutputLine2 = "";
			compOutputLine3 = "";
			ifstream readerbetaprofile("BetaProfile.txt");
			if (!readerbetaprofile) {
				cout << "Preparing for installation" << endl;
				CString str = "C:/Veebo/OTAnew/installbeta.vbs";
				CString action = "open";
				ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
				letter = '_';
				updateabort = 0;
				installdone = "";
				while (installdone != "G" && updateabort < 50) {
					ifstream readerbetaprofile5("BetaProfile.txt");
					if (!readerbetaprofile5) {
					}
					else {
						installdone = "G";
					}
					readerbetaprofile5.close();
					Sleep(500);
					cout << ".";
					updateabort++;
					tempString = "";
				}
				if (updateabort == 50 || updateabort == 51) {
					cout << "\nThere was an error while downloading the beta profile. Please check your internet connection and try again." << endl;
				}
				else {
					cout << "\nInstallation complete. Type 'update' to check if new beta software is available" << endl;
				}
			}
			else {
				cout << "Beta profile is already installed." << endl << "Type 'uninstall beta profile' to uninstall or 'update' to check if new beta software is available" << endl;
			}
			readerbetaprofile.close();
		}
		else if (currentType == "Uninstall beta profile" || currentType == "Uninstall Beta Profile" || currentType == "Uninstall Beta profile" || currentType == "uninstall beta profile" || currentType == "Uninstall beta software profile" || currentType == "Uninstall Beta Profile" || currentType == "Uninstall Beta Software profile" || currentType == "uninstall beta software profile") {
			compOutput = "Whatever, I'll check...";
			compOutputLine2 = "";
			compOutputLine3 = "";
			ifstream readerbetaprofile1("BetaProfile.txt");
			if (!readerbetaprofile1) {
				cout << "Beta profile is not installed. Type 'install beta profile' to install it" << endl;
			}
			else {
				readerbetaprofile1.close();
				cout << "Preparing for uninstallation" << endl;
				CString str = "C:/Veebo/OTAnew/uninstallbeta.vbs";
				CString action = "open";
				ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
				letter = '_';
				updateabort = 0;
				installdone = "";
				while (installdone != "G" && updateabort < 50) {
					ifstream readerbetaprofile6("BetaProfile.txt");
					if (!readerbetaprofile6) {
						installdone = "G";
					}
					readerbetaprofile6.close();
					Sleep(500);
					cout << ".";
					updateabort++;
					tempString = "";
				}
				if (updateabort == 50 || updateabort == 51) {
					cout << "\nThere was an error while downloading the beta profile. Please check your internet connection and try again." << endl;
				}
				else {
					cout << "\nUninstallation complete. Type 'update' to check if new software is available" << endl;
				}
			}
			readerbetaprofile1.close();
		}
		else if (currentType == "Rainbow" || currentType == "rainbow") {
			tempString = "";
			while (tempString != "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv") {
				compOutput = "do do do do ";
				cout << compOutput;
				system("color 0F");
				system("color 87");
				system("color 9E");
				system("color 26");
				system("color AD");
				system("color 35");
				system("color BC");
				system("color 44");
				system("color CB");
				system("color 53");
				system("color DA");
				system("color 62");
				system("color E9");
				system("color 71");
				system("color F8");
				tempString += "v";
			}
		}
		else if (currentType == "..." || currentType == "....") {
			compOutput = "Right back at you";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "open website" || currentType == "Open website") {
			//ShellExecute(0, 0, L"http://www.google.com", 0, 0, SW_SHOW);
			compOutput = "Please input the website. ie: google.com";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
			cin >> myUrl;
			system(std::string("start " + http + myUrl).c_str());
			cout << "Okay..." << endl;
			cin.ignore();
		}
		else if (currentType == "Giggles" || currentType == "giggles" || currentType == "Open Giggles" || currentType == "open giggles" || currentType == "open Giggles" || currentType == "Open giggles") {
			compOutput = "Starting";
			cout << compOutput;
			compOutputLine2 = "";
			compOutputLine3 = "";
			Sleep(200);
			cout << ".";
			Sleep(200);
			cout << ".";
			Sleep(200);
			cout << ".";
			Sleep(200);
			system("CLS");
			giggles();
			system("CLS");
			startup();
			cout << "Hi " << name << ", welcome back to Veebo! Say hi, or ask me a question!" << endl;
			cout << "You can also type 'help' for a list of cool features currently available" << endl;
		}
		else if (currentType == "Cryption" || currentType == "cryption" || currentType == "Open Cryption" || currentType == "open cryption" || currentType == "open Cryption" || currentType == "Open cryption") {
			compOutput = "Starting";
			cout << compOutput;
			compOutputLine2 = "";
			compOutputLine3 = "";
			Sleep(200);
			cout << ".";
			Sleep(200);
			cout << ".";
			Sleep(200);
			cout << ".";
			Sleep(200);
			system("CLS");
			cryption();
			system("CLS");
			startup();
			cout << "Hi " << name << ", welcome back to Veebo! Say hi, or ask me a question!" << endl;
			cout << "You can also type 'help' for a list of cool features currently available" << endl;
		}
		else if (currentType == "google" || currentType == "Google") {
			compOutput = "What would you like to search for";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
			getline(cin, myUrl);
			urcomp = myUrl;
			letter3 = 0;
			letter2 = 0;
			myUrl += "*";
			urcomp += "                                                                     "; //to alow extra space
			while (myUrl[letter2] != '*'){
				urcomp[letter3] = myUrl[letter2];
				if (urcomp[letter3] == ' '){
					//replace with %20
					urcomp[letter3] = '%';
					letter3++;
					urcomp[letter3] = '2';
					letter3++;
					urcomp[letter3] = '0';
				}
				letter2++;
				letter3++;
			}
			system(std::string("start " + search + urcomp).c_str());
			cout << "Okay..." << endl;
		}
		else if (currentType == "My info" || currentType == "my info" || currentType == "My Info") {
			if (account == "GUEST") {
				cout << "This feature is unavailable as a guest user" << endl;
			}
			else {
				createUser();
			}
		}
		else if (currentType == "ok" || currentType == "Ok" || currentType == "okay") {
			compOutput = "Ok...";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Whats new?" || currentType == "whats new?" || currentType == "What's new?" || currentType == "what's new?" || currentType == "Whats new" || currentType == "whats new" || currentType == "What's new" || currentType == "what's new") {
			whatsnewinveebo();
		}
		else if (currentType == "yes" || currentType == "sure" || currentType == "Yes") {
			compOutput = "Yay!";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "disable auto update" || currentType == "Disable auto update" || currentType == "Disable Auto Update") {
			compOutput = "Okay, you can update at any time by typing 'update'";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
			ofstream writer3069("autoupdate.txt");
			if (!writer3069) {
			}
			else {
				writer3069 << "No";
				writer3069.close();
			}
		}
		else if (currentType == "Change theme" || currentType == "change theme" || currentType == "Change Theme") {
			if (account == "GUEST") {
				cout << "This feature is unavailable as a guest user" << endl;
			}
			else {
				compOutput = "Would you like a black theme or white theme? (White/Black)";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
				getline(cin, IDE);
				if (IDE == "White" || IDE == "white" || IDE == "W" || IDE == "w") {
					system("color F0");
					cout << "Okay" << endl;
					IDE = "W";
					ofstream writer30(currentT);
					if (!writer30) {
						cout << "Error opening file..." << endl;
					}
					else {
						writer30 << IDE << endl;
						writer30.close();
					}
				}
				else if (IDE == "Black" || IDE == "black" || IDE == "B" || IDE == "b") {
					system("color 0F");
					cout << "Okay" << endl;
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
					cout << "Invalid entry" << endl;
				}
			}
		}
		else if (currentType == "no" || currentType == "nah" || currentType == "no thanks" || currentType == "No") {
			compOutput = "Okay :(";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "nothing" || currentType == "Nothing" || currentType == "nothin" || currentType == "nothing much") {
			compOutput = "Haha get a life";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "good" || currentType == "pretty good") {
			compOutput = "Thats nice...";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "bad" || currentType == "Bad") {
			compOutput = "Let's get spicy";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "you suck" || currentType == "You suck") {
			compOutput = "You swallow";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "start a stopwatch" || currentType == "stopwatch" || currentType == "Stopwatch" || currentType == "Start a stopwatch" || currentType == "start a stop watch" || currentType == "stop watch" || currentType == "Stop watch" || currentType == "Start a stop watch") {
			system("CLS");
			compOutput = "0:00";
			cout << compOutput << endl;
			seconds = 0;
			minutes = 0;
			while (minutes != 60) {
				while (seconds != 60) {
					Sleep(968);
					system("CLS");
					seconds++;
					cout << minutes << ":";
					if (seconds < 10) {
						cout << "0";
					}
					cout << seconds;
				}
				minutes++;
				system("CLS");
				seconds = 0;
				cout << minutes << ":00";
			}
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "yep" || currentType == "yepy" || currentType == "yeee" || currentType == "yeah") {
			compOutput = "Yepio";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "lol" || currentType == "LOL" || currentType == "Lol") {
			compOutput = "Okay I will, HAHAHAHAHAHAHAHHA";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "no I dont think you get it" || currentType == "No I don't think you get it" || currentType == "no I don't think you get it" || currentType == "I dont think you get it" || currentType == "i dont think you get it") {
			compOutput = "I don't think I understand... JK I know everything, I think what you don't get is life";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "spacex" || currentType == "SpaceX" || currentType == "Spacex" || currentType == "spaceX") {
			ifstream readerspacex5("spacex.txt");
			if (!readerspacex5) {
				ShellExecute(0, 0, L"https://youtu.be/BLbSuxz9KNk", 0, 0, SW_SHOW);
				Sleep(15000);
			}
			ofstream writerspacex("spacex.txt");
			writerspacex << "I";
			writerspacex.close();
			ShellExecute(0, 0, L"https://www.youtube.com/watch?v=212yLH0zyi4", 0, 0, SW_SHOW);
			Sleep(2000);
			CString str = "C:/Veebo/Veebo.exe";
			CString action = "open";
			ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
			cout << "Enjoy the show" << endl;
			Sleep(2000);
			ofstream writerspacex3("spacex.txt");
			writerspacex3 << "G";
			writerspacex3.close();
		}
		else if (currentType == "hello" || currentType == "Hello" || currentType == "hello?") {
			compOutput = "from the other side...";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "report bug" || currentType == "Report Bug" || currentType == "Report bug") {
			compOutput = "You can report a bug here...";
			ShellExecute(0, 0, L"https://ipoogleduck.typeform.com/to/ridTq8", 0, 0, SW_SHOW);
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Uh" || currentType == "Uhh" || currentType == "Uh..." || currentType == "Uh.." || currentType == "uh" || currentType == "uhh" || currentType == "uh..." || currentType == "uh..") {
			compOutput = "Yes?";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Please" || currentType == "please" || currentType == "Please!" || currentType == "please!" || currentType == "Please?" || currentType == "Please?") {
			compOutput = "Hell no";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "What's your favorite animal" || currentType == "What's your favorite animal?" || currentType == "what's your favorite animal" || currentType == "what's your favorite animal?" || currentType == "Whats your favorite animal" || currentType == "Whats your favorite animal?" || currentType == "whats your favorite animal" || currentType == "whats your favorite animal?" || currentType == "What is your favorite animal" || currentType == "What is your favorite animal?" || currentType == "what is your favorite animal" || currentType == "what is your favorite animal?") {
			compOutput = "Maybe a giant Slor, Many Shuvs and Zuuls knew what it was to be roasted in the depths of the Slor that day, I can tell you!";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Tell me a joke" || currentType == "tell me a joke") {
			randInt = rand() % 6 + 1; //rand char
			if (randInt == 1) {
				cout << "The past, present and future walk into a bar. It was tense." << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 2) {
				compOutput = "My dog used to chase people on a bike a lot. It got so bad, finally I had to take his bike away.";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 3) {
				compOutput = "What is the difference between a snowman and a snowwoman?";
				cout << compOutput << endl;
				cout << "Snowballs." << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 4) {
				compOutput = "Today at the bank, an old lady asked me to help check her balance. So I pushed her over.";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 5) {
				compOutput = "Why is Peter Pan always flying? He neverlands.";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else {
				compOutput = "Why did the old man fall in the well? Because he couldn't see that well.";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else if (currentType == "I must have called a thousand times" || currentType == "i must have called a thousand times") {
			compOutput = "To tell you I'm sorry for";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "everything that I've done" || currentType == "everything that ive done" || currentType == "everything that Ive done" || currentType == "everything that i've done") {
			compOutput = "But when I call you never";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "seem to be home" || currentType == "Seem to be home") {
			compOutput = "Well to bad. Deal with it";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "sup" || currentType == "whats up?" || currentType == "what's up?" || currentType == "whats up" || currentType == "Whats up" || currentType == "Sup" || currentType == "sup dog") {
			randInt = rand() % 3 + 1; //rand char
			if (randInt == 1) {
				cout << "Just hacking your computer" << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 2) {
				compOutput = "Trying to kill time... literally";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else {
				compOutput = "Nothing much... What about you?";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else if (currentType == "What did the fox say" || currentType == "what did the fox say" || currentType == "what did the fox say?" || currentType == "What did the fox say?") {
			compOutput = "chi chi chow chi chi chi chow";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "What time is it" || currentType == "What time is it?" || currentType == "what time is it" || currentType == "what time is it?") {
			compOutput = "Time to get a watch";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "What about you" || currentType == "What about you?" || currentType == "what about you" || currentType == "what about you?") {
			compOutput = "What about me?";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "wtf" || currentType == "WTF" || currentType == "wtf?" || currentType == "Wtf") {
			compOutput = "Welcome to Facebook";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Really?" || currentType == "really?" || currentType == "really" || currentType == "Really") {
			compOutput = "Yes, really";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "a" || currentType == "A" || currentType == "a " || currentType == "A ") {
			compOutput = "Nay";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "I love you" || currentType == "i love you" || currentType == "I love you!" || currentType == "i love you!") {
			compOutput = "I love you too!!";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}

		else if (currentType == "go away" || currentType == "Go away" || currentType == "go away!" || currentType == "GO AWAY!" || currentType == "bye" || currentType == "Bye" || currentType == "bye!") {
			compOutput = "tootaloo";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
			return 0;
		}
		else if (currentType == "I hate you" || currentType == "i hate you" || currentType == "I hate you!" || currentType == "i hate you!") {
			compOutput = "I hate you too!";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "what is 2 plus 2" || currentType == "whats 2 plus 2" || currentType == "what's 2 plus 2" || currentType == "what is 2+2" || currentType == "whats 2+2" || currentType == "what's 2+2" || currentType == "What is 2+2") {
			compOutput = "Figure it out yourself.";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Should I do it?" || currentType == "Should I do it" || currentType == "should I do it" || currentType == "should I do it?" || currentType == "should i do it?" || currentType == "should i do it" || currentType == "Should i do it?") {
			compOutput = "YOLO";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "What's 0/0" || currentType == "Whats 0/0" || currentType == "whats 0/0" || currentType == "what's 0/0") {
			compOutput = "Get a life";
			cout << "Imagine that you have 0 cookies and you split them evenly among 0 friends." << endl
				<< "How many cookies does each person get? See, it doesn't make sense." << endl
				<< "Cookie Monster is sad that there are no cookies, and you are sad that you have no life." << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}

		else if (currentType == "help" || currentType == "Help") {
			help();
		}
		else if (currentType == "69") {
			compOutput = "420";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "fuck" || currentType == "shit" || currentType == "ass" || currentType == "dick" || currentType == "thicc"
			|| currentType == "cunt" || currentType == "bitch" || currentType == "stupid" || currentType == "idiot" || currentType == "retard"
			|| currentType == "lame" || currentType == "jerk" || currentType == "fuck you" || currentType == "Fuck you") { //stops user from using bad words
			compOutput = "If you say the ";
			compOutputLine2 = currentType;
			compOutputLine3 = " word one more time i'll report you to the FBI";
			cout << compOutput << compOutputLine2 << compOutputLine3 << endl;
			lastType = currentType;
			getline(cin, currentType);
			if (currentType == lastType) {
				for (int i = 0; i < 20000; ++i) {
					cout << "HA";
				}
				return 0;
			}
			else {
				cout << "Good" << endl;
			}
		}
		else if (currentType == "kys" || currentType == "Kys" || currentType == "go kys" || currentType == "Go kys") {
			compOutput = "I WILL KILL YOU FIRST";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "I don't care" || currentType == "i don't care" || currentType == "I dont care" || currentType == "i dont care") {
			compOutput = "Go kys";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "flip a coin" || currentType == "Flip a coin" || currentType == "Flip" || currentType == "coin" || currentType == "tails" || currentType == "heads") {
			randInt = rand() % 3 + 1; //rand char
			if (randInt == 1) {
				cout << "Heads" << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 2) {
				compOutput = "Heads"; //Shhhh pretend this isn't rigged
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else {
				compOutput = "Tails";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else if (currentType == "roll a die" || currentType == "Roll a die" || currentType == "Roll a dice" || currentType == "roll a dice") {
			randInt = rand() % 6 + 1; //rand char
			if (randInt == 1) {
				cout << "1" << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 2) {
				compOutput = "2";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 3) {
				compOutput = "4";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 4) {
				compOutput = "5";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 5) {
				compOutput = "6"; 
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else {
				compOutput = "3";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
		}
		else if (currentType == "what" || currentType == "what?" || currentType == "What" || currentType == "What?" ||
			currentType == "what was that") {
			cout << "You said '" << lastType << "'"<< endl;
			cout << "And I said '" << compOutput << compOutputLine2 << compOutputLine3 << "'" << endl;
		}
		else {
			randInt = rand() % 3 + 1; //rand char
			if (randInt == 1) {
				cout << "I'm not sure I understand." << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else if (randInt == 2) {
				compOutput = "I'm sorry, I don't think I know the answer to that...";
				cout << compOutput << endl;
				compOutputLine2 = "";
				compOutputLine3 = "";
			}
			else {
				compOutput = "I'm sorry, I don't know what you mean by '";
				compOutputLine2 = currentType;
				compOutputLine3 = "'";
				cout << compOutput << compOutputLine2 << compOutputLine3 << endl;
			}
		}
		}
		lastType = currentType; //moves question to lastType in case user asks to repeate question or for other uses
		lastRandInt = randInt; //moves last random int over
		if (backgroundupdateyorn != "No") {

			checkbackgroundupdate();

			if (tempString == "0") {
				return 0;
			}
		}
		else {
			ifstream readerbeta6("BetaProfile.txt");
			if (!readerbeta6) {
			}
			else {
			if (backgroundupdateyorn2 != "No") {
				if (backgroundupdatecheck != "No") {
						ofstream writer21111("done.txt");
						if (!writer21111) {
							cout << "Error opening file..." << endl;
						}
						else {
							writer21111 << "_";
							writer21111.close();
						}
						CString str = "C:/Veebo/OTAnew/BetaOpenInvisBat.vbs";
						CString action = "open";
						ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
						version = "";
						letter = '_';
						backgroundupdatecheck = "No";
					}
				}
				tempString = "1";
				checkbackgroundupdatebeta();

				if (tempString == "0") {
					return 0;
				}
			}
		}
		getline(cin, currentType); //asks for another input at end to avoid constant
		//BETA SURVEY:
		ofstream writer9(currentB, ios::app);

		if (!writer9) {
			ofstream writer9(currentB);
		}
			writer9 << lastType << endl << compOutput << compOutputLine2 << compOutputLine3 << endl << endl;
			writer9.close();
	}

	cout << "Type 'credits' for credits, otherwise click enter" << endl; //credits run after program is done
	getline(cin, currentType);
	if(currentType == "credits") {
		cout << "Service developed in C++ and designed for Windows" << endl <<
			"All code created by iPoogleDuck (Oliver)" << endl;
	}
	cout << "\nClick enter to close";
	cin.ignore();
    return 0;
}