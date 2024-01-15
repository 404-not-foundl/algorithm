#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(){
    vector<int> list;
    int number, amount;
    string word;

    cin >> amount;

    for(int i = 0; i < amount; i++){
        cin >> word;

        if(word == "push"){
            cin >> number;
            list.push_back(number);
        }else if(word == "pop"){
            if(list.size() != 0){
                cout << list.back() << endl;
                list.pop_back();
            }else{
                cout << -1 << endl;
            }
        }else if(word == "size"){
            cout << list.size() << endl;
        }else if(word == "empty"){
            cout << list.empty() << endl;
        }else if(word == "top"){
            if(list.size() != 0){
                cout << list.back() << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }

    return 0;
}

/*
stack<int> list;

void stacked(){
    string word;
    int number;

    cin >> word;

    if(word == "push"){
        cin >> number;
        list.push(number);
    }else if(word == "pop"){
        if(list.size() != 0){
            cout << list.top() << endl;
            list.pop();
        }else{
            cout << -1 << endl;
        }
    }else if(word == "size"){
        cout << list.size() << endl;
    }else if (word == "empty"){
        cout << list.empty() << endl;
    }else if(word == "top"){
        cout << list.top() << endl;
    }
}

int main(void){
    int size;

    cin >> size;

    for(int i = 0; i < size; i++) stacked();

    return 0;
}
*/