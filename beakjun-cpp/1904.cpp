#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int factorial(int number){
    int result = 1;
    for(int i = 1; i <= number; i++) result *= i;
    return result;
}

int Combination(int n, int r){
    int result = 0;
    result = factorial(n) / (factorial(n - r) * factorial(r));
    return result;
}

int main(void){
    int N, count = 1;

    cin >> N;

    for(int i = 1; i <= N/2; i++) count += Combination(N-i, i);

    cout << count << endl;
    
    return 0;
}