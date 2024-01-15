#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int dots, least_x, least_y, most_x, most_y, result;
    vector<pair<int, int>> list;

    cin >> dots;

    for(int i = 0; i < dots; i++){
        int x, y;
        cin >> x >> y;
        list.push_back(pair<int, int>(x, y));

        if(!i){
            least_x = list[i].first;
            least_y = list[i].second;
            most_x = list[i].first;
            most_y = list[i].second;
        }
    }

    for(int i = 0; i < dots; i++){
        if(least_x > list[i].first) least_x = list[i].first;
        if(least_y > list[i].second) least_y = list[i].second;
        if(most_x < list[i].first) most_x = list[i].first;
        if(most_y < list[i].second) most_y = list[i].second;
    }

    result = (most_x - least_x) * (most_y - least_y);

    cout << result << endl;

    return 0;
}