#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 500
#define ll long long
#define lli long long int
using namespace std;
 
bool verifyArea(int ax, int ay, int bx, int by, int cx, int cy, int dx, int dy, int rx, int ry){
    if((rx >= ax && ry >= ay) && (rx <= bx && ry >= by) && (rx <= cx && ry <= cy) && (rx >= dx && ry <= dy))    return 1;
    else return 0;
}
int main() {
    int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    while (cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry){
        bool result = verifyArea(ax, ay, bx, by, cx, cy, dx, dy, rx, ry);
        cout << result << endl;
    }
    return 0;
}