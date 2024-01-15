#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int biggest(vector<int> list, int total){
    int result = 0, compare;

    sort(list.begin(), list.end());

    for(int i = list.size()-1; i >= 0; i--){
        compare = total - list[i];
        total = list[i];
        if(compare > result) result = compare;
    }if(list[0] > result) result = list[0];

    return result;
}

int main(void){
    int width = 1, length = 1, number, w_paper, l_paper, count;
    vector<int> w_list, l_list;
    bool is_width;

    cin >> w_paper >> l_paper >> count;

    for(int i = 0; i < count; i++){
        cin >> is_width >> number;
        if(is_width) w_list.push_back(number);
        else l_list.push_back(number);
    }

    if(w_list.size()) width = biggest(w_list, w_paper);
    if(l_list.size()) length = biggest(l_list, l_paper);

    cout << width * length << endl;

    return 0;
}