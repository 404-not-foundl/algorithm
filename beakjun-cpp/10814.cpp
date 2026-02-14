#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

bool compare(const pair<int, string> &a, const pair<int, string> &b){
    if(a.first == b.first){
        return 0;
    }
    return a.first < b.first;
}

int main(void){
    vector<pair<int, string>> list;
    int many, age;
    string name;

    cin >> many;

    for(int i = 0; i < many; i++){
        cin >> age >> name;
        list.push_back(pair<int, string> (age, name));
    }

    sort(list.begin(), list.end(), compare);

    for(int i = 0; i < list.size(); ++i){
        cout << list[i].first << " " << list[i].second << endl;
    }
    

    return 0;
}