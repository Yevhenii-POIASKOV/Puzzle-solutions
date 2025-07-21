//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
Figure out how much sugar Johny ate, given the time he took in seconds and the speed he ate it at in grams per minute.

Example:
If time is 30 and speed is 20, you need to output 10.

=====
Input
=====
Line 1: An integer time for the time Johny was eating sugar.
Line 2: An integer speed for the speed he ate at in grams per minute.

======
Output
======
Line 1: The amount in grams.
*/

#include <iostream>

using namespace std;

int main() { 
  int t, s;
  cin >> t >> s;
  cout << t / 60.0 * s << endl; 
}
