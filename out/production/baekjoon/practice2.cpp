#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    string anything = "[2nf4,";
    vector<int> list;

    for(int i = 0; i < anything.size(); i++){
        if(anything[i] >= 48 && anything[i] <= 57){
            list.push_back(anything[i]-48);
        }
    }

    for(int i = 0; i < list.size(); i++) cout << list[i] << ' ';
    cout << endl;

    return 0;
}