//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Given a regular n-gon, find the measures of a single interior angle, a single exterior angle, and if the angles are both odd or even.

The sum of the exterior angles is always 360.
Find the measures of the interior angles using the following formula: (n-2)*180/n

=====
Input
=====
Line 1: a number n for number of sides the polygon has.

======
Output
======
Line 1: space-separated integers, interior angle measure i, and exterior angle measurer e.
Line 2: output "even" if both the angle measures are even, otherwise "odd"
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
    int f=(n-2)*180/n, s=180 - (n-2)*180/n;
    cout << f << " " << s << endl;
    if (s %2 == 0 && f %2 == 0) cout << "even" << endl;
    else cout << "odd" << endl;
}