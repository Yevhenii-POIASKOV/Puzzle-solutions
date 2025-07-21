//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
You're given a list of integers representing links in a chain. Each number represents the value of a link, and consecutive links are connected. However, one link is missing! Your task is to find the missing link's value as quickly as possible.

All valid link values will be within the range 1 to N + 1.
If the given links are invalid, output Invalid input.

=====
Input
=====
Line 1: An integer N representing the number of links in the chain (excluding the missing one).
Line 2: N space-separated integers, representing the existing links in the chain, in no particular order.

======
Output
======
Line 1: The integer value of the missing link.
If the given links are invalid, output Invalid input.
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
    vector<int> array;
    for (int i = 0; i < n; i++) {
        int link;
        cin >> link; cin.ignore();
        if(link > n+1 || link <1) 
        {cout << "Invalid input" << endl;
        return 0;}
        array.push_back(link);
    }
    sort(array.begin(),array.end());
    for(int i=1; i<array.size();i++){
        if (array[i] == array[i-1]){
            cout << "Invalid input" << endl;
        return 0;
        }
        if (array[i] - array[i-1] == 2){
            cout << array[i] -1 << endl;
        }
    }
}
