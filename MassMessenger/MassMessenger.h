#ifndef MASSMESSENGER_H
#define MASSMESSENGER_H

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

vector<string> readFile();
void simulateKey(vector<int> keyCodes);
vector<int> decodeChar(char c);

#endif