//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Gravity is calculated by G*m_1*m_2/r^2 where G is a constant, m_1 and m_2 are the masses of the objects, and r is the distance.

Find the gravity in terms of G.

=====
Input
=====
Line 1: A float m_1 for the mass of the first object.
Line 2: A float m_2 for the mass of the second object.
Line 3: A float for r the distance between the two objects.

======
Output
======
Line 1: The gravity in terms of G, rounded to the nearest hundredths.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    double m_1;
    cin >> m_1; cin.ignore();
    double m_2;
    cin >> m_2; cin.ignore();
    double r;
    cin >> r; cin.ignore();
    cout << fixed << setprecision(2) << (m_1 * m_2) / (r * r) << "G" << endl;
}
