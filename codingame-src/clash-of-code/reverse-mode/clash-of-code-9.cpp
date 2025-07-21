//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
Hello World

Expected output:
H d
e l
l r
l 0
o W

W o
o l
r l
l e
d H
================
================
Input:
Chuck Norris

Expected output:
C s
h i
u r
c r
k o
  N
N 
o k
r c
r u
i h
s C
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string m;
    getline(cin, m);
    int n = m.length();
    for (int i = 0; i < n; i++) {
        cout << m[i] << " " << m[n - 1 - i] << endl;
    }
}
