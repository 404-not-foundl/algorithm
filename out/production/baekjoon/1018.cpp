#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int counting_bw(vector<string> list, int bw){
    int count = 0, order = 0, length = 8, width = 8;
    char color[2];

    if(bw) {color[1] = 'B'; color[0] = 'W';}
    else {color[1] = 'W'; color[0] = 'B';}

    for(int i = 0; i < length; i++){
        for(int j = 0; j < width; j++){
            ++order;
            if(list[i][j] != color[order%2]) count++;
        }
        if((width+1)%2) order++;
    }

    return count;
}

int organizing(vector<string> list, int length, int width){
    int smallest = 2501, bw = 1;
    pair<int, int> score_list[length - 7][width - 7];

    for(int i = 0; i < length - 7; i++){
        for(int j = 0; j < width - 7; j++){
            vector<string> comparing;
            for(int a = i; a < i + 8; a++){
                string putting;
                for(int b = j; b < width + 8; b++){
                    putting.push_back(list[a][b]);
                }
                comparing.push_back(putting);
            }
            score_list[i][j].first = counting_bw(comparing, bw);
            score_list[i][j].second = counting_bw(comparing, bw - 1);
        }
    }

    for(int i = 0; i < length - 7; i++){
        for(int j = 0; j < width - 7; j++){
            if(score_list[i][j].first < smallest) smallest = score_list[i][j].first;
            if(score_list[i][j].second < smallest) smallest = score_list[i][j].second;
        }
    }
    
    return smallest;
}

int main(void){
    int length, width, bw = 1;
    vector<string> list, r_list;
    string line;

    cin >> length >> width;

    for(int i = 0; i < length; i++){
        cin >> line;
        list.push_back(line);
    }

    cout << organizing(list, length, width) << endl;

    return 0;
}