#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int N, M;

    cin >> N >> M;

    int basket[N+1];

    for(int i = 0; i < N+1; i++) basket[i] = 0;

    for(int i = 0; i < M; i++){
        int start, end, ball;

        cin >> start >> end >> ball;

        for(int j = start; j <= end; j++) basket[j] = ball;
    }

    for(int i = 1; i <= N; i++) cout << basket[i] << " ";
    cout << endl;
    
    return 0;
}