//Clash of code - Reverse mode
//Understand the pattern and how to write code as quickly as possible to win.

/*
========
The Goal
========
The game mode is REVERSE : You do not have access to the statement. You have to guess what to do by observing the following set of tests:

================
Input:
0

Expected output:
0
================
================
Input:
44

Expected output:
4
================
================
Input:
179

Expected output:
9
================
================
Input:
64453

Expected output:
3
================
*/

#include <stdlib.h>
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int res = N % 10;
    printf("%d\n", res);
}
