#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

vector<pair<int, int>> list;
int main(void){
    int many, x, y;

    cin >> many;

    for(int i = 0; i < many; i++){
        cin >> x >> y;
        list.push_back({x, y});
    }

    sort(list.begin(), list.end());

    for(int i = 0; i < many; ++i)
        printf("%d %d\n", list[i].first, list[i].second);
    

    /*
    vector<int> list;
    int c, number, least_n, least;

    cin >> c;

    for(int i = 0; i < c * 2; i++){
        cin >> number;
        list.push_back(number);
    }

    for(int i = 0; i <  c * 2; i += 2){
        least = 100001;
        for(int j = 0; j < list.size(); j += 2){
            if(list[j] < least){
                least = list[j];
                least_n = j;
            }else if(list[j] == least){
                if(list[least_n + 1] > list[j + 1]){
                    least = list[j];
                    least_n = j;
                }
            }
        }

        printf("%d %d\n", list[least_n], list[least_n + 1]);

        list.erase(list.begin() + least_n);
        list.erase(list.begin() + least_n);

    }
    */
    return 0;
}