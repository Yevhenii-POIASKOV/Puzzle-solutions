//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
2
Hello

Expected output:
Hello
Hello
================
================
Input:
7
blah

Expected output:
blah
blah
blah
blah
blah
blah
blah
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    string w;
    cin >> w; cin.ignore();
    for (int i=0; i<n; i++) cout << w << endl;
}
