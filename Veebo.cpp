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
string cversion = "0.4"; //this version
string compat; //compatible check from website
string ccompat = "AB"; //this compatible version
char letter; //leter of info user is at
int letter2;
int letter3;
string myUrl; //to start a url
string http = "http://"; //adds http
string search = "https://www.google.com/search?q=";
string urcomp; //to compare url 
string IDE = "W";
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

string currentY; //for storing current paths
string currentN;
string currentB;
string currentT;
string nastpass;
string logdid;

string passtype; //users input to password
string confirmpass; //confirm pass when making
string passcheckfile; //password of user
string diditlog; //for storing if user wants logdid yes or no

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
int main()
{
	system("color F0");
	startup();
	ifstream readerinfect("virus.txt");

		readerinfect.get(letter);
	gogo += letter;
	if (gogo == "I") {
		infect();
		infect();
		infect();
		infect();
		infect();
		infect();
		infect();
		infect();
		infect();
		infect();
		infect();
		infect();
	}
	ifstream readeriii(nastpass1);
	ifstream readeriiii(nastpass2);
	ifstream readeriiiii(nastpass3);
	ifstream readeriiiiii(nastpass4);
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
				t2();
				startup();
			}
	}
	ifstream reader8("yorn.txt");
	if (!reader8) {
		
	}
	else {
		reader8.get(letter);
		currentType += letter;
		reader8.close();
		if (letter == 'M') {

		}
		else {
			cin.ignore();
			transferFiles();
		}
	}
	ifstream readeru("bone.txt");
	ifstream readerm("btwo.txt");
	if (!readeru || !readerm || !readeru && !readerm) {
		t2();
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
	//decryptionbtwo();
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
				}
				if (passcheckfile != passtype) {
					logout();
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
						cout << "log4";
						cin.ignore();

						logout();
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
					cout << "log3";
					cin.ignore();
					logout();
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
			cout << "log2";
			cin.ignore();
		logout();
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
			}
			cryptMessage = passcheckfile; //
			//encryptionbtwo(); //
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
			}
			cryptMessage = passcheckfile;
			//encryptionbtwo();
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
			}
			cryptMessage = passcheckfile;
			//encryptionbtwo();
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
			}
			cryptMessage = passcheckfile;
			//encryptionbtwo();
			passcheckfile = cryptMessage;
			writetgg << passcheckfile;
		}
	}
	writetgg.close();

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
			cout << ", welcome to Veebo! Say hi, or ask me a question!" << endl;
			cout << "You can also type 'help' for a list of cool features currently available" << endl;
		}
		else {
			system("color F0");
			cout << "Hi Guest, welcome to Veebo!" << endl;
			cout << "As a guest, some features may not be availiable" << endl;
			account = "GUEST";
		}
		reader2.close();
	}
		ruffruff = "";

	srand(time(0)); // This will ensure a really randomized number by help of time
	getline(cin, currentType);
	randInt = rand() % 50 + 1; //rand char
	if (randInt == 22) {
		update();
		if (tempString == "0") {
			return 0;
		}
	}

	while(currentType != "exit") { //runs question loop until user inputs exit
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
		else if (currentType == "testcrypt" || currentType == "TestCrypt") {
			cout << "Type to decrypt with b1" << endl;
			getline(cin, cryptMessage);
			decryptionbone();
			cout << cryptMessage << endl;
			cout << "Type to crypt with b1" << endl;
			getline(cin, cryptMessage);
			encryptionbone();
			cout << cryptMessage << endl;
			cout << "Type to crypt with b2" << endl;
			getline(cin, cryptMessage);
			encryptionbtwo();
			cout << cryptMessage << endl;
			cout << "Type to decrypt with b2" << endl;
			getline(cin, cryptMessage);
			decryptionbtwo();
			cout << cryptMessage << endl;
			}
		else if (currentType == "infect me" || currentType == "Infect me") {
			ofstream writerinfect("virus.txt");
			writerinfect << "I";
			CString str = "C:/Veebo/Veebo.exe";
			CString action = "open";
			ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
			compOutputLine2 = "";
			compOutputLine3 = "";
			Sleep(1500);
			writerinfect << "G";
			writerinfect.close();
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
		else if (currentType == "Add user" || currentType == "New user" || currentType == "add user" || currentType == "new user") {
			addUser();
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
		else if (currentType == "Cool" || currentType == "cool") {
			compOutput = "Coolio";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Rainbow" || currentType == "rainbow") {
			tempString = "";
			while (tempString != "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv") {
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
			cout << "Veebo Version " << cversion << endl;
			compOutput = "-Accounts!"; //WHATS NEW FOR EACH UPDATE
			cout << "-Passwords for accounts" << endl;
			cout << compOutput << endl;
			cout << "-Guest users" << endl;
			cout << "-Bug fixes" << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "yes" || currentType == "sure" || currentType == "Yes") {
			compOutput = "Yay!";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
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
		else if (currentType == "hello" || currentType == "Hello" || currentType == "hello?") {
			compOutput = "from the other side...";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
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
			compOutput = "Here are some things you can ask me about:";
			cout << compOutput << endl;
			compOutputLine2 = " room::out--(not all items can fit on page)";
			cout << "-Type 'Add user' to add an account" << endl;
			cout << "-Type 'Log out' to log out of the current account info" << endl;
			cout << "-Type 'Delete user' to delete a user" << endl;
			cout << "-Type 'My info' to change the current account info" << endl;
			cout << "-Type 'Open website' to open a webpage" << endl;
			cout << "-Type 'Google' to search google for a website" << endl;
			cout << "-Type 'update' to check if there is an update available" << endl;
			cout << "-Type 'Whats new?' to find out whats new with each update" << endl;
			cout << "-Type 'Change theme' to change color or 'rainbow' to go crazy" << endl;
			cout << "-Type 'Show history' to show everything you have ever typed to Veebo" << endl;
			compOutputLine3 = "";
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
		lastType = currentType; //moves question to lastType in case user asks to repeate question or for other uses
		lastRandInt = randInt; //moves last random int over
		getline(cin, currentType); //asks for another input at end to avoid constant repeate
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
		cout << "Service developed in Cpp and designed for Windows" << endl <<
			"All code created by iPoogleDuck (Oliver)" << endl;
	}
	cout << "\nClick enter to close";
	cin.ignore();
    return 0;
}