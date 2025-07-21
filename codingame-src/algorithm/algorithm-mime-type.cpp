//Algorithm to solve the "Mime Type" problem on CodinGame.
//https://www.codingame.com/training/easy/mime-type
//Puzzles  Classic puzzle - Easy MIME Type
//Pass all test cases to win the game.

/*
========
The Goal
========
MIME types are used in numerous internet protocols to associate a media type (html, image, video ...) with the content sent. The MIME type is generally inferred from the extension of the file to be sent.

You have to write a program that makes it possible to detect the MIME type of a file based on its name.

=====
Rules
=====
You are provided with a table which associates MIME types to file extensions. You are also given a list of names of files to be transferred and for each one of these files, you must find the MIME type to be used.

The extension of a file is defined as the substring which follows the last occurrence, if any, of the dot character within the file name.
If the extension for a given file can be found in the association table (case insensitive, e.g. TXT is treated the same way as txt), then print the corresponding MIME type. If it is not possible to find the MIME type corresponding to a file, or if the file doesn’t have an extension, print UNKNOWN.

==========
Game Input
==========
Input
Line 1: Number N of elements which make up the association table.
Line 2: Number Q of file names to be analyzed.
N following lines: One file extension per line and the corresponding MIME type (separated by a blank space).
Q following lines: One file name per line.

======
Output
======
For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Mime {
    int n;
    int q;
    map<string, string> mime;
public:
    Mime();
    void mime_type();
};

int main() {
    Mime mime;
	mime.mime_type();
}

Mime::Mime() {
    cin >> n; cin.ignore();
    cin >> q; cin.ignore();
    for (int i = 0; i < n; i++) {
        string ext;
        string mt;
        cin >> ext >> mt; cin.ignore();
        for (auto& c : ext) c = tolower((unsigned char)c);
        mime.emplace(ext, mt);
    }
}
void Mime::mime_type() {
    for (int i = 0; i < q; i++) {
        string fname;
        string ftype = "";
        getline(cin, fname); 
        size_t pos = fname.rfind('.');
        if (pos == string::npos) {}
        else {
            for (size_t i = pos + 1; i < fname.size(); i++) {
                ftype.push_back(tolower(fname[i]));
            }
        }
        if (ftype.empty() || mime.find(ftype) == mime.end()) {
            cout << "UNKNOWN" << endl;
        }
        else {
            cout << mime[ftype] << endl;
        }
    }
}