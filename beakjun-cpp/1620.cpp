#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(void){
    int n, m;
    string word;
    map<string, string> list;

    cin >> n >> m;

    for(int i = 1; i < n+1; i++){
        cin >> word;
        list[to_string(i)] = word;
    }

    for(int i = 0; i < m; i++){
        cin >> word;
        if(list.find(word) != list.end()){
            cout << list[word] << endl;
        }else{
            cout << 
        }  
    }

    return 0;
}