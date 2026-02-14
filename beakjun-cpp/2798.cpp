#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int blackjack(vector<int> list, int least, int least_n, int i, int j, int k){
    if(i == -1){
       i++; j++; k++; 
    }else k++;

    if(k >= list.size()){
        ++j;
        k = j + 1;
        if(j >= list.size() - 1){
            ++i;
            j = i + 1;
            k = i + 2;
            if(i >= list.size() - 2){
                return least_n;
            }
        }
    }

    int result = list[i] + list[j] + list[k];

    if(result <= least){
        if(result >= least_n)
            least_n = result;
    }

    return blackjack(list, least, least_n, i, j, k);
}

int black_jack(vector<int> list, int least, int least_n){
    int i = -1, j = 0, k = 1;
    return blackjack(list, least, least_n, i, j, k);
}

int main(void){
    int many, least, least_n = 0, number;
    vector<int> list;

    cin >> many >> least;

    for(int i = 0; i < many; i++){
        cin >> number;
        list.push_back(number);
    }
    
    cout << black_jack(list, least, least_n) << endl;

    return 0;
}