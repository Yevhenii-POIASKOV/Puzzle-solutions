//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
You are given integers n, a, b, and c. You must find the number of integers from 1 to n (inclusive both 1 and n) that are divisible by at least one of a b, or c.

=====
Input
=====
Line1: integer n.
Line2: integers a b, separated by a space.

======
Output
======
Line1: number of integers from 1 to inclusive that are divisible by at least one of a, b, c.
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
    int a;
    int b;
    int c;
    cin >> a >> b >> c; cin.ignore();
    int count = 0;
    for(int i=1; i<=n; i++){
        if (i%a == 0 || i%b == 0 || i%c == 0) count++;
    }
    cout << count << endl;
}
