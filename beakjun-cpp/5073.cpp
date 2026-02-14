#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int big(vector<int> result){
    int biggest = 0, answer;

    for(int i = 0; i < 3; i++){
        if(biggest < result[i]){
            biggest = result[i];
            answer = i;
        }
    }

    return answer;
}

bool triangle(vector<int> result){
    int adding = 0, biggest = big(result);

    for(int i = 0; i < 3; i++){
        if(i != biggest) adding += result[i];
    }

    if(result[biggest] >= adding) return false;
    else return true;
}

string compare(vector<int> result){
    if(triangle(result)){
        if(result[0] == result[1] && result[1] == result[2]){
            return "Equilateral";
        }else if(result[0] == result[1] || result[1] == result[2] || result[0] == result[2]){
            return "Isosceles";
        }else return "Scalene";
    }else return "Invalid";
}

int main(void){
    int x, y, z;
    vector<vector<int>> list;
    
    do{
        cin >> x >> y >> z;
        if(x == 0 && y == 0 && z == 0) break;

        vector<int> put_list;
        put_list.push_back(x);
        put_list.push_back(y);
        put_list.push_back(z);
        list.push_back(put_list);
    }while(1);

    for(int i = 0; i < list.size(); i++){
        cout << compare(list[i]) << endl;
    }

    return 0;
}