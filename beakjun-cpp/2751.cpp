#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int many, number;
    vector<int> list;

    cin >> many;

    for(int i = 0; i < many; i++){
        cin >> number;
        list.push_back(number);
    }

    sort(list.begin(), list.end());

    for(int i = 0; i < many; i++)
        printf("%d\n", list[i]);

    /*
    long long many, number, change;
    vector<long long> list;

    cin >> many;

    for(long long i = 0; i < many; i++){
        cin >> number;

        if(i == 0) list.push_back(number);
        else{
            for(long long j = 0; j < list.size(); j++){
                if(list[j] < number){
                    if(j == list.size() - 1) list.push_back(number);
                }else{
                    list.insert(list.begin() + j, number);
                    break;
                }
            }
        }
    }

    for(auto itr = list.begin(); itr != list.end(); ++itr)
        cout << *itr << endl;
    */

    return 0;
}