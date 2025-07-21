//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
The Leonardo numbers are a sequence of numbers given by the recurrence: 

L(0) = 1
L(1) = 1
L(n) = L(n-1) + L(n-2) + 1 if n > 1

The first few Leonardo Numbers are: 1, 1, 3, 5, 9, 15, 25, 41, 67, 109, ...

Given a number n, find n-th Leonardo number.

=====
Input
=====
Line 1: Integer n

======
Output
======
Line 1: n-th Leonardo number
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
    if (n==0){
        cout << 1 << endl;
        return 0;
    } 
    else if (n==1){
        cout << 1 << endl;
        return 0;
    } 
    else {
        int leo;
        int a=1, b=1;
        for (int i = 2; i <= n; ++i) {
            leo = a + b + 1;
            a = b;
            b = leo;
        }
        cout << leo << endl;
    }
}