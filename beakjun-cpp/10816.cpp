#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(void){
    int n, m, number;
    map<int, int> list;
    vector<int> compare, original;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> number;
        compare.push_back(number);
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> number;
        original.push_back(number);
        list[number] = 0;
    }

    for(int i = 0; i < compare.size(); i++) list[compare[i]]++;

    for(int i = 0; i < original.size(); i++){
        cout << list[original[i]] << " ";
    }cout << endl;

    return 0;
}