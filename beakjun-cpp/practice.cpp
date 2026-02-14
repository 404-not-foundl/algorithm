#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    vector<int> list;

    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.push_back(6);
    list.push_back(7);

    list.erase(list.begin()+2);

    for(int i = 0; i < list.size(); i++) cout << list[i] << endl;

    return 0;
}