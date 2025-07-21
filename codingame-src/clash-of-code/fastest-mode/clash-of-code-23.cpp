//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
The program:

Your program must compute the value of a linear function at the given points.

A linear function is of the form f(x) = a * x + b, with a and b, two constant values. You are given the values a, b nd a set of N values of x. You must compute the value of f(x) for each of the N values of X.

=====
Input
=====
Line 1: two space-separated integers a and b
Line 2: an integer N
N next lines: an integer x on each line

======
Output
======
N lines: the value of f(x) for each X value given as input
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x; cin.ignore();
        int fx = a * x + b;
        cout << fx << endl;
    }
}
