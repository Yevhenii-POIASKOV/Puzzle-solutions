//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Your task is to choose which unit from Disciples 2 is more powerful.
The power of one unit is its health + attack.
If the powers are equal, there is a draw

=====
Input
=====
Line 1: First unit name
Line 2: First unit health points
Line 3: First unit attack
Line 4: Second unit name
Line 5: Second unit health points
Line 6: Second unit attack

======
Output
======
Line 1: The name of the more powerful unit or draw
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string first_name;
    getline(cin, first_name);
    int first_health;
    cin >> first_health; cin.ignore();
    int first_attack;
    cin >> first_attack; cin.ignore();
    string second_name;
    getline(cin, second_name);
    int second_health;
    cin >> second_health; cin.ignore();
    int second_attack;
    cin >> second_attack; cin.ignore();
    if (first_health + first_attack == second_health + second_attack) {
        cout << "Draw";
    }
    else cout << (first_health+first_attack > second_health+second_attack ? first_name : second_name) << endl;
}
