//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
2+1

Expected output:
3
================
================
Input:
2+2

Expected output:
3
================
================
Input:
12+2

Expected output:
4
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout << str.size() << endl;
}