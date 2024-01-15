#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int x, y, w, h, rx, ry;

    cin >> x >> y >> w >> h;

    if(x <= w/2) rx = x;
    else rx = w - x;

    if(y <= h/2) ry = y;
    else ry = h - y;

    if(rx <= ry) cout << rx;
    else cout << ry;
    cout << endl;

    return 0;
}