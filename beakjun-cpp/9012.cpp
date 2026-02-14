#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(void){
    string question;
    int amount;

    cin >> amount;

    for(int i = 0; i < amount; i++){
        stack<char> list;
        cin >> question;

        for(int j = 0; j < question.size(); j++){
            if(question[j] == '('){
                list.push(question[j]);
            }else{
                if(list.size() != 0) list.pop();
                else{
                    list.push(question[j]);
                    break;
                }
            }
        }

        if(list.size() == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}