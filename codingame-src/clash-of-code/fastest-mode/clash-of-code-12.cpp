//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Storyline:
You work in NASA, and must check if the rocket will reach Mars

The Problem:
You must create a program to calculate if rocket will reach Mars

Criterion of a Failing rocket:
- If velocity multiplied by the time is less than distance to Mars 
- If fuel multiplied by the fuel consumption is less than distance

Notes:
If there is less time, print 'Failure, Not enough time'
If there is less fuel, print 'Failure, Not enough fuel'
If both only print 'Failure, Not enough time' 
If rocket is successful, print 'Welcome to Mars' 
time will be in hours
fuel will be in liters
fuel_consumption will be in distance per 1 liter of fuel 
distance will be in kilometers


=====
Input
=====
time: Integer
fuel: Integer
fuel_consumption: Integer
distance: Integer

======
Output
======
answer: String
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int distance;
    cin >> distance; cin.ignore();
    int time;
    cin >> time; cin.ignore();
    int velocity;
    cin >> velocity; cin.ignore();
    int fuel;
    cin >> fuel; cin.ignore();
    int fuel_consumption;
    cin >> fuel_consumption; cin.ignore();

    bool btime = (velocity* time< distance);
    bool bfuel = (fuel * fuel_consumption < distance);
    if (btime) {
        cout << "Failure, Not enough time" << endl;
    }
    else if (bfuel) {
        cout << "Failure, Not enough fuel" << endl;
    } 
    if(!btime && !bfuel) {
        cout << "Welcome to Mars" << endl;
    }
}