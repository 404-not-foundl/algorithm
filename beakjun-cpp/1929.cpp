#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int M, N, k;
    cin >> M>>N;
    
    for(int i = M; i <= N; ++i){
        k = 0;
        if(i == 1) k = 1;
        for(int j = 2; j <= sqrt(i); ++j){
            if(i % j == 0){
                k = 1;
                break;
            }
        }
        if(!k) printf("%d\n", i);
    }
    
    return 0;
}

/*
int main(){
    int first, last;
    
    cin >> first >> last;
    
    int arr[last + 1];
    
    for(int i = 1; i < last; i++){
        if(i >= first - 1) arr[i] = i;
        else arr[i] = 0;
    }
    
    for(int i = 2; i < last; i++){
        for(int j = 2; ; j++){
            if(i * j > last)
                break;
            else{
                arr[i * j] = 0;
            }
        }
    }
    
    for(int i = first; i <= last; i++){
        if(arr[i] && i > 1)
            cout << i << endl;
    }
    
    return 0;
}
 */