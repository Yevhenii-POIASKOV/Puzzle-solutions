//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
You want to input an integer on an old calculator. Unfortunately, some of the number buttons are broken. You know which digits still work and are given a target number you want to reach or exceed. Your goal is to find the smallest integer greater than or equal to the target that you can type using only the working buttons.

=====
Input
=====
Line 1: An integer target n in the number you wish to reach.
Line 2: A string of digits button - the working buttons. All characters are unique and chosen from 0123456789. (It is no necessary sorted)

======
Output
======
The smallest integer greater than or equal ton that can be composed using only the working buttons.
*/

#include <iostream>
#include <string>

using namespace std;

bool isbutton(int num, const string& button) {
    string s = to_string(num);
    for (char& c : s) {
        if (button.find(c) == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n; cin.ignore();
    string button;
    getline(cin, button);
    while (!isbutton(n, button)) {
        n++;
    }
    cout << n << endl;
}
