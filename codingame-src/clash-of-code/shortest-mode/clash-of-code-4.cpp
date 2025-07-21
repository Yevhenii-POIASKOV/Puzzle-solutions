//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
There are n seats, and each can hold at most one person. How many ways are there to place a boys and b girls on the seats? Assume that all boys are indistinguishable from one another, and so are all girls.

=====
Input
=====
Line 1: 3 space-separated integers n, a and b for the number of seats, boys and girls respectively

======
Output
======
One number - the amount of ways.
*/

#include <iostream>
using namespace std;
int fact(int n) {
    int fact=1;
    for(int i=1 ; i<=n; i++) fact*=i;
    return fact;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b; cin.ignore();
    cout << fact(n)/(fact(a)*fact(b)*fact(n-a-b)) << endl;
}
