//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
ABC

Expected output:
B
================
================
Input:
KLMNOPQRS

Expected output:
O
================
================
Input:
CodIngaME

Expected output:
H
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string my_string;
    getline(cin, my_string);
    int sum = 0;
    for(auto &el : my_string){
        sum += int(toupper(el));
    }
    int l = sum / my_string.size();
    cout << char(l) << endl;
}
