#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    vector<vector<int>> list;
    vector<int> f_list, s_list, result;
    int x, y, z, number, count = 0;

    list.push_back(f_list);
    list.push_back(s_list);

    cin >> x >> y;
    z = x * y;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < z; j++){
            cin >> number;
            list[i].push_back(number);
        }
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << list[0][count] + list[1][count] << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}