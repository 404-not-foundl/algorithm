#include <iostream>
#include <vector>

using namespace std;

int main(){
    int count, number;
    vector<int> list;
    cin >> count;

    for(int i = 1; i <= count; i++){
        cin >> number;
        list.insert(list.end()-number, i);
    }

    for(int i = 0; i < list.size(); i++) cout << list[i] << " ";
    cout << endl;

    return 0;
}