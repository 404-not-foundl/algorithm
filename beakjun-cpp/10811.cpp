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
        int first, second, size, count = 0;
        cin >> first >> second;
        size = second - first + 1;
        int duplicate[size+1];

        for(int j = size; j > 0; j--){
            duplicate[j] = basket[first + count];
            count++;
        }
        for(int j = 0; j < size; j++){
            basket[first+j] = duplicate[j+1];
        }
    } 

    for(int i = 1; i <= N; i++) cout << basket[i] << " ";
    cout << endl;

    return 0;
}