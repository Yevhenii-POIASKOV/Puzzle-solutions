//Algorithm to solve the "The Descent" problem on CodinGame.
//https://www.codingame.com/training/easy/the-descent
//Puzzles Classic puzzle - Easy The Descent
//Pass all test cases to win the game.

/*
========
The Goal
========
Destroy the mountains before your starship collides with one of them. For that, shoot the highest mountain on your path.

=====
Rules
=====
At the start of each game turn, you are given the height of the 8 mountains from left to right.
By the end of the game turn, you must fire on the highest mountain by outputting its index (from 0 to 7).
Firing on a mountain will only destroy part of it, reducing its height. Your ship descends after each pass.

==========
Game Input
==========
Within an infinite loop, read the heights of the mountains from the standard input and print to the standard output the index of the mountain to shoot.

=======================
Input for one game turn
=======================
8 lines: one integer mountainH per line. Each represents the height of one mountain given in the order of their index (from 0 to 7).

========================
Output for one game turn
========================
A single line with one integer for the index of which mountain to shoot.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Descent {
    int max_h;
    int max_id;
    int mountain_h;
public:
	Descent() : max_h(0), max_id(0), mountain_h(0) {}
    void mountain_destroy();
};

int main() {
	Descent descent;
	descent.mountain_destroy();
}
void Descent::mountain_destroy() {
    while (1) {
        max_h = -1;
        max_id = 0;
        for (int i = 0; i < 8; i++) {
            cin >> mountain_h; cin.ignore();
            if (max_h < mountain_h) {
                max_h = mountain_h;
                max_id = i;
            }
        }
        cout << max_id << endl;
    }
}