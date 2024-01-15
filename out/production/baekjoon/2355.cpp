#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    long long a, b, result;

    cin >> b >> a;

    if(a >= b) result = (a * a + a - b * b + b) / 2;
    else result = (b * b + b - a * a + a) / 2;

    cout << result << endl; 

    return 0;
}