#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(void){
    int n, m, count = 0;
    string word;
    map<string, int> list;
    vector<string> result;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> word;
        list[word] = 1;
        result.push_back(word);
    }

    for(int i = 0; i < m; i++){
        cin >> word;
        if(list[word]) list[word]++;
    }

    for(int i = 0; i < result.size(); i++){
        count += list[result[i]];
    }

    cout << count - result.size() << endl;

    return 0;
}