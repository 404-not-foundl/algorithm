#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

void solving(){
    bool map[50001][50001] = {false};
    int x, y, p, q;
    vector<pair<int, int>> list;

    cin >> x >> y >> p >> q;

    for(int i = x; i <= p; i++){
        for(int j = y; j <= q; j++){
            map[i][j] = true;
        }
    }

    cin >> x >> y >> p >> q;

    for(int i = x; i <= p; i++){
        for(int j = y; j <= q; j++){
            if(map[i][j] == true){
                pair<int, int> dot = make_pair(i, j);
                list.push_back(dot);
            }
        }
    }

    if(list.size() == 0) cout << 'd' << endl;
    else if(list.size() == 1) cout << 'c' << endl;
    else{
        bool line_x = true, line_y = true;

        for(int i = 1; i < list.size(); i++){
            if(list[i].first != list[i-1].first) line_x = false;
        }
        for(int i = 1; i < list.size(); i++){
            if(list[i].second != list[i-1].second) line_y = false;
        }

        if(line_x || line_y) cout << 'b' << endl;
        else cout << 'a' << endl;
    }
}

int main(){
    for(int i = 0; i < 4; i++) solving();

    return 0;
}