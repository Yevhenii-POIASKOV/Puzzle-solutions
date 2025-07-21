//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
abcdef

Expected output:
bdf
================
================
Input:
ab

Expected output:
b
================
================
Input:
codingame

Expected output:
oigm
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
    for(int i=0; i<s.size();i++){
        if((i+1)%2 ==0)
        cout << s[i];
    }
    cout << endl;
}