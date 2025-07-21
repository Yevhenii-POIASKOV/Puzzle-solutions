//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
Take every digit in the given number and decrease it by 1.
If the digit is 0, remove it.

=====
Input
=====
An integer n

======
Output
======
An integer m
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    cin >> n; cin.ignore();
    string num="";
    for(auto &el :n){
        int digit = el - '0';
        digit -= 1;
        if (digit >-1)
            num += to_string(digit);
    }
    cout << num << endl;
}
