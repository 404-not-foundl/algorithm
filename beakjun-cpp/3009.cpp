#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int xy[2], list[3][2];

    for(int i = 0; i < 3; i++) cin >> list[i][0] >> list[i][1];

    for(int i = 0; i < 2; i++){
        list[1][i] == list[0][i] ? xy[i] = list[2][i] : list[1][i] == list[2][i] ? xy[i] = list[0][i] : xy[i] = list[1][i];
    }

    cout << xy[0] << " " << xy[1] << endl;

    return 0;
}