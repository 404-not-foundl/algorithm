#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <deque>

using namespace std;

int main(void){
    int number, count = 0, m, n;
    deque<int> list;

    cin >> n >> m;

    for(int i = 1; i < n+1; i++) list.push_back(i);

    for(int i = 0; i < m; i++){
        int right = 0, left = 0;
        cin >> number;
        if(list.empty()) break;
        deque<int> compare_r = list, compare_l = list;

        if(list.front() == number){
            list.pop_front();
        }else{
            while(compare_r.front() != number){
                compare_r.push_back(compare_r.front());
                compare_r.pop_front();
                right++;
            }
            while(compare_l.front() != number){
                compare_l.push_front(compare_l.back());
                compare_l.pop_back();
                left++;
            }
            if(left <= right){
                count += left;
                list = compare_l;
            }else{
                count += right;
                list = compare_r;
            } 
        }
    }

    cout << count << endl;
    
    return 0;
}