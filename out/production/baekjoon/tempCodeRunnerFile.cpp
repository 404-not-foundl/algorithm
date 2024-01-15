#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int number;
    bool reverse = false;

    cin >> number;

    for(int i = number-1; i >= 0; --i){
        for(int j = 0; j < i; j++) cout << ' ';
        for(int j = 0; j < 2*(number-i) - 1; j++) cout << '*';
        cout << endl;
    }
    for(int i = 1; i < number; i++){
        for(int j = 0; j < i; j++) cout << ' ';
        for(int j = 0; j < 2*(number-i) - 1; j++) cout << '*';
        cout << endl;
    }

    return 0;
}