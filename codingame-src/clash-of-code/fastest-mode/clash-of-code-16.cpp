//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
You are given n and k, where n represents the number of objects to select from a set of k distinct objects. You must output the number of permutations, using this formula: k!/(k-n)!.

=====
Input
=====
Line 1: An integer n for the number of objects to select
Line 2: An integer k for the total number of objects

======
Output
======
Line 1: The number of permutations
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long fact(int n){
    long long fact=1;
    for(int i=1; i<=n;i++){fact*=i;}
    return fact;
}

int main()
{
    int x;
    cin >> x; cin.ignore();
    int y;
    cin >> y; cin.ignore();
    cout << fact(y)/fact(y-x) << endl;
}
