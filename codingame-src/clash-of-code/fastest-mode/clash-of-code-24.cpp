//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
The among us imposter is trying to go to the mall for some among us plushies but needs to know if he will make it or not.

=====
Input
=====
Line 1: An integer f the starting fuel in liters
Line 2: An integer d the distance to travel in meters
Line 3: An integer r the rate at which fuel is burned liters per meters

======
Output
======
Line 1: An integer a for either the remaining fuel or "not enough fuel"
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int f;
    cin >> f; cin.ignore();
    int d;
    cin >> d; cin.ignore();
    int r;
    cin >> r; cin.ignore();
    int n = d * r;
    if (f >= n) {
        cout << f - n << endl;
    } else {
        cout << "not enough fuel" << endl;
    }
}
