//Clash of code - Shortest mode
//Write the shortest code possible to win.

/*
========
The Goal
========
To find the rainfall for a week 
On Rainy days R, 4mm of rain falls
No rain falls on Sunny days S

=====
Input
=====
Line 1 a string containing 7 characters representing Weather forecast

======
Output
======
Write total rainfall
Integer
*/

#include <iostream>

using namespace std;

int main(){
   char h;
   int c=0;
   for(int i=0;i<7;i++){
     cin>>h;
     c+=(h=='R'?4:0);
   }
   cout<<c<<endl;
}
