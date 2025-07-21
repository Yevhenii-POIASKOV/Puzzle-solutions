//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
Gives output based on the input strings. If the length of the string is even, change the whole string to uppercase, otherwise lowercase. In case no string is provided as input then the output must be a blank line.

=====
Input
=====
Line 1: An integer N for the number of input strings
Next N lines: An input string which contains letters, digits and special characters, or a blank line

======
Output
======
N lines: The input strings converted to the appropriate case
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string row;
        getline(cin, row);
        if(row.size() %2 == 0){
            for(auto &el : row){
                el = toupper(el);
            }
        }
        else{
            for(auto &el : row){
                el = tolower(el);
            }
        }
        cout << row << endl;
    }
}

