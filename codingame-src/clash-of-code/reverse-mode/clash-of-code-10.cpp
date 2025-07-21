//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
STRING

Expected output:
STRING
TRING
RING
ING
NG
G
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    while (!s.empty()) {
        cout << s << endl;
        s.erase(0, 1);
    }

}
