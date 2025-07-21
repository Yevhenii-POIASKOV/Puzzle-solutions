//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
The program:
Your program must perform a bitwise NOT on a binary number given through the standard input and print the result to the standard output.

Warning, the number of binary digits must remain the same.

=====
Input
=====
1 binary number B

======
Output
======
The result of a NOT on B
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string B;
    cin >> B;
    for (char &c : B) {
        if (c == '0') cout << '1';
        else if (c == '1') cout << '0';
    }
    cout << endl;
}
