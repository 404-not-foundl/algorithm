#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int cnt_fib = 0, cnt_fibonacci = 0;
vector<int> list;

int fib(int n){
    if(n == 1 || n == 2){
        cnt_fib++;
        return 1;
    }else return (fib(n - 1) + fib(n - 2));
}

void fibonacci(int n){
    list.push_back(0);
    list.push_back(1);
    list.push_back(1);

    if(n >= 3){
        for(int i = 3; i <= n; i++){
            list.push_back(list[i-1] + list[i-2]);
            cnt_fibonacci++;
        }
    }
}

int main(void){
    int n, ect;
    cin >> n;
    
    ect = fib(n);
    fibonacci(n);

    cout << cnt_fib << ' ' << cnt_fibonacci << endl;
    
    return 0;
}