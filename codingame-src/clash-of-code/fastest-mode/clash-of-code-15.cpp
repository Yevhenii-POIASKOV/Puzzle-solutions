//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
Find the number of palindromes in n given words and write as well the words that are not palindromes.

=====
Input
=====
Line 1: An Integer n number of words
Next n lines: A String mot word

======
Output
======
A number of lines: Words which are not palindromes, one word per line
Last line: Number of palindromes
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    string rev;
    int count;
    for (int i = 0; i < n; i++) {
        string mot;
        getline(cin, mot);
        rev = mot;
        reverse(mot.begin(), mot.end());
        if(rev==mot){
            count++;
        }
        else cout << rev << endl;
    }
    cout << count << endl;
}
