//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Given a, b, and c (the coeffients and constant in the quadratic equation ax²+bx+c=0), find the sum of the roots (x1+x2), product of the roots (X1*X2), and the sum of the square of the roots (x1²+x2²).

Vieta's Formula states that the sum of the roots is equal to -b/a, and the product of the roots is equal to c/a.

Note: The outputs have to have two digits after the decimal point. O's should be positive (so 0.00 instead of -0.00).

=====
Input
=====
Line 1: A float a representing the coefficent of x².
Line 2: A float b representing the coefficent of x.
Line 3: A float c representing the constant.

======
Output
======
Line 1: The sum of the two roots of the quadratic equation rounded to the nearest hundredths.
Line 2: The product of the two roots of the quadratic equation rounded to the nearest hundredths.
Line 3: The sum of the square of the roots of the quadratic equation rounded to the nearest hundredths.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    float a;
    cin >> a; cin.ignore();
    float b;
    cin >> b; cin.ignore();
    float c;
    cin >> c; cin.ignore();
    float sum = -b / a;
    float prod = c / a;
    float square = sum * sum - 2 * prod;
    cout << fixed << setprecision(2);
    if (sum == 0) cout << 0.00 << endl;
    else cout << sum << endl;
    if (prod == 0) cout << 0.00 << endl;
    else cout << prod << endl;
    if (square == 0) cout << 0.00 << endl;
    else cout << square << endl;
}
