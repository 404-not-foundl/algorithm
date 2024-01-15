#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <deque>

using namespace std;

int main(void){
    vector<int> list;
    int height;
    bool hundred = false;

    for(int i = 0; i < 9; i++){
        cin >> height;
        list.push_back(height);
    }

    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            int addup = 0;
            for(int k = 0; k < 9; k++){
                if(k == i || k == j){}
                else{
                    addup += list[k];
                }
            } 
            if(addup == 100){
                hundred = true;
                list.erase(list.begin() + j);
                list.erase(list.begin() + i);
            }
            if(hundred) break;
        }
        if(hundred) break;
    }

    sort(list.begin(), list.end());

    for(int i = 0; i < list.size(); i++) cout << list[i] << endl;
    
    return 0;    
}