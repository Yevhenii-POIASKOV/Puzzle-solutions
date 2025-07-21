//Algorithm to solve the "Power of Thor - Episode 1" problem on CodinGame.
//https://www.codingame.    com/training/easy/power-of-thor-episode-1
//Puzzles Classic puzzle - Easy Power of Thor - Episode 1
//Pass all test cases to win the game.

/*
========
The Goal
========
Your program must allow Thor to reach the light of power.

=====
Rules
=====
Thor moves on a map which is 40 wide by 18 high. Note that the coordinates (X and Y) start at the top left! This means the most top left cell has the coordinates "X=0,Y=0" and the most bottom right one has the coordinates "X=39,Y=17".

Once the program starts you are given:
the variable lightX: the X position of the light of power that Thor must reach.
the variable lightY: the Y position of the light of power that Thor must reach.
the variable initialTX: the starting X position of Thor.
the variable initialTY: the starting Y position of Thor.
At the end of the game turn, you must output the direction in which you want Thor to go among:

==========
Game Input
==========
The program must first read the initialization data from the standard input, then, in an infinite loop, provides on the standard output the instructions to move Thor.

====================
Initialization input
====================
Line 1: 4 integers lightX lightY initialTX initialTY. (lightX, lightY) indicates the position of the light. (initialTX, initialTY) indicates the initial position of Thor.

======================
Input for a game round
======================
Line 1: the number of remaining moves for Thor to reach the light of power: remainingTurns. You can ignore this data but you must read it.

=======================
Output for a game round
=======================
A single line providing the move to be made: N NE E SE S SW W ou NW
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Thor_power {
    int light_x;
    int light_y;
    int initial_tx;
    int initial_ty;
public:
    Thor_power();
    void thor_way();
};

int main() {
    Thor_power thor_power;
	thor_power.thor_way();
}

Thor_power::Thor_power() {
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
}
void Thor_power::thor_way() {
    while (true) {
        int remaining_turns;
        cin >> remaining_turns; cin.ignore();
        if (initial_ty > light_y)
        {
            cout << "N";
            initial_ty--;
        }
        else if (initial_ty < light_y)
        {
            cout << "S";
            initial_ty++;
        }
        if (initial_tx > light_x) {
            cout << "W";
            initial_tx--;
        }
        else if (initial_tx < light_x)
        {
            cout << "E";
            initial_tx++;
        }
        cout << endl;
    }
}