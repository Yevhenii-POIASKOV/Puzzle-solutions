//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
CodinGame.com is an online platform for programmers to improve their coding skills through game-based challenges and puzzles.

The site has a "leveling" system - by doing various activities you gain XP and once you get enough XP you get promoted to the next level. Specifically, to get from level L - 1 to level L you need (rounded down) (L^1.5)* 10 XP

For example, to go from level 2 to level 3 you need 
3^1.5*10 = 51.96152423 ≈ 51 additional XP.

Your task is to implement the algorithm that determines how much more XP a player needs to level up.    

=====
Input
=====
Line 1: An integer level for the level the user is currently on.
Line 2: An integer xp for the amount of XP the user has collected since reaching level

======
Output
======
The amount of XP the user has to gain to reach the next level (as an integer), or "LEVEL UP" if the user already has enough XP to level up.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{    
    int level;
    cin >> level; cin.ignore();
    int xp;
    cin >> xp; cin.ignore();
    int e = floor(pow(level+1, 1.5)*10) - xp;
    if (e<=0) cout << "LEVEL UP" << endl;
    else cout << e << endl;
}
