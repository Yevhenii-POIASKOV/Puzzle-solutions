//Clash of code - Fastest mode
//Write the correct code as quickly as possible to win.

/*
========
The Goal
========
You have a list of words that you want to use in a song, but want to organise them in a way that makes it easier to find words that rhyme.
You've realised that if you sort the words alphabetically based on their reversed form, then this will work nicely.

For example, the words: that, cat, bee, tree, pat, see when reversed give: taht, tac, eeb, eert, tap, ees which then sorted alphabetically would be eeb, eert, ees, tac, taht, tap, so we sort the original words the same way: bee, tree, see, cat, that, pat.

Given an integern, then in lines of words, sort the words based on their reversed forms, then print them out on separate lines in the new order.

=====
Input
=====
Line 1: an integern, the number of words to sort
Next n lines: individual lowercase words to be sorted

======
Output
======
n lines: the words, now sorted alphabetically based on their reversed forms
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
    vector<string> array;
    for (int i = 0; i < n; i++) {
        string word;
        getline(cin, word);
        reverse(word.begin(), word.end());
        array.push_back(word);
    }
    sort(array.begin(), array.end());
    for(auto &el : array){
        reverse(el.begin(), el.end());
        cout << el << endl;
    }

}
