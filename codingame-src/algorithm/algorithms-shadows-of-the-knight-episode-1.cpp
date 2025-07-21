//Algorithm to solve the "Shadows of the Knight - Episode 1" problem on CodinGame.
//https://www.codingame.com/training/medium/shadows-of-the-knight-episode-1
//Puzzles  Classic puzzle - Medium Shadows of the Knight - Episode 1
//Pass all test cases to win the game.

/*
========
The Goal
========
You will look for the hostages on a given building by jumping from one window to another using your grapnel gun. Your goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately, you have a limited number of jumps before the bombs go off...

=====
Rules
=====
Before each jump, the heat-signature device will provide you with the direction of the bombs based on your current position:
U (Up)
UR (Up-Right)
R (Right)
DR (Down-Right)
D (Down)
DL (Down-Left)
L (Left)
UL (Up-Left)

Your mission is to program the device so that it indicates the location of the next window you should jump to in order to reach the bombs' room as soon as possible.

Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).

==========
Game Input
==========
The program must first read the initialization data from standard input. Then, within an infinite loop, read the device data from the standard input and provide to the standard output the next movement instruction.

====================
Initialization input
====================
Line 1 : 2 integers W H. The (W, H) couple represents the width and height of the building as a number of windows.
Line 2 : 1 integer N, which represents the number of jumps you can make before the bombs go off.
Line 3 : 2 integers X0 Y0, representing your starting position.

=======================
Input for one game turn
=======================
The direction indicating where the bomb is.

========================
Output for one game turn
========================
A single line with 2 integers X Y separated by a space character. (X, Y) represents the location of the next window you should jump to. X represents the index along the horizontal axis, Y represents the index along the vertical axis. (0,0) is located in the top-left corner of the building.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Batman_defuse {
    int w;
    int h;
    int n;
    int x0;
    int y0;
    int U, D, L, R;
public:
    Batman_defuse();
    void bomb_defuse();
};

int main() {
	Batman_defuse batman_defuse;
	batman_defuse.bomb_defuse();
}
Batman_defuse::Batman_defuse() {
    cin >> w >> h; cin.ignore();
    cin >> n; cin.ignore();
    cin >> x0 >> y0; cin.ignore();
    U = 0; D = h; L = 0; R = w;
}
void Batman_defuse::bomb_defuse() {
    while (1) {
        string bomb_dir;
        cin >> bomb_dir; cin.ignore();
        for (auto const& el : bomb_dir) {
            if (el == 'U') { D = y0 - 1; }
            if (el == 'D') { U = y0 + 1; }
            if (el == 'L') { R = x0 - 1; }
            if (el == 'R') { L = x0 + 1; }
        }
        x0 = (L + R) / 2;
        y0 = (U + D) / 2;
        cout << x0 << " " << y0 << endl;
    }
}