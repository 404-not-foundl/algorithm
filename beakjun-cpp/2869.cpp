#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    double a, b, v, r;
    int result;

    cin >> a >> b >> v;
    r = (v - a) / (a - b);
    result = abs(r);

    if(r - result > 0) result++;

    cout << result + 1 << endl;

    return 0;
}