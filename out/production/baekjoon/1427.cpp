#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    string list;

    cin >> list;

    sort(list.begin(), list.end(), greater());

    cout << list << endl;

    return 0;ㅁ
}