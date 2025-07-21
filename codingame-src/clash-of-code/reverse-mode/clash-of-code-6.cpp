//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
4
0
1
2
3

Expected output:
true
false
true
false
================
================
Input:
1
44

Expected output:
true
================
================
Input:
1
179

Expected output:
false
================
================
Input:
3
3254
24
654

Expected output:
true
true
true
================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x; cin.ignore();
        if(x%2==0)cout << "true" << endl;
        else cout << "false" << endl;
    }
}
