#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <deque>

using namespace std;

int main(void){
    int amount, number;
    string order;
    deque<int> list;

    cin >> amount;

    for(int i = 0; i < amount; i++){
        cin >> order;

        if(order == "push_front"){
            cin >> number;
            list.push_front(number);
        }else if(order == "push_back"){
            cin >> number;
            list.push_back(number);
        }else if(order == "pop_front"){
            if(!list.empty()){
                cout << list.front() << endl;
                list.pop_front();
            }else{
                cout << -1 << endl;
            }
        }else if(order == "pop_back"){
            if(!list.empty()){
                cout << list.back() << endl;
                list.pop_back();
            }else{
                cout << -1 << endl;
            }
        }else if(order == "size"){
            cout << list.size() << endl;
        }else if(order == "empty"){
            cout << list.empty() << endl;
        }else if(order == "front"){
            if(!list.empty()){
                cout << list.front() << endl;
            }else{
                cout << -1 << endl;
            }
        }else if(order == "back"){
            if(!list.empty()){
                cout << list.back() << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }
    
    return 0;
}