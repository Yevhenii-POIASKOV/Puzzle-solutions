//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
You need to calculate the time it takes for a victim to escape a room based on their actions, represented by the following symbols:

. → Move forward by 1 step (2 seconds)
< → Move backwards by 2 steps (4 seconds)
| → Stop for 5 seconds

An additional 2 seconds must be added for a final step forward to escape. If the total time is 10 seconds or less, output "ERROR". Otherwise, output Room Escaped followed by the total_time in seconds.

=====
Input
=====
description → contains actions taken to escape the room, represented by symbols

======
Output
======
Line 1: Room Escaped
Line 2: total time → total time taken to escape the room in seconds
or
Line 1: ERROR
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string description;
    getline(cin, description);
    int time=0;
    for(auto &el : description){
        if (el=='.') time+=2;
        else if (el=='<') time+=4;
        else if (el=='|')time+=5;
    }
    if (time+2 <=10) {
        cout << "ERROR" << endl;
        return 0;
    }
    cout << "Room Escaped" << endl << time+2;
}
