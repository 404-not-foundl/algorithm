#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int big(vector<int> result){
    int biggest = 0, answer;

    for(int i = 0; i < 3; i++){
        if(biggest < result[i]){
            biggest = result[i];
            answer = i;
        }
    }

    return answer;
}

int triangular(vector<int> result){
    int adding = 0, biggest = big(result);

    for(int i = 0; i < 3; i++){
        if(i != biggest) adding += result[i];
    }

    if(result[biggest] >= adding){
        return adding * 2 - 1;
    }else return result[biggest] + adding;
}

int main(void){
    vector<int> triangle;
    int number;

    for(int i = 0; i < 3; i++){
        cin >> number;
        triangle.push_back(number);
    }

    cout << triangular(triangle) << endl;

    return 0;
}