//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Find the hypotenuse of a right triangle given the length of the legs. Round to the nearest integer.

=====
Input
=====
Line 1:length of leg_1
Line 2:length of leg_2

======
Output
======
length of the hypotenuse
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int leg_1;
    cin >> leg_1; cin.ignore();
    int leg_2;
    cin >> leg_2; cin.ignore();
    cout << round(sqrt((pow(leg_1, 2)+pow(leg_2, 2)))) << endl;
}
