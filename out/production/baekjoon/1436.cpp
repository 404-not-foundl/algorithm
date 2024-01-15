#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int isit(int number){
    bool yn = false;
    int ten_c = log10(number) + 1, count = 0,
        n_compare = number;

    for(int i = 0; i < ten_c; i++){
        if(n_compare%10 == 6){
            count++;
            if(count == 3){
                yn = true;
                break;
            }
        }else count = 0;

        n_compare /= 10;
    }

    if(yn) return number;
    else return 0;
}

int main(void){
    int count = 0, number, result, sixsixsix = 666;

    cin >> number;

    do{
        result = isit(sixsixsix);
        if(result) ++count;
        ++sixsixsix;
    }while(number != count);

    cout << result << endl;

    return 0;
}