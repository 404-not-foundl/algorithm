#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int arr[5], number, average = 0, change;

    for(int i = 0; i < 5; i++){
        cin >> number;
        average += number;
        arr[i] = number;

        if(i == 0) continue;
        else{
            for(int j = i; j > 0; j--){
                if(arr[j] < arr[j - 1]){
                    change = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = change;
                }
            }
        }
    }

    average /= 5;

    cout << average << endl << arr[2] << endl;
    
    return 0;
}