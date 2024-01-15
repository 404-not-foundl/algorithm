#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(void){
    int amount, number, biggest, count = 0, stacking = 1;
    vector<int> list;
    stack<int> holding;
    bool breaking = false, start = false;

    cin >> amount;
    biggest = amount;

    for(int i = 0; i < amount; i++){
        cin >> number;
        list.push_back(number);
        if(number == amount) start = true;
        if(start){
            if(biggest >= number) biggest = number;
            else breaking = true;
        }
    }
    
    if(breaking){
        cout << "NO" << endl;
    }else{
        do{
            if(stacking != amount+1){
                holding.push(stacking);
                stacking++;
                cout << "+" << endl;
            }
            if(holding.empty()){
                breaking = true;
                break;
            }
            if(!holding.empty() && holding.top() == list[count]){
                holding.pop();
                count++;
                cout << "-" << endl;
                if(count >= list.size()) break;
            }
        }while(count < list.size());
    }

    return 0;
}

//This takes too much time. Below is a way that ChatGPT made to less the Time.

/*
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    stack<int> s;
    vector<char> operations;

    int next = 1;
    for (int i = 0; i < n; ++i) {
        while (s.empty() || s.top() != sequence[i]) {
            if (next > n) {
                cout << "NO\n";
                return 0;
            }
            s.push(next++);
            operations.push_back('+');
        }
        s.pop();
        operations.push_back('-');
    }

    for (char c : operations) {
        cout << c << '\n';
    }

    return 0;
}
*/
