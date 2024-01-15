#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    string word;
    int many;

    cin >> many;

    for(int i = 0; i < many; i++){
        cin >> word;

        cout << word.front() << word.back() << endl;
    }

    return 0;
}