#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    bool map[101][101] = {false};
    int x1, y1, paper, biggest_x = 0, biggest_y = 0, result = 0;

    cin >> paper;

    for(int i = 0; i < paper; i++){
        cin >> x1 >> y1;

        if(biggest_x < (x1+10)) biggest_x = x1+10;
        if(biggest_y < (y1+10)) biggest_y = y1+10;

        for(int x = x1; x < 10+x1; x++){
            for(int y = y1; y < 10+y1; y++){
                map[x][y] = true;
            }
        }
    }

    for(int x = 0; x < biggest_x; x++){
        for(int y = 0; y < biggest_y; y++){
            if(map[x][y]) result++;
        }
    }

    cout << result << endl;
    
    return 0;
}