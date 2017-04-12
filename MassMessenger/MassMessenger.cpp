// MassMessenger.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MassMessenger.h"

INPUT input;

vector<string> readFile() 
{
	vector<string> links;
	char c;
	ifstream inFile;
	inFile.open("datafile.txt");

	if (!inFile) 
	{
		cerr << "Unable to open file datafile.txt";
		exit(1);
	}

	string link;

	while (inFile >> c) 
	{
		if (c == ',') //Adds link when it reaches a comma
		{
			links.push_back(link);
			link = "";
		} 
		else if (c != ' ') //Skips spaces
		{
			link += c;
		}
	}
	links.push_back(link);
	inFile.close();

	return links;
}

void simulateKey(vector<int> keyCodes) 
{
	for (auto i = keyCodes.begin(); i != keyCodes.end(); i++) 
	{
		input.ki.wVk = *i; // virtual-key code
		input.ki.dwFlags = 0; // 0 for key press
		SendInput(1, &input, sizeof(INPUT));
	}

	for (auto i = keyCodes.begin(); i != keyCodes.end(); i++) 
	{
		input.ki.wVk = *i;
		input.ki.dwFlags = KEYEVENTF_KEYUP; //Release key
		SendInput(1, &input, sizeof(INPUT));
	}
}

vector<int> decodeChar(char c)
{
	vector<int> codes;
	switch (c) {
	case 'A':
		codes.push_back(0xA0);
		codes.push_back(0x41);
		break;
	case 'B':
		codes.push_back(0xA0);
		codes.push_back(0x42);
		break;
	case 'C':
		codes.push_back(0xA0);
		codes.push_back(0x43);
		break;
	case 'D':
		codes.push_back(0xA0);
		codes.push_back(0x44);
		break;
	case 'E':
		codes.push_back(0xA0);
		codes.push_back(0x45);
		break;
	case 'F':
		codes.push_back(0xA0);
		codes.push_back(0x46);
		break;
	case 'G':
		codes.push_back(0xA0);
		codes.push_back(0x47);
		break;
	case 'H':
		codes.push_back(0xA0);
		codes.push_back(0x48);
		break;
	case 'I':
		codes.push_back(0x49);
		break;
	case 'J':
		codes.push_back(0xA0);
		codes.push_back(0x4A);
		break;
	case 'K':
		codes.push_back(0xA0);
		codes.push_back(0x4B);
		break;
	case 'L':
		codes.push_back(0xA0);
		codes.push_back(0x4C);
		break;
	case 'M':
		codes.push_back(0xA0);
		codes.push_back(0x4D);
		break;
	case 'N':
		codes.push_back(0xA0);
		codes.push_back(0x4E);
		break;
	case 'O':
		codes.push_back(0xA0);
		codes.push_back(0x4F);
		break;
	case 'P':
		codes.push_back(0xA0);
		codes.push_back(0x50);
		break;
	case 'Q':
		codes.push_back(0xA0);
		codes.push_back(0x51);
		break;
	case 'R':
		codes.push_back(0xA0);
		codes.push_back(0x52);
		break;
	case 'S':
		codes.push_back(0xA0);
		codes.push_back(0x53);
		break;
	case 'T':
		codes.push_back(0xA0);
		codes.push_back(0x54);
		break;
	case 'U':
		codes.push_back(0xA0);
		codes.push_back(0x55);
		break;
	case 'V':
		codes.push_back(0xA0);
		codes.push_back(0x56);
		break;
	case 'W':
		codes.push_back(0xA0);
		codes.push_back(0x57);
		break;
	case 'X':
		codes.push_back(0xA0);
		codes.push_back(0x58);
		break;
	case 'Y':
		codes.push_back(0xA0);
		codes.push_back(0x59);
		break;
	case 'Z':
		codes.push_back(0xA0);
		codes.push_back(0x5A);
		break;
	case 'a':
		codes.push_back(0x41);
		break;
	case 'b' :
		codes.push_back(0x42);
		break;
	case 'c':
		codes.push_back(0x43);
		break;
	case 'd':
		codes.push_back(0x44);
		break;
	case 'e':
		codes.push_back(0x45);
		break;
	case 'f':
		codes.push_back(0x46);
		break;
	case 'g':
		codes.push_back(0x47);
		break;
	case 'h':
		codes.push_back(0x48);
		break;
	case 'i':
		codes.push_back(0x49);
		break;
	case 'j':
		codes.push_back(0x4A);
		break;
	case 'k':
		codes.push_back(0x4B);
		break;
	case 'l':
		codes.push_back(0x4C);
		break;
	case 'm':
		codes.push_back(0x4D);
		break;
	case 'n':
		codes.push_back(0x4E);
		break;
	case 'o':
		codes.push_back(0x4F);
		break;
	case 'p':
		codes.push_back(0x50);
		break;
	case 'q':
		codes.push_back(0x51);
		break;
	case 'r':
		codes.push_back(0x52);
		break;
	case 's':
		codes.push_back(0x53);
		break;
	case 't':
		codes.push_back(0x54);
		break;
	case 'u':
		codes.push_back(0x55);
		break;
	case 'v':
		codes.push_back(0x56);
		break;
	case 'w':
		codes.push_back(0x57);
		break;
	case 'x':
		codes.push_back(0x58);
		break;
	case 'y':
		codes.push_back(0x59);
		break;
	case 'z':
		codes.push_back(0x5A);
		break;
	case '0':
		codes.push_back(0x30);
		break;
	case '1':
		codes.push_back(0x31);
		break;
	case '2':
		codes.push_back(0x32);
		break;
	case '3':
		codes.push_back(0x33);
		break;
	case '4':
		codes.push_back(0x34);
		break;
	case '5':
		codes.push_back(0x35);
		break;
	case '6':
		codes.push_back(0x36);
		break;
	case '7':
		codes.push_back(0x37);
		break;
	case '8':
		codes.push_back(0x38);
		break;
	case '9':
		codes.push_back(0x39);
		break;
	case ')':
		codes.push_back(0xA0);
		codes.push_back(0x30);
		break;
	case '!':
		codes.push_back(0xA0);
		codes.push_back(0x31);
		break;
	case '@':
		codes.push_back(0xA0);
		codes.push_back(0x32);
		break;
	case '#':
		codes.push_back(0xA0);
		codes.push_back(0x33);
		break;
	case '$':
		codes.push_back(0xA0);
		codes.push_back(0x34);
		break;
	case '%':
		codes.push_back(0xA0);
		codes.push_back(0x35);
		break;
	case '^':
		codes.push_back(0xA0);
		codes.push_back(0x36);
		break;
	case '&':
		codes.push_back(0xA0);
		codes.push_back(0x37);
		break;
	case '*':
		codes.push_back(0xA0);
		codes.push_back(0x38);
		break;
	case '(':
		codes.push_back(0xA0);
		codes.push_back(0x39);
		break;
	case '.':
		codes.push_back(0xBE);
		break;
	case '?':
		codes.push_back(0xA0);
		codes.push_back(0xBF);
		break;
	case ' ':
		codes.push_back(0x20);
		break;
	default:
		codes.push_back(0x20); //Return a space for unknown characters
	}

	return codes;
}

int main(int argc, char *argv[])
{
	vector<string> links = readFile();
	string message;

	if (argc > 1) 
	{
		message = argv[1];
	}
	else 
	{
		message = "The quick brown fox jumps over the lazy dog.";
	}

	// Set up a generic keyboard event.
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = 0; // hardware scan code for key
	input.ki.time = 0;
	input.ki.dwExtraInfo = 0;

	//Need this for pressing enter
	vector<int> enterKey;
	enterKey.push_back(0x0D);

	for (auto i = links.begin(); i != links.end(); i++) {
		system(string("start " + *i).c_str());

		// Pause for 6 seconds while page loads.
		Sleep(6000);

		for (int i = 0; i < message.length(); i++)
		{
			simulateKey(decodeChar(message[i]));
		}

		Sleep(750); // Pause for 0.75 seconds while typing finishes.

		simulateKey(enterKey); //Sends the message
	}

	cout << "Press enter to exit..." << endl;
	cin.get();

    return 0;
}