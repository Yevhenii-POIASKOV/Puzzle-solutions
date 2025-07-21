//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
You're texting a friend while driving your brand new Gami Codella © of mass mi. When suddenly: BAAAAM!!!!
You crash into the car in front of you of mass m2 which was going at a speed of u2 and see it skidding off at a speed of v2!

Knowing that your speedometer is now reading 1, calculate the speed you were going the instant before the crash.
Please Note: In any collision with an absence of external forces the total momentum of the system will be conserved, even if there is energy loss.

Also:
Momentum of an object = mass * velocity
Momentum of the system = sum of the different object's momentums

=====
Input
=====
Line 1: The mass of your Gami Codella m1 and the other driver's car m2
Line 2: The other car's initial velocity u2 and final velocity v2, separated by a space
Line 3: The reading on your speedometer v1
Note: All the previous variables are floating point numbers 

======
Output
======
Your velocity right before the collision, rounded to three decimals.
Note: Don't write unnecessary zeroes: 5.300 => 5.3, 10.000 => 10
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double m1, m2;
    cin >> m1 >> m2; cin.ignore();
    double u2, v2;
    cin >> u2 >> v2; cin.ignore();
    double v1;
    cin >> v1; cin.ignore();
    cout << (m1 * v1 + m2 * (v2 - u2)) / m1 << endl;
}
