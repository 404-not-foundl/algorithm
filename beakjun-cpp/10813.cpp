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
    for(int i = 0; i <= N; i++) basket[i] = i;

    for(int i = 0; i < M; i++){
        int first, second;
        cin >> first >> second;

        basket[0] = basket[first];
        basket[first] = basket[second];
        basket[second] = basket[0];
    }

    for(int i = 0; i < N; i++) cout << basket[i+1] << " ";
    cout << endl;
    
    return 0;
}