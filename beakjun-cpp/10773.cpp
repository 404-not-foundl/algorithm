#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(void){
    int amount, number, result = 0;
    stack<int> list;

    cin >> amount;

    for(int i = 0; i < amount; i++){
        cin >> number;

        if(number == 0) list.pop();
        else list.push(number);
    }

    amount = list.size();
    for(int i = 0; i < amount; i++){
        result += list.top();
        list.pop();
    }

    cout << result << endl;

    return 0;
}