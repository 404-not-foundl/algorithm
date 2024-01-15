#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main(void){
    int amount, kill, count = 1;
    queue<int> list;
    vector<int> dead;

    cin >> amount;
    for(int i = 0; i < amount; i++) list.push(i+1);

    cin >> kill;

    while(!list.empty()){
        if(count % kill){
            list.push(list.front());
            list.pop();
        }else{
            dead.push_back(list.front());
            list.pop();
        }
        count++;
    }

    cout << "<";
    for(int i = 0; i < dead.size(); i++){
        if(i == dead.size()-1){
            cout << dead[i] << ">" << endl;
        }else{
            cout << dead[i] << ", ";
        }
    }
    
    return 0;
}