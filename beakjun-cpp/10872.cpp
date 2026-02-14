#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

void pactorial(int a, int result){
    if(a == 1 || a == 0){
        cout << result << endl;
    }else{
        result *= a;
        pactorial(a - 1, result);
    }
}

int main(){
    int number, result = 1;

    cin >> number;

    pactorial(number, result);

    return 0;
}
/*
int pactorial(int a){
    int result = 1;
    for(int i = 1; i <= a; i++){
        result *= i;
    }
    return result;
}

int main(void){
    int number;
    
    cin >> number;

    cout << pactorial(number) << endl;
    
    return 0;
}
*/