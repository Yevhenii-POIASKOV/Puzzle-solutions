//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
5

Expected output:
320
================
================
Input:
1

Expected output:
64
================
================
Input:
2

Expected output:
128
================
================
Input:
3

Expected output:
192
================
================
Input:
10000

Expected output:
640000
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

main()
{
    int h;
    cin >> h; cin.ignore();
    cout << 64 * h << endl;
}
