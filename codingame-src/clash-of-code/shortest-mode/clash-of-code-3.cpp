//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
You must print every number up to n, n times

Examples:
1 -> 1
3 -> 123123123
5 -> 1234512345123451234512345

=====
Input
=====
The number

======
Output
======
Every number up to n, n times
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=n; j++){
            cout << j;
        }
    }
    cout << endl;
}
