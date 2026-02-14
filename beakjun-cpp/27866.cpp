#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    string word;
    int number;

    cin >> word >> number;

    cout << word[number - 1] << endl;

    return 0;
}