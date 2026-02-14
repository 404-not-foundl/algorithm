#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int n, cnt = 0;
vector<int> list;

void Fibonacci(){
    cnt += 1;
    if(cnt == 1 || cnt == 2){
        list.push_back(1);
        if(cnt == n);
        else Fibonacci();
    }else{
        list.push_back(list[list.size() - 2] + list[list.size() - 1]);
        if(cnt == n);
        else Fibonacci();
    }
}

int main(void){
    cin >> n;

    Fibonacci();

    cout << list.back() << endl;

    return 0;
}