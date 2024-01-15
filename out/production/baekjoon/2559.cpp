#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <deque>

using namespace std;

int main(void){
    int counting, adding, number;
    int list[100000] = {0};

    cin >> counting >> adding;

    for(int i = 0; i < counting; i++){
        cin >> number;

        for(int j = 0; j < adding; j++){
            list[i+j] += number;
        }
    }
    
    return 0;
}