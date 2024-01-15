#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

void pabonachi(int number, int n1, int n2){
    int n3 = n1 + n2;
    if(number == 1){
        cout << n3 << endl;
    }else{
        pabonachi(number - 1, n2, n3);
    }
}

int main(){
    int number, n1 = 0, n2 = 1;

    cin >> number;

    if(number == 0) cout << n1 << endl;
    else if(number == 1) cout << n2 << endl;
    else pabonachi(number - 1, n1, n2);

    return 0;
}

/*
int pabonichi(int n){
    int n0 = 0, n1 = 1, number;
    vector<int> list;

    list.push_back(n0);
    list.push_back(n1);

    for(int i = 0; i < n - 1; i++){
        number = list[i] + list[i + 1];
        list.push_back(number);
    }
    
    return list[n];
}

int main(void){
    int n;

    cin >> n;
    
    cout << pabonichi(n) << endl;

    return 0;
}
*/