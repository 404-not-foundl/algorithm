#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

void long_words(int many){

    for(int i = 1; i <= many / 4; i++){
        cout << "long" << " ";
    }

}

int main(void){
    int count;

    cin >> count;

    long_words(count);
    cout << "int" << endl;

    return 0;
}