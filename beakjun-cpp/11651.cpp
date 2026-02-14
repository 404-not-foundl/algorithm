#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

vector<pair<int, int>> list;
int main(void){
    int many, x, y;

    cin >> many;

    for(int i = 0; i < many; i++){
        cin >> x >> y;
        list.push_back({y, x});
    }

    sort(list.begin(), list.end());

    for(int i = 0; i < many; ++i)
        printf("%d %d\n", list[i].second, list[i].first);
    
    return 0;
}