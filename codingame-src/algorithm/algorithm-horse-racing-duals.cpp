//Algorithm to solve the "Horse-racing Duals" problem on CodinGame.
//https://www.codingame.com/training/easy/horse-racing-duals
//Puzzles  Classic puzzle - Easy Horse-racing Duals
//Pass all test cases to win the game.

/*
========
The Goal
========
Casablanca’s hippodrome is organizing a new type of horse racing: duals. During a dual, only two horses will participate in the race. In order for the race to be interesting, it is necessary to try to select two horses with similar strength.

Write a program which, using a given number of strengths, identifies the two closest strengths and shows their difference with an integer (≥ 0).

=========
Game Input
=========
Input
Line 1: Number N of horses

The N following lines: the strength Pi of each horse. Pi is an integer.

======
Output
======
The difference D between the two closest strengths. D is an integer greater than or equal to 0.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Horse {
    int n;
    vector<int> hpi;
public:
    Horse();
    int min_pi();
};

int main() {
	Horse horse;
    cout << horse.min_pi() << endl;
}

Horse::Horse() {
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi; cin.ignore();
        hpi.push_back(pi);
    }
}
int Horse::min_pi() {
    int min = 10000000;
    sort(hpi.begin(), hpi.end());
    for (size_t i = 1; i < hpi.size(); i++) {
        if (hpi[i] - hpi[i - 1] < min) min = hpi[i] - hpi[i - 1];
    }
    return min;
}