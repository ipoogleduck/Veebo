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
int updateabort;

char quote = '"';

void tipss() {
	if (tips == "1") {
		cout << "Tip: Type 'Add user' to add an account. Type 'help' for more" << endl;
		tips = "2";
	}
	else if (tips == "2") {
		cout << "Tip: Type 'Log out' to log out of the current account info. Type 'help' for more" << endl;
		tips = "3";
	}
	else if (tips == "3") {
		cout << "Tip: Type 'Delete user' to delete a user. Type 'help' for more" << endl;
		tips = "4";
	}
	else if (tips == "4") {
		cout << "Tip: Type 'My info' to change the current account info. Type 'help' for more" << endl;
		tips = "5";
	}
	else if (tips == "5") {
		cout << "Tip: Type 'Change Personality' to change the way Veebo responds to what you type. Type 'help' for more" << endl;
		tips = "6";
	}
	else if (tips == "6") {
		cout << "Tip: Type 'Enable intro' to enable the logo on startup. Type 'help' for more" << endl;
		tips = "7";
	}
	else if (tips == "7") {
		cout << "Tip: Want to have some fun? Type 'Infect me' for more info (non-harmful). Type 'help' for more" << endl;
		tips = "8";
	}
	else if (tips == "8") {
		cout << "Tip: Secure your account with a randomly generated Cryption Key by typing 'Enable secure mode'" << endl;
		tips = "9";
	}
	else if (tips == "9") {
		cout << "Tip: Type 'Open website' to open a webpage. Type 'help' for more" << endl;
		tips = "10";
	}
	else if (tips == "10") {
		cout << "Tip: Type 'Google' to search google for a website. Type 'help' for more" << endl;
		tips = "11";
	}
	else if (tips == "11") {
		cout << "Tip: Type 'Update' to check if there is an update available. Type 'help' for more" << endl;
		tips = "12";
	}
	else if (tips == "12") {
		cout << "Tip: Type 'Whats new?' to find out whats new with each update. Type 'help' for more" << endl;
		tips = "13";
	}
	else if (tips == "13") {
		cout << "Tip: Type 'Stopwatch' to start a stopwatch. Type 'help' for more" << endl;
		tips = "14";
	}
	else if (tips == "14") {
		cout << "Tip: Type 'Change theme' to change color or 'rainbow' to go crazy. Type 'help' for more" << endl;
		tips = "15";
	}
	else if (tips == "15") {
		cout << "Tip: Type 'Show history' to show everything you have ever typed to Veebo" << endl;
		tips = "16";
	}
	else if (tips == "16") {
		cout << "Tip: Type 'Install beta profile' to participate in the beta software program. Type 'help' for more" << endl;
		tips = "17";
	}
	else if (tips == "17") {
		cout << "Tip: Type 'Report bug' if you found a software bug in Veebo. Type 'help' for more" << endl;
		tips = "1";
	}
	ofstream writertips2("tips.txt");
	writertips2 << tips;
	writertips2.close();
}
void whatsnewinveebo() {
	ifstream readerbeta6("BetaProfile.txt");
	if (!readerbeta6) {
		cout << "New in Veebo version " << cversion << ":" << endl;
	}
	else {
		cout << "New in Veebo version " << betaversion << ":" << endl;
	}
	compOutput = "-Type 'Change Personality' to change the way Veebo responds to what you type"; //WHATS NEW FOR EACH UPDATE
	cout << compOutput << endl;
	cout << "-New Personality: Sassy Veebo. Does most things fine but likes to talk back" << endl;
	cout << "-New Personality: Illiterate Veebo. Does not speak English, may mess up commands" << endl;
	cout << "-Auto update for beta has been added. Veebo will check for a beta update if you have the beta profile installed" << endl;
	/*
	cout << "New in Veebo 1.0:" << endl;
	compOutput = "-Last Major update until Veebo 1.0, which is almost here!"; //WHATS NEW FOR EACH UPDATE
	cout << compOutput << endl;
	cout << "-You can now type create account instead of just add user" << endl;
	*/
	compOutputLine2 = "";
	compOutputLine3 = "";
}
void help() {
	compOutput = "Here are some things you can ask me about:";
	cout << compOutput << endl;
	compOutputLine2 = " room::out--(not all items can fit on page)";
	cout << "-Type 'Add user' to add an account" << endl;
	cout << "-Type 'Log out' to log out of the current account info" << endl;
	cout << "-Type 'Delete user' to delete a user" << endl;
	cout << "-Type 'My info' to change the current account info" << endl;
	cout << "-Type 'Change Personality' to change the way Veebo responds to what you type" << endl;
	cout << "-Type 'Enable intro' to enable the logo on startup" << endl;
	cout << "-Want to have some fun? Type 'Infect me' for more info (non-harmful)" << endl;
	cout << "-Secure your account with a randomly generated Cryption Key by typing 'Enable secure mode'" << endl;
	cout << "-Type 'Open website' to open a webpage" << endl;
	cout << "-Type 'Google' to search google for a website" << endl;
	cout << "-Type 'Update' to check if there is an update available" << endl;
	cout << "-Type 'Whats new?' to find out whats new with each update" << endl;
	cout << "-Type 'Stopwatch' to start a stopwatch" << endl;
	cout << "-Type 'Change theme' to change color or 'rainbow' to go crazy" << endl;
	cout << "-Type 'Show history' to show everything you have ever typed to Veebo" << endl;
	cout << "-Type 'Install beta profile' to participate in the beta software program" << endl;
	cout << "-Type 'Report bug' if you found a software bug in Veebo" << endl;
	compOutputLine3 = "";
}
void startup() {
	system("CLS");
	cout << "Welcome to" << endl;
	cout << ":+:     :+: :+::+::+:: :+::+::+:: :+:+:+:+:   :+:+:+:+  " << endl;
	cout << ":+:     :+: :+:        :+:        :+:    :+: :+:    :+: " << endl;
	cout << "+:+     +:+ +:+        +:+        +:+    +:+ +:+    +:+ " << endl;
	cout << "+#+     +:+ +#++:++#   +#++:++#   +#++:++#+  +#+    +:+ " << endl;
	cout << " +#+   +#+  +#+        +#+        +#+    +#+ +#+    +#+ " << endl;
	cout << "  #+#+#+#   #+#        #+#        #+#    #+# #+#    #+# " << endl;
	cout << "    ###     ########## ########## #########   ########  " << endl;
	Sleep(500);
	system("CLS");
	cout << "Welcome to" << endl;
	cout << ":::     ::: :::::::::: :::::::::: :::::::::   ::::::::  " << endl;
	cout << ":+:     :+: :+:        :+:        :+:    :+: :+:    :+: " << endl;
	cout << ":+:     :+: :+:        :+:        :+:    :+: :+:    :+: " << endl;
	cout << "+:+     +:+ +:+:+:+:   +:+:+:+:   +:+:+:+:+  +:+    +:+ " << endl;
	cout << " +#+   +#+  +#+        +#+        +#+    +#+ +#+    +#+ " << endl;
	cout << "  +#+#+#+   +#+        +#+        +#+    +#+ +#+    +#+ " << endl;
	cout << "    #+#     #+#+#+#+#+ #+#+#+#+#+ #+#+#+#+#   #+#+#+#+  " << endl;
	Sleep(200);
	system("CLS");
	cout << "Welcome to" << endl;
	cout << ":::     ::: :::::::::: :::::::::: :::::::::   ::::::::  " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":+:     :+: :+:        :+:        :+:    :+: :+:    :+: " << endl;
	cout << ":+:     :+: :+:+:+:+   :+:+:+:+   :+:+:+:+:  :+:    :+: " << endl;
	cout << " +:+   +:+  +:+        +:+        +:+    +:+ +:+    +:+ " << endl;
	cout << "  +#+#+#+   +#+        +#+        +#+    +#+ +#+    +#+ " << endl;
	cout << "    +#+     +#+#+#+#+# +#+#+#+#+# +#+#+#+#+   +#+#+#+#  " << endl;
	Sleep(200);
	system("CLS");
	cout << "Welcome to" << endl;
	cout << ":::     ::: :::::::::: :::::::::: :::::::::   ::::::::  " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":+:     :+: :+:+:+:+   :+:+:+:+   :+:+:+:+:  :+:    :+: " << endl;
	cout << " :+:   :+:  :+:        :+:        :+:    :+: :+:    :+: " << endl;
	cout << "  +:+:+:+   +:+        +:+        +:+    +:+ +:+    +:+ " << endl;
	cout << "    +#+     +#+#+#+#+# +#+#+#+#+# +#+#+#+#+   +#+#+#+#  " << endl;
	Sleep(200);
	system("CLS");
	cout << "Welcome to" << endl;
	cout << ":::     ::: :::::::::: :::::::::: :::::::::   ::::::::  " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: ::::::::   ::::::::   :::::::::  :::    ::: " << endl;
	cout << " :+:   :+:  :+:        :+:        :+:    :+: :+:    :+: " << endl;
	cout << "  :+:+:+:   :+:        :+:        :+:    :+: :+:    :+: " << endl;
	cout << "    +:+     +:+:+:+:+: +:+:+:+:+: +:+:+:+:+   +:+:+:+:  " << endl;
	Sleep(200);
	system("CLS");
	cout << "Welcome to" << endl;
	cout << ":::     ::: :::::::::: :::::::::: :::::::::   ::::::::  " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: ::::::::   ::::::::   :::::::::  :::    ::: " << endl;
	cout << " :::   :::  :::        :::        :::    ::: :::    ::: " << endl;
	cout << "  :+:+:+:   :+:        :+:        :+:    :+: :+:    :+: " << endl;
	cout << "    :+:     :+:+:+:+:+ :+:+:+:+:+ :+:+:+:+:   :+:+:+:+  " << endl;
	Sleep(200);
	system("CLS");
	cout << "Welcome to" << endl;
	cout << ":::     ::: :::::::::: :::::::::: :::::::::   ::::::::  " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: ::::::::   ::::::::   :::::::::  :::    ::: " << endl;
	cout << " :::   :::  :::        :::        :::    ::: :::    ::: " << endl;
	cout << "  :::::::   :::        :::        :::    ::: :::    ::: " << endl;
	cout << "    :+:     :+:+:+:+:+ :+:+:+:+:+ :+:+:+:+:   :+:+:+:+  " << endl;
	Sleep(200);
	system("CLS");
	cout << "Welcome to" << endl;
	cout << ":::     ::: :::::::::: :::::::::: :::::::::   ::::::::  " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: :::        :::        :::    ::: :::    ::: " << endl;
	cout << ":::     ::: ::::::::   ::::::::   :::::::::  :::    ::: " << endl;
	cout << " :::   :::  :::        :::        :::    ::: :::    ::: " << endl;
	cout << "  :::::::   :::        :::        :::    ::: :::    ::: " << endl;
	cout << "    :::     :::::::::: :::::::::: :::::::::   ::::::::  " << endl;
	Sleep(500);
	system("CLS");
}
void spacex() {
	system("CLS");
	cout << "  ><< <<                                      ><<          " << endl;
	cout << "><<    ><<                                      ><<        " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><<       " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<             " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<      ><<   " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><               ><< " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<            ><<" << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           " << endl;
	cout << "><<    ><<                                      ><<             " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><<             " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<                   " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<      ><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><               ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <>        ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           " << endl;
	cout << "><<    ><<                                      ><<             " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><<             " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<                   " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<      ><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><               ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           " << endl;
	cout << "><<    ><<                                      ><<             " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><<             " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<                   " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<      ><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><    ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           " << endl;
	cout << "><<    ><<                                      ><<             " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><<             " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<     >              " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<   >< ><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><<   ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           " << endl;
	cout << "><<    ><<                                      ><<             " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><< >            " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<     ><<              " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<   ><<><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><<   ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           " << endl;
	cout << "><<    ><<                                      ><<     >        " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><< ><<            " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<     ><<              " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<   ><<><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><<   ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           " << endl;
	cout << "><<    ><<                                      ><<     ><^        " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><< ><<            " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<     ><<              " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<   ><<><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><<   ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           <<" << endl;
	cout << "><<    ><<                                      ><<     ><^^        " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><< ><<            " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<     ><<              " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<   ><<><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><<   ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           <<>^" << endl;
	cout << "><<    ><<                                      ><<     ><^^        " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><< ><<            " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<     ><<              " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<   ><<><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><<   ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           <<>^^^" << endl;
	cout << "><<    ><<                                      ><<     ><^^        " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><< ><<            " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<     ><<              " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<   ><<><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><<   ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
	cout << "  ><< <<                                      ><<           <<>^^^^^" << endl;
	cout << "><<    ><<                                      ><<     ><^^        " << endl;
	cout << " ><<       >< ><<      ><<       ><<<    ><<     ><< ><<            " << endl;
	cout << "   ><<     ><  ><<   ><<  ><<  ><<     ><  ><<     ><<              " << endl;
	cout << "      ><<  ><   ><< ><<   ><< ><<     ><<<<<><<   ><<><<            " << endl;
	cout << "><<    ><< ><< ><<  ><<   ><<  ><<    ><        <><<   ><<          " << endl;
	cout << "  ><< <<   ><<        ><< ><<<   ><<<   ><<<<  <><<<     ><<         " << endl;
	Sleep(200);
	system("CLS");
}
void falconheavy() {
	cout << "8888888888       888                                  888    888                                     " << endl;
	cout << "888              888                                  888    888                                     " << endl;
	cout << "888              888                                  888    888                                     " << endl;
	cout << "8888888  8888b.  888  .d8888b  .d88b.  88888b.        8888888888  .d88b.   8888b.  888  888 888  888 " << endl;
	cout << "888         '88b 888 d88P'    d88''88b 888 '88b       888    888 d8P  Y8b     '88b 888  888 888  888 " << endl;
	cout << "888     .d888888 888 888      888  888 888  888       888    888 88888888 .d888888 Y88  88P 888  888 " << endl;
	cout << "888     888  888 888 Y88b.    Y88..88P 888  888       888    888 Y8b.     888  888  Y8bd8P  Y88b 888 " << endl;
	cout << "888     'Y888888 888  'Y8888P  'Y88P'  888  888       888    888  'Y8888  'Y888888   Y88P    'Y88888 " << endl;
	cout << "                                                                                                 888 " << endl;
	cout << "                                                                                            Y8b d88P " << endl;
	cout << "                                                                                             'Y88P'  " << endl;
	Sleep(400);
	system("CLS");
	Sleep(400);
	cout << "8888888888       888                                  888    888                                     " << endl;
	cout << "888              888                                  888    888                                     " << endl;
	cout << "888              888                                  888    888                                     " << endl;
	cout << "8888888  8888b.  888  .d8888b  .d88b.  88888b.        8888888888  .d88b.   8888b.  888  888 888  888 " << endl;
	cout << "888         '88b 888 d88P'    d88''88b 888 '88b       888    888 d8P  Y8b     '88b 888  888 888  888 " << endl;
	cout << "888     .d888888 888 888      888  888 888  888       888    888 88888888 .d888888 Y88  88P 888  888 " << endl;
	cout << "888     888  888 888 Y88b.    Y88..88P 888  888       888    888 Y8b.     888  888  Y8bd8P  Y88b 888 " << endl;
	cout << "888     'Y888888 888  'Y8888P  'Y88P'  888  888       888    888  'Y8888  'Y888888   Y88P    'Y88888 " << endl;
	cout << "                                                                                                 888 " << endl;
	cout << "                                                                                            Y8b d88P " << endl;
	cout << "                                                                                             'Y88P'  " << endl;
	Sleep(400);
	system("CLS");
	Sleep(400);
	cout << "8888888888       888                                  888    888                                     " << endl;
	cout << "888              888                                  888    888                                     " << endl;
	cout << "888              888                                  888    888                                     " << endl;
	cout << "8888888  8888b.  888  .d8888b  .d88b.  88888b.        8888888888  .d88b.   8888b.  888  888 888  888 " << endl;
	cout << "888         '88b 888 d88P'    d88''88b 888 '88b       888    888 d8P  Y8b     '88b 888  888 888  888 " << endl;
	cout << "888     .d888888 888 888      888  888 888  888       888    888 88888888 .d888888 Y88  88P 888  888 " << endl;
	cout << "888     888  888 888 Y88b.    Y88..88P 888  888       888    888 Y8b.     888  888  Y8bd8P  Y88b 888 " << endl;
	cout << "888     'Y888888 888  'Y8888P  'Y88P'  888  888       888    888  'Y8888  'Y888888   Y88P    'Y88888 " << endl;
	cout << "                                                                                                 888 " << endl;
	cout << "                                                                                            Y8b d88P " << endl;
	cout << "                                                                                             'Y88P'  " << endl;
	Sleep(400);
	system("CLS");
	Sleep(400);
}
void update(){
	ifstream readerbeta5("BetaProfile.txt");
	if (!readerbeta5) {
		compOutput = "I'll check if an update is available...";
		cout << compOutput << endl << endl;
	}
	else {
		compOutput = "I'll check if a final release update is available...";
		cout << compOutput << endl << endl;
	}
CString str = "C:/Veebo/OTAnew/OpenInvisBat.vbs";
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
updateabort = 0;
while (letter == '_' && updateabort < 50 || letter == ' ' && updateabort < 50) {
	updateabort++;
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
	Sleep(500);
	cout << ".";
}
letter2 = 0;
cout << endl;
ifstream reader3("here.txt");
if (!reader3) {
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
	tempString = "0";
}
else {

	for (int i = 0; !reader7.eof(); i++) {
		reader7.get(letter);
		compat += letter;
	}
	reader7.close();
}

letter = 0;
whatsnew = "";
ifstream reader79("whatsnew.txt");
if (!reader79) {
	tempString = "0";
}
else {

	for (int i = 0; !reader79.eof(); i++) {
		reader79.get(letter);
		whatsnew += letter;
	}
	reader79.close();
}
if (updateabort != 50) {
	compat.pop_back();
	version.pop_back();
	whatsnew.pop_back();
}
if (updateabort == 50) {
	cout << "Network Error: Please connect to the internet and try again" << endl;
}
else if (version == cversion) {
	cout << "You are up to date!" << endl;
	tempString = "1";
}
else {
	if (compat == ccompat) {
		cout << "Update available for version number " << version << endl << endl << whatsnew << endl << endl << "Do you want to update?" << endl;
		getline(cin, tempString);
		if (tempString == "Yes" || tempString == "yes") {
			backgroundupdateyorn = "Yes";
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
		cout << "There is an update for version " << version << endl << endl << whatsnew << endl << endl << "Unfortunately there are parts of this update that cannot be updated by the auto update feature" << endl;
		cout << "You will have to reinstall Veebo using the installer. Would you like to proceed to the instructions?" << endl;
		getline(cin, tempString);
		if (tempString == "Yes" || tempString == "yes") {
			ShellExecute(0, 0, L"https://ipooglecodes.weebly.com/veebo-uninstall.html", 0, 0, SW_SHOW);
			tempString = "0";
		}
		else {
			cout << "Okay" << endl;
			tempString = "1";
		}
	}
}
if (tempString != "0") {
	//BETA UPDATE
	ifstream readerbeta6("BetaProfile.txt");
	if (!readerbeta6) {
	}
	else {
		compOutput = "I'll now check if a beta software update is available...";
		Sleep(850);
		cout << compOutput << endl << endl;

		CString str = "C:/Veebo/OTAnew/BetaOpenInvisBat.vbs";
		CString action = "open";
		ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
		compOutputLine2 = "";
		compOutputLine3 = "";
		version = "";
		ofstream writer21111("done.txt");
		if (!writer21111) {
			cout << "Error opening file..." << endl;
		}
		else {
			writer21111 << "_" << endl;
			writer21111.close();
		}
		letter = '_';
		updateabort = 0;
		while (letter == '_' && updateabort < 50 || letter == ' ' && updateabort < 50) {
			updateabort++;
			tempString = "";
			ifstream reader211("done.txt");
			if (!reader211) {
			}
			else {
				reader211.get(letter);
				tempString += letter;
				reader211.close();
				letter2++;
			}
			Sleep(500);
			cout << ".";
		}
		letter2 = 0;
		cout << endl;
		ifstream reader31("here.txt");
		if (!reader31) {
			tempString = "0";
		}
		else {

			for (int i = 0; !reader31.eof(); i++) {
				reader31.get(letter);
				version += letter;
			}
			reader31.close();
		}
		letter = 0;
		compat = "";
		ifstream reader71("compat.txt");
		if (!reader71) {
			tempString = "0";
		}
		else {

			for (int i = 0; !reader71.eof(); i++) {
				reader71.get(letter);
				compat += letter;
			}
			reader71.close();
		}

		letter = 0;
		whatsnew = "";
		if (updateabort != 50) {
			compat.pop_back();
			version.pop_back();
		}
		if (updateabort == 50) {
			cout << "Network Error: Please connect to the internet and try again" << endl;
		}
		else if (version == betaversion) {
			cout << "You are up to date!" << endl;
			tempString = "1";
		}
		else {
			if (compat == ccompat) {
				cout << "Beta update available for version number " << version  << endl << "Do you want to update?" << endl;
				getline(cin, tempString);
				if (tempString == "Yes" || tempString == "yes") {
					backgroundupdateyorn = "Yes";
					cout << "Beep Beep" << endl;
					CString str = "C:/Veebo/betainstall.bat";
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
				cout << "There is a beta update for version " << version << endl << "Unfortunately there are parts of this update that cannot be updated by the auto update feature" << endl;
				cout << "You will have to wait for the final release version" << endl;
			}
		}
	}
}
}
void checkbackgroundupdate() {
	letter = '_';
	tempString = "";
	ifstream reader2156("done.txt");
	if (!reader2156) {
	}
	else {
		reader2156.get(letter);
		tempString += letter;
	}
	reader2156.close();

	if (letter != '_' && letter != ' '){
	version = "";
	letter2 = 0;
	ifstream reader3gg("here.txt");
	if (!reader3gg) {
		tempString = "0";
	}
	else {

		for (int i = 0; !reader3gg.eof(); i++) {
			reader3gg.get(letter);
			version += letter;
		}
		reader3gg.close();
	}
	letter = 0;
	compat = "";
	ifstream reader7gg("compat.txt");
	if (!reader7gg) {
		tempString = "0";
	}
	else {

		for (int i = 0; !reader7gg.eof(); i++) {
			reader7gg.get(letter);
			compat += letter;
		}
		reader7gg.close();
	}

	letter = 0;
	whatsnew = "";
	ifstream reader79gg("whatsnew.txt");
	if (!reader79gg) {
		tempString = "0";
	}
	else {

		for (int i = 0; !reader79gg.eof(); i++) {
			reader79gg.get(letter);
			whatsnew += letter;
		}
		reader79gg.close();
	}
		compat.pop_back();
		version.pop_back();
		whatsnew.pop_back();

	if (version == cversion) {
		backgroundupdateyorn = "No";
		tempString = "1";
	}
	else {
		if (compat == ccompat) {
			Sleep(600);
			cout << "By the way, an update available for version number " << version << endl << endl << whatsnew << endl << endl << "Do you want to update?" << endl;
			getline(cin, tempString);
			if (tempString == "Yes" || tempString == "yes") {
				backgroundupdateyorn = "Yes";
				ofstream writer30692("autoupdate.txt");
				if (!writer30692) {
				}
				else {
					writer30692 << "Yes" << endl;
					writer30692.close();
				}
				cout << "Beep Beep" << endl;
				CString str = "C:/Veebo/install.bat";
				CString action = "open";
				ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
				tempString = "0";
			}
			else {
				cout << "Okay, If you want Veebo to stop asking on startup type 'disable auto update'" << endl;
				tempString = "1";
				backgroundupdateyorn = "No";
			}
		}
		else {
			Sleep(600);
			cout << "By the way, there is an update for version " << version << endl << endl << whatsnew << endl << endl << "Unfortunately there are parts of this update that cannot be updated by the auto update feature" << endl;
			cout << "You will have to reinstall Veebo using the installer. Would you like to proceed to the instructions?" << endl;
			getline(cin, tempString);
			if (tempString == "Yes" || tempString == "yes") {
				ofstream writer30691("autoupdate.txt");
				if (!writer30691) {
				}
				else {
					writer30691 << "Yes" << endl;
					writer30691.close();
				}
				backgroundupdateyorn = "Yes";
				ShellExecute(0, 0, L"https://ipooglecodes.weebly.com/veebo-uninstall.html", 0, 0, SW_SHOW);
				tempString = "0";
			}
			else {
				cout << "Okay, If you want Veebo to stop asking on startup type 'disable auto update'" << endl;
				tempString = "1";
				backgroundupdateyorn = "No";
			}
		}
	}
	}
}

void checkbackgroundupdatebeta() {

		tempString = "";
		ifstream reader211("done.txt");
		if (!reader211) {
		}
		else {
			reader211.get(letter);
			tempString += letter;
			reader211.close();
			letter2++;
		}
		if (letter != '_' && letter != ' ') {
			version = "";
			letter2 = 0;
			ifstream reader31("here.txt");
			if (!reader31) {
				tempString = "0";
			}
			else {

				for (int i = 0; !reader31.eof(); i++) {
					reader31.get(letter);
					version += letter;
				}
				reader31.close();
			}
			letter = 0;
			compat = "";
			ifstream reader71("compat.txt");
			if (!reader71) {
				tempString = "0";
			}
			else {

				for (int i = 0; !reader71.eof(); i++) {
					reader71.get(letter);
					compat += letter;
				}
				reader71.close();
			}

			letter = 0;
			whatsnew = "";
			compat.pop_back();
			version.pop_back();
			if (version == betaversion) {
				tempString = "1";
			}
			else {
				if (compat == ccompat) {
					cout << "By the way, a beta update is available for version number " << version << endl << "Do you want to update?" << endl;
					getline(cin, tempString);
					if (tempString == "Yes" || tempString == "yes") {
						backgroundupdateyorn2 = "Yes";
						cout << "Beep Beep" << endl;
						CString str = "C:/Veebo/betainstall.bat";
						CString action = "open";
						ShellExecute(NULL, action, str, NULL, NULL, SW_SHOW);
						tempString = "0";
					}
					else {
						cout << "Okay" << endl;
						tempString = "1";
						backgroundupdateyorn2 = "No";
					}
				}
			}
		}
}