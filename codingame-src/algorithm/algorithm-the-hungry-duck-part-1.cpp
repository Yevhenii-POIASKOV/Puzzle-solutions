//Algorithm to solve the "The hungry duck - part 1" problem on CodinGame.
//https://www.codingame.com/training/hard/the-hungry-duck---part-1/solution
//Puzzles  Classic puzzle - Hard The hungry duck - part 1
//Pass all test cases to win the game.

/*
====
Goal
====
You are a duck sitting in the top left field of a W×H-sized lake.
In every field of the lake is a different amount of food.
Your duck is only allowed to move to the right or down.
What is the maximum amount of food you can eat before reaching the bottom right field?

In part 1 you only swim in small lakes where you don't have to care about timeouts.

=====
Input
=====
Line 1: Two space separated integers W and H for the width and height of the room
Next H lines: W integers for the amount of food
Output
Line 1: The maximum amount of food you are able to eat.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Duck {
    int w;
    int h;
    vector<vector<int>> matrix;
public:
    Duck();
    int max_way();
};
int main() {
    Duck duck;
	duck.max_way();
}

Duck::Duck() {
    cin >> w >> h; cin.ignore();
}
int Duck::max_way() {
    for (int i = 0; i < h; i++) {
        vector<int> row;
        for (int j = 0; j < w; j++) {
            int up = 0, left = 0;
            int food;
            cin >> food; cin.ignore();
            if (j - 1 < 0) {}
            else left = food + row[j - 1];
            if (i - 1 < 0) {}
            else up = food + matrix[i - 1][j];
            if (up != 0 || left != 0) food = max(up, left);
            row.push_back(food);
        }
        matrix.push_back(row);
    }
    cout << matrix[h - 1][w - 1] << endl;
}