#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(){
    int many;

    cin >> many;

    return 0;
}

/*
bool compare(pair<int, int>& front, pair<int, int>& back){
    if(front.first > back.first){
        if(front.second > back.second) return 1;
        else return 0;
    }
    return 0;
}

int main(void){
    vector<pair<int, int>> list, rep_list;
    int weight, height, many, count = 1, r_count = 1;

    cin >> many;

    int result[many];

    for(int i = 0; i < many; i++){
        cin >> weight >> height;
        list.push_back({weight, height});
    }
    rep_list = list;

    sort(list.begin(), list.end(), compare);

    for(int i = 0; i < many; i++){
        result[i] = count;
        r_count++;
        if(list[i].first > list[i + 1].first){
            if(list[i].second > list[i+1].second) count = r_count;
        }
    }
    
    for(int i = 0; i < many; i++){
        for(int j = 0; j < many; j++){
            if(rep_list[i].first == list[j].first){
                if(rep_list[i].second == list[j].second){
                    cout << result[j] << " ";
                    break;
                }
            }
        }
    }
    cout << endl;
    
    return 0;
}
*/