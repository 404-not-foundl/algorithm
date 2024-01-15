#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <queue>

using namespace std;

void printing(){
    int m, n, importance, biggest = 0, count = 0;
    queue<pair<int, int>> list;
    pair<int, int> putting;
    vector<int> important;

    for(int i = 0; i < m; i++){
        cin >> importance;
        putting = make_pair(importance, i+1);
        list.push(putting);
        if(biggest < importance) biggest = importance;
        if(!important.empty()){
            if(find(important.begin(), important.end(), importance) == important.end()) important.push_back(importance);
        }
    }
    reverse(important.begin(), important.end());

    do{
        if(list.front().first == important[count]){

        }else{

        }


    }while(count <= m);
}

int main(void){
    int amount;

    cin >> amount;

    for(int i = 0; i < amount; i++) printing();

    return 0;
}