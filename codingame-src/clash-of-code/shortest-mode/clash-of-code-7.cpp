//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
When you post on the website Reddit, people can Upvote or Downvote your post. The website does not show you the exact number of Upvotes and Downvotes, but instead it shows you the Score and the Upvote Rate.

Score is the number of Upvotes minus the number of Downvotes. For example, if you have 8 Upvotes and 2 Downvotes, then your Score is 6.

Upvote Rate is the percentage of Upvotes. For example, if you have 8 Upvotes and 2 Downvotes, then your Upvote Rate is 80%.

Given a Scores S and an Upvote Rate R, find the number of Upvotes U and Downvotes D

=====
Input
=====
Line 1: The Score S
Line 2: The Upvote Rate R, expressed as an integer between 0 and 100

======
Output
======
Line 1: The number of Upvotes U
Line 2: The number of Downvotes D
*/

#include <iostream>

using namespace std;

int main()
{
    int s;
    cin >> s; cin.ignore();
    int r;
    cin >> r; cin.ignore();
    cout << -1 * r*s/(100 -2*r) << endl;
    cout << -1 * r*s/(100 -2*r) -s << endl;
}
