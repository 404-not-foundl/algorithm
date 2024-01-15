#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(void){
    map<int, int> list;
    vector<int> compare, original;
    int putting, number;

    cin >> number;
    for(int i = 0; i < number; i++){
        cin >> putting;
        compare.push_back(putting);
    }

    cin >> number;
    for(int i = 0; i < number; i++){
        cin >> putting;
        original.push_back(putting);
        list[putting] = 0;
    }

    for(int i = 0; i < compare.size(); i++){
        list[compare[i]] = 1;
    }

    for(int i = 0; i < original.size(); i++){
        cout << list[original[i]] << " ";
    }
    cout << endl;


    return 0;
}