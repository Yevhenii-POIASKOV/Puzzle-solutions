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
4

Expected output:
16
================

================
Input:
7
11

Expected output:
539
================
================
Input:
456
54

Expected output:
11228544
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int m;
    cin >> m; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    cout << m*m*n << endl;
}
