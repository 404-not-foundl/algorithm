#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int number, where;
    vector<int> list, list_r;

    for(int i = 0; i < 81; i++){
        cin >> number;
        list.push_back(number);
    }

    list_r = list;

    sort(list.begin(), list.end());

    for(int i = 0; i < 81; i++){
        if(list[80] == list_r[i]){
            where = i;
            break;
        }
    }

    cout << list[80] << endl;
    cout << where / 9 + 1 << " " << where % 9 + 1 << endl;
    
    return 0;
}