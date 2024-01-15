#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    vector<string> list;
    string word;
    int many;

    cin >> many;

    for(int i = 0; i < many; ++i){
        cin >> word;
        list.push_back(word);
    }
    
    sort(list.begin(), list.end());

    
    for(int i = 0; i < list.size(); ++i)
        cout << list[i] << endl;
    

    return 0;
}