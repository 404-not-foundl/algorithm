#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int number, count, arr[246913] = {0};

    for(int i = 1; i < 246913; i++){
        bool yn = true;
            if(i == 1 || i == 0) arr[i] = 1;
            else{
                for(int j = 2; j <= sqrt(i); j++){
                    arr[i * j] = 1;
                }
            }
    }

    do{
        cin >> number;
        count = 0;

        for(int i = number + 1; i <= 2 * number; i++){
            if(!arr[i]) count++;
        }

        cout << count << endl;

    }while (number != 0);

    return 0;
}