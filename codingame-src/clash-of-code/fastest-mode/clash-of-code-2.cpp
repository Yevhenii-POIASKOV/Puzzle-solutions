//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Given a String you must output the average ASCII value of that string. For
example:

Input: "abc"
Output: 98

=====
Input
=====
Input: A string

======
Output
======
Output: Average ASCII value of that String rounded down.
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

    int sum = 0;
    for (char c : s) {
        sum += (int)c;
    }
    int average = sum / s.length();
    cout << average << endl;
}
