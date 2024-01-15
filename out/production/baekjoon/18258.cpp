#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main(void){
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int amount, number;
    queue<int> list;
    string word;

    cin >> amount;

    for(int i = 0; i < amount; i++){
        cin >> word;

        if(word == "push"){
            cin >> number;
            list.push(number);
        }else if(word == "pop"){
            if(!list.empty()){
                cout << list.front() << endl;
                list.pop();
            }else cout << -1 << endl;
        }else if(word == "front"){
            if(!list.empty()){
                cout << list.front() << endl;
            }else cout << -1 << endl;
        }else if(word == "back"){
            if(!list.empty()){
                cout << list.back() << endl;
            }else cout << -1 << endl;
        }else if(word == "size"){
            cout << list.size() << endl;
        }else if(word == "empty"){
            cout << list.empty() << endl;
        }
    }

    
    return 0;
}