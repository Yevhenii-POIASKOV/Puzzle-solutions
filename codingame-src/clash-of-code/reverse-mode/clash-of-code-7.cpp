//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
8
-
3

Expected output:
5
================
================
Input:
8
x
3

Expected output:
24
================
================
Input:
3
x
91

Expected output:
273
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n1;
    cin >> n1; cin.ignore();
    char equation;
    cin >> equation;
    int n2;
    cin >> n2; cin.ignore();
    switch(equation){
        case '+':
            cout << n1+n2 << endl;
        break;
        case '-':
            cout << n1-n2 << endl;
        break;
        case '/':
            cout << n1/n2 << endl;
        break;
        case 'x':
            cout << n1*n2 << endl;
        break;
    }
}
