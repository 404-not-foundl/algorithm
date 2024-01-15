#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main(void){
    int card, count = 1;
    queue<int> list;

    cin >> card;
    for(int i = 0; i < card; i++) list.push(i+1);

    if(!list.empty()){
        while(list.size() != 1){
            if(count % 2){
                list.pop();
            }else{
                list.push(list.front());
                list.pop();
            }
            count++;
        }
        cout << list.front() << endl;
    }
    
    return 0;
}