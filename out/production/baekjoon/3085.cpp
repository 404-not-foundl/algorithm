#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int n;
    vector<vector<char>> map;
    char color;
    cin >> n;

    for(int i = 0; i < n; i++){
        vector<char> list;
        for(int j = 0; j < n; j++){
            cin >> color;
            list.push_back(color);
        }
        map.push_back(list);
    }

    return 0;
}