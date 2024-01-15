#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int count = 0;

vector<int> recursion(string s, int l, int r, vector<int> result){
    ++result[1];

    if(l >= r){
        result[0] = 1;
        return result;
    }
    else if(s[l] != s[r]){
        result[0] = 0;
        return result;
    }
    else return recursion(s, l+1, r-1, result);
}

vector<int> isPalindrome(string s, vector<int> result){
    return recursion(s, 0, s.size() - 1, result);
}

int main(void){
    int many;
    string thing;
    vector<int> result;

    result.push_back(0);
    result.push_back(0);

    cin >> many;

    for(int i = 0; i < many; i++){
        result[0] = 0;
        result[1] = 0;

        cin >> thing;

        result = isPalindrome(thing, result);

        cout << result[0] << " " << result[1] << endl;
    }

    return 0;
}