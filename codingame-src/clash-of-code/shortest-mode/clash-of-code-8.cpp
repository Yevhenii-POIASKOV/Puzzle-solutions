//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
Björn owns a small company with 6 employees. He has decided to give a gift for the most secure password in the company, given the following rules:

A passwords s is valid only if:
- its length is 8 <= s <= 15
- it contains at least one number
- it contains at least one upper-case character
- it doesn't contain any space

He attributes points to a password as follows and sums up the points:

- each space character gives 0 point
- each upper-case character gives 10 points
- each lower-case character gives 5 points
- each digit gives only 1 point
- every other character (like "!.,&-@) gives 25 points.

=====
Input
=====
Line 1: The password strings, which contains only ASCII characters.

======
Output
======
A string valid, points based on the given password, where

- valid is "True" Or "False"
- points is an integer that represents the sum of the points of each character in the password
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int sp=0, uc=0, d=0;
    int score=0;
    for(auto &el : s){
        if(el == ' ') sp++;
        else if(isdigit(el)) {score+=1; d++;}
        else if(!isalnum(el)) score+=25;
        else if(isupper(el)) {score+=10; uc++;}
        else score+=5;
    }
    if(s.length()<8 || s.length() >15 || d<1 || sp>0 || uc<1) {
        cout << "False, ";
    }
    else cout << "True, ";
    cout  << score << endl;
}
