//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Your program must insert the given operator (+, -, / or *) at index X of an integer number and output the result of the operation.

The operation is always valid and the result is always an integer. Plus "+" and minus "-" are the only operators that can be inserted at index 0.

=====
Input
=====
A character O, an integer X and an integer N, separated by spaces.
O is a mathematical operator from +, -, / and *.

======
Output
======
The result of the operation obtained by inserting O in N at index X
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char o;
    int x;
    string n;
    cin >> o >> x >> n; cin.ignore();
    string sub1="", sub2="";
    for(int i=0; i < n.size(); i++){
        if(i<x) sub1 += n[i];
        else sub2 += n[i];
    }
    if(x == 0 && (o == '-' || o == '+')) cout << o << n << endl;
    else{
        switch(o){
            case '+': cout << stoi(sub1) + stoi(sub2); break;
            case '-': cout << stoi(sub1) - stoi(sub2); break;
            case '/': cout << stoi(sub1) / stoi(sub2); break;
            case '*': cout << stoi(sub1) * stoi(sub2); break;
        }
    }
}
