//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
For a given string of ordered letters (eg. "a*c*ef" or "A*C*E"), where the * represents the missing characters, return the sum of the ASCII values of the missing letters.

=====
Input
=====
A strings of ordered letters with at least one character replaced by *. A string is either lowercase or uppercase.

======
Output
======
An integer representing the sum of the ASCII values of the 'missing' letters
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
    char first;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] != '*'){
            first = s[i];
        }
        else {
            sum+=(int)first+1;  
            first = (int)first+1;
        }
        
    }
    cout << sum << endl;
}
