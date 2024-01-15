#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int student[31] = {0}, i = 0;

    while(i != 28){
        int number;
        cin >> number;
        student[number] = 1;
        i++;
    };

    for(int i = 1; i <= 30; i++) 
        if(!student[i]) cout << i << endl;
    
    return 0;
}