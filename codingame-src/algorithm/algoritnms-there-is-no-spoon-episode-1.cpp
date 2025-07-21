//Algorithm to solve the "There is no Spoon - Episode 1" problem on CodinGame.
//https://www.codingame.com/training/medium/there-is-no-spoon-episode-1
//Puzzles  Classic puzzle - Medium There is no Spoon - Episode 1
//Pass all test cases to win the game.

/*
========
The Goal
========
The game is played on a rectangular grid with a given size. Some cells contain power nodes. The rest of the cells are empty.
The goal is to find, when they exist, the horizontal and vertical neighbors of each node.

=====
Rules
=====
To do this, you must find each (x1,y1) coordinates containing a node, and display the (x2,y2) coordinates of the next node to the right, and the (x3,y3) coordinates of the next node to the bottom within the grid.

If a neighbor does not exist, you must output the coordinates -1 -1 instead of (x2,y2) and/or (x3,y3).

You lose if:
You give an incorrect neighbor for a node.
You give the neighbors for an empty cell.
You compute the same node twice.
You forget to compute the neighbors of a node.

==========
Game Input
==========
The program must first read the initialization data from standard input. Then, provide to the standard output one line per instruction.

====================
Initialization input
====================
Line 1: one integer width for the number of cells along the x axis.
Line 2: one integer height for the number of cells along the y axis.
Next height lines: A string  line  containing  width  characters. A dot . represents an empty cell. A zero 0 represents a cell containing a node.

========================
Output for one game turn
========================
One line per node. Six integers on each line:   x1  y1  x2  y2  x3  y3

Where:
(x1,y1) the coordinates of a node
(x2,y2) the coordinates of the closest neighbor on the right of the node
(x3,y3) the coordinates of the closest bottom neighbor
If there is no neighbor, the coordinates should be -1 -1.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Spoon {
    int width;
    int height;
    vector<string> array;
public:
    Spoon();
    void find_neighbor();
};

int main() {
	Spoon spoon;
	spoon.find_neighbor();
}

Spoon::Spoon() {
    cin >> width; cin.ignore();
    cin >> height; cin.ignore();
    for (int i = 0; i < height; i++) {
        string line;
        getline(cin, line);
        array.push_back(line);
    }
}
void Spoon::find_neighbor() {
    bool found;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (array[i][j] == '0') {
                cout << j << " " << i;
                found = false;
                for (int n = j + 1; n < width; n++) {
                    if (array[i][n] == '0') {
                        cout << " " << n << " " << i;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << " -1 -1";
                found = false;
                for (int m = i + 1; m < height; m++) {
                    if (array[m][j] == '0') {
                        cout << " " << j << " " << m;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << " -1 -1";
                cout << endl;
            }
        }
    }
}