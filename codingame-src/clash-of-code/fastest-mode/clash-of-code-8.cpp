//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Story:
You were out partying with your friends and as the designated driver you decided to stay sober. Unfortunately the cop that pulled you over would disagree with you. For some reason the only way that the cop can prove your sobriety is by completing a maths challenge.

The Challenge
Output the absolute difference between two powers A^B and X^Y, rounded to the closest integer.

=====
Input
=====
Line 1 Two positive floats A and X
Line 2 Two positive integers B and Y that will be exponents

======
Output
======
Line 1 The absolute difference between A^B and X^Y rounded to the closest integer
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    double a, x;
    cin >> a >> x; cin.ignore();
    int b, y;
    cin >> b >> y; cin.ignore();
    cout << llround(abs(pow(a, b) - pow(x, y))) << endl;
}