#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> moving(vector<vector<int>> list){
    
    return list;
}

int main(void){
    int plate, start = 1;
    vector<vector<int>> list;
    vector<int> n1, n2, n3;

    list.push_back(n1);
    list.push_back(n2);
    list.push_back(n3);

    cin >> plate;

    for(int i = plate; i >= 1; --i)
        list[0].push_back(i);

    if(plate % 2 == 1) start++;
    


    return 0;
}