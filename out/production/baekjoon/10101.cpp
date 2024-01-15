#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int x, y, z;
    string result;

    cin >> x >> y >> z;

    if(x + y + z == 180){
        if(x == y && y == z) result = "Equilateral";
        else if(x == y || x == z || z == y) result = "Isosceles";
        else result = "Scalene";
    }else result = "Error";

    cout << result << endl;

    return 0;
}