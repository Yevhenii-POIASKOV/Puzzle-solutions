//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
The program:
Your program must output all the odd numbers from 1 to N where N is given as input.
If N is an odd number, it must be included in the output.

=====
Input
=====
1 integer N

======
Output
======
All odd numbers from 1 to N
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
    for (int i = 1; i <= n; i += 2) {
        cout << i << endl;
    }
}