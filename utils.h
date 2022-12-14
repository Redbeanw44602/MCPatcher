//
// Created by RedbeanW on 9/16/2022.
//

#ifndef MCPATCHER_UTILS_H
#define MCPATCHER_UTILS_H

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

#include "Windows.h"
#include <ShObjIdl.h>

using std::string;
using std::vector;

string char2hex(unsigned char chr);
string wchar2string(const wchar_t *wchar);
long long findBytes(std::fstream& file, const vector<unsigned char> &bytes);

#endif //MCPATCHER_UTILS_H
