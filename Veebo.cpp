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
#include <fstream>
using namespace std;
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
char letter; //leter of info user is at
int letter2;
int letter3;
string myUrl; //to start a url
string http = "http://"; //adds http
string search = "https://www.google.com/search?q=";
string urcomp; //to compare url 
int main()
{
	//ofstream writer2("yorn.txt"); //IMPORTANT: IF THERE IS AN EEROR TRY UNSLASHING THIS LINE THE FIRST TIME YOU USE THIS PROGRAM, MAKE SURE TO SLASH IT BACK AFTER!!
	ifstream reader2("yorn.txt");
	if (!reader2) {
		cout << "Error plz go home";
		return -1;

	}
	else {

			reader2.get(letter);
			if(letter == 'Y'){
				cout << "Hi ";
				ifstream reader("name.txt");
				if (!reader) {
					cout << "Error plz go home";
					return -1;

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
				cout << "You can also type 'help' for a list of questions I can currently answer" << endl;
		}
			else {
				cout << "Hello! Welcome to Veebo!" << endl;
				cout << "It looks like you haven't set up your info yet... Please type 'My info' to set it up" << endl;
				cout << "After you're done, you can type 'help' for a list of questions I can currently answer" << endl;
			}
		reader2.close();
	}
	cout << "Type 'exit' at any time to close and save" << endl;
	srand(time(0)); // This will ensure a really randomized number by help of time
	getline(cin, currentType);
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
		else if (currentType == "whats my name" || currentType == "Whats my name?") {
			compOutput = "Your name is ";
			cout << compOutput;
			cout << name << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "Cool" || currentType == "cool") {
			compOutput = "Coolio";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
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
			ofstream writer2("yorn.txt");
			if (!writer2) {
				cout << "Error opening file, try again later" << endl;
				return -1;
			}
			else {
				writer2 << "Y" << endl;
				writer2.close();
			}
			
			
			cout << "Whats your name?" << endl; //gets name
			getline(cin, name);
			ofstream writer("name.txt");
			if (!writer) {
				cout << "Error opening file, try again later" << endl;
				return -1;
			}
			else {
				writer << name << endl;
				writer.close();
				cout << "Thanks! I'll remember it from now on!" << endl;
			}
			/*
			ofstream writer2("info.txt", ios::app);
			//Open a stream to add to whats there with ios::app
			//treat a file as binary with ios::binary
			//read input of a file ios::in
			//default ios::trunc
			//Open a file to write output ios::out

			if (!writer2) {
				cout << "Error opening file, try again later" << endl;
				return -1;
			}
			else {
				writer2 << "\n YYYYYEEEEESSSSS!!!!!!! IT WORKS!!!!!!!!!" << endl;
				writer2.close();
			}
			*/
			
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "ok" || currentType == "Ok" || currentType == "okay") {
			compOutput = "Ok...";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
		}
		else if (currentType == "yes" || currentType == "sure" || currentType == "Yes") {
			compOutput = "Yay!";
			cout << compOutput << endl;
			compOutputLine2 = "";
			compOutputLine3 = "";
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
			compOutputLine2 = " room:out (not all items can fit on page";
			cout << "-Type 'My info' to tell me about yourself" << endl;
			cout << "-Type 'Open website' to open a webpage" << endl;
			cout << "-Type 'Google' to search google for a website" << endl;
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
			|| currentType == "lame" || currentType == "jerk") { //stops user from using bad words
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