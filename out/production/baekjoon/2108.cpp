#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int c, number, one, two, three, four, c_f_i;
    float c_f;

    vector<int> list;

    for(int i = 0; i < c; i++){
        cin >> number;
        list.push_back(number);
        c_f += number;
    }

    sort(list.begin(), list.end());

    //one
    c_f_i /= c;
    c_f_i = c_f;
    if(c_f - c_f_i >= 0.5) one = c_f_i + 1;
    else one = c_f_i;

    //two
    two = list[c/2];
    
    //three
    



    return 0;
}