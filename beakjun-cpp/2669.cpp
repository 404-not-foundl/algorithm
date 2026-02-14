#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    bool map[101][101] = {false};
    int result = 0, biggest_x = 0, biggest_y = 0;

    for(int i = 0; i < 4; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(x2 > biggest_x) biggest_x = x2;
        if(y2 > biggest_y) biggest_y = y2;

        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++){
                map[x][y] = true;
            }
        }
    }

    for(int x = 0; x <= biggest_x; x++){
        for(int y = 0; y <= biggest_y; y++){
            if(map[x][y]) result++;
        }
    }

    cout << result << endl;

    return 0;
}