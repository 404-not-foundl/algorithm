#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <stack>

using namespace std;

void yes_no(string sentence){
    stack<char> sign;
    bool result = true;

    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == '(' || sentence[i] == ')' || sentence[i] == '[' || sentence[i] == ']'){
            if(sentence[i] == '(' || sentence[i] == '['){
                sign.push(sentence[i]);
            }else/*')' or ']'*/{
                if(sign.size() != 0){
                    if(sign.top() == '('){
                        if(sentence[i] == ')') sign.pop();
                        else result = false;
                    }else/*'['*/{
                        if(sentence[i] == ']') sign.pop();
                        else result = false;
                    }
                }else{
                    sign.push(sentence[i]);
                    result = false;
                }
            }
        }
    }

    if(!result || sign.size() != 0) cout << "no" << endl;
    else cout << "yes" << endl;
}

int main(void){
    string sentence;

    getline(cin, sentence);
    do{
        yes_no(sentence);
        getline(cin, sentence);
    }while(sentence != ".");

    return 0;
}