//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
Dogs age differently from humans. Your task is to calculate how old a dog would be in human years, based on a commonly used rule:

The first 2 dog years count as 10.5 human years each.

Each year after that counts as 4 human years.

Write a program that takes the age of a dog as input and prints its equivalent age in human years.

=====
Input
=====
A single integer input (dog Age) - the age of the dog in full years.

======
Output
======
Print an integer - the dog's age converted to human years.

===========
Constraints
===========
2 <= dog_Age <= 30
*/

#include <iostream>

using namespace std;

int main()
{
    int d;
    cin >> d; cin.ignore();
    cout << 10.5*2+(d-2)*4 << endl;
}
