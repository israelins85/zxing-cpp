// This file is part of the uSTL library, an STL implementation.
//
//===------------------------- string.cpp ---------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#pragma once
#include <string>

namespace ustl {
/*
int stoi(const string &s)
{
    return atoi(s.c_str());
}
long stol(const string &s)
{
    return atol(s.c_str());
}

long long stoll(const string &s)
{
    return atoll(s.c_str());
}
*/

using namespace std;

int                stoi  (const string& str, size_t* idx = 0, int base = 10);
long               stol  (const string& str, size_t* idx = 0, int base = 10);
unsigned long      stoul (const string& str, size_t* idx = 0, int base = 10);
long long          stoll (const string& str, size_t* idx = 0, int base = 10);
unsigned long long stoull(const string& str, size_t* idx = 0, int base = 10);

float       stof (const string& str, size_t* idx = 0);
double      stod (const string& str, size_t* idx = 0);
//long double stold(const string& str, size_t* idx = 0);

string to_string(int val);
string to_string(unsigned val);
string to_string(long val);
string to_string(unsigned long val);
string to_string(long long val);
string to_string(unsigned long long val);
string to_string(float val);
string to_string(double val);
//string to_string(long double val);

}

