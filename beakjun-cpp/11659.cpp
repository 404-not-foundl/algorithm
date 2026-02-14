#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int list[n+1];
    list[0] = 0;

    for(int i = 1; i <= n; i++){
        int number;
        cin >> number;

        if(i == 0) list[i] = number;
        else list[i] = list[i-1] + number;
    }

    for(int i = 0; i < m; i++){
        int x, y, result;

        cin >> x >> y;

        result = list[y] - list[x - 1];

        cout << result << endl;
    }

    return 0;
}

/*
//시간초과
void adding(int i, int j){
    int result = 0;
    i--;j--;

    for(int x = i; x <= j; x++) result += list[x];

    cout << result << endl;
}

int main(void){
    int n, m, i, j, number;

    cin >> n >> m;

    for(int x = 0; x < n; x++){
        cin >> number;
        list.push_back(number);
    }

    for(int x = 0; x < m; x++){
        cin >> i >> j;
        adding(i, j);
    }

    return 0;
}
*/