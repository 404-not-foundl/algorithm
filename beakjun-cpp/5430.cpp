#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <deque>

using namespace std;

int main(void){
    int amount, sizing, number;
    char trash;
    
    cin >> amount;

    for(int i = 0; i < amount; i++){
        int count = 0;
        deque<int> list;
        string order_list;
        bool error = false, R = false;

        cin >> order_list >> sizing;

        while(list.size() != sizing){
            cin >> trash;
            cin >> number;
            list.push_back(number);
        }cin >> trash;
        
        for(int j = 0; j < order_list.size(); j++){
            if(list.empty() && order_list[j] == 'D'){
                error = true;
                break;
            }else{
                if(order_list[j] == 'R'){
                    if(R) R = false;
                    else R = true;
                }else{
                    if(!R){
                        list.pop_front();
                    }else{
                        list.pop_back();
                    }
                }
            }
        }

        if(error){
            cout << "error" << endl;
        }else{
            cout << '[';
            int list_size = list.size();
            for(int j = 0; j < list_size; j++){
                if(!R){
                    cout << list.front();
                    list.pop_front();
                }else{
                    cout << list.back();
                    list.pop_back();
                }
                if(j+1 != list_size) cout << ',';
            }cout << ']' << endl;    
        }
    }

    return 0;
}

// input 수정 필요. [] 다음에 [1,2,3,4] 입력시에 오류발생