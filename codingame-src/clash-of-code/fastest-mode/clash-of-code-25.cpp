//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Welcome to the Rectangle Factory. We make rectangles here. We will give you the size (height and width) and the material, and you will have to give us the desired rectangle.

=====
Input
=====
Line 1: An integer height for the height of the desired rectangle.
Line 2: An integer width for the width of the desired rectangle.
Line 3: A character material for the character the rectangle is made of

======
Output
======
height lines: The rectangle made of the specified material
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int height;
    cin >> height; cin.ignore();
    int width;
    cin >> width; cin.ignore();
    string material;
    cin >> material; cin.ignore();
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << material;
        }
        cout << endl;
    }
}
