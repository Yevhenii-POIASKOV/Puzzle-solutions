//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
yyyyy

Expected output:
00000
================
================
Input:
bbbbb

Expected output:
11111
================
================
Input:
input

Expected output:
01101
================
================
Input:
CAGED

Expected output:
00001
================
================
Input:
Mixed

Expected output:
00101
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string u;
    getline(cin, u);
    for(auto &ch : u){
        cout << abs((int)ch % 2 - 1);
    }
    cout << endl;
}
