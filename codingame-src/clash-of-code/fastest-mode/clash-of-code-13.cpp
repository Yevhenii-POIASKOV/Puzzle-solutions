//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
The program:
Your program must switch the case of each character of the given string.

=====
Input
=====
S a string.

======
Output
======
S with lowercase letters instead of uppercase letters and vice-versa.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(auto & el: s){
        if (isupper(el)) el = tolower(el);
        else el = toupper(el);
    }
    cout << s << endl;
}
