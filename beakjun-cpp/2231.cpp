#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int number, hm = 8, compare;
    bool if_not = true;

    cin >> number;
    compare = number;

    for(int i = 1000000; i > 0; i /= 10){
        hm--;
        if(number / i) break;
    }

    if(hm >= 2){
        compare -= (hm) * 9;
    }else compare = 0;

    if(compare < 0) compare = 0;

    for(int i = compare; i < number; i++){
        int dif = 0, m, comparing = i;

        for(int j = hm - 1; j >= 0; j--){
            m = comparing / pow(10, j);
            dif += m;
            comparing -= m * pow(10, j);
        }

        if(dif + i == number){
            if_not = false;
            compare = i;
            break;
        }
    }

    if(if_not) compare = 0;

    cout << compare << endl;

    return 0;
}