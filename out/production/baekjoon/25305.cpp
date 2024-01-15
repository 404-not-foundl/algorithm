#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int students, award, grade, change;

    cin >> students >> award;
    vector<int> list;

    for(int i = 0; i < students; i++){
        cin >> grade;
        list.push_back(grade);

        if(i == 0) continue;
        else{
            for(int j = i; j > 0; j--){
                if(list[j] > list[j - 1]){
                    change = list[j];
                    list[j] = list[j - 1];
                    list[j - 1] = change;
                }
            }
        }
    }

    cout << list[award - 1] << endl;

    return 0;
}