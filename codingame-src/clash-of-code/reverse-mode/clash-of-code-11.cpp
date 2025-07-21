//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
Scissors

Expected output:
Stone
================
================
Input:
Stone

Expected output:
Hand
================
================
Input:
Hand

Expected output:
Scissors
================
================
Input:
ASd2q8S

Expected output:
Error
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string o;
    getline(cin, o);
    if (o=="Stone") cout << "Hand" << endl;
    else if (o=="Hand") cout << "Scissors" << endl;
    else if (o=="Scissors") cout << "Stone" << endl;
    else cout << "Error" << endl;
}
