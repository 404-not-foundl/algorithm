#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> list;
int least_cost;

void listing() {
	int count, number;
	least_cost = 2147483647;

	cin >> count;

	for (int i = 0; i < count; i++) {
		vector<int> example;
		for (int j = 0; j < 3; j++) {
			cin >> number;
			example.push_back(number);
		}
		list.push_back(example);
	}
}

void finding(int now, int adding, int address) {
    int least = 2147483647, to_add;
    for(int i = 0; i < 3; i++){
        if(i != now){
            if(list[address][i] < least){
                least = list[address][i];
                to_add = i;
            }
        }
    }

	int now_adding = adding + list[address][to_add];
	if (address != list.size() - 1) {
		finding(to_add, now_adding, address + 1);
	}else {
		if (now_adding < least_cost) least_cost = now_adding;
	}


}


int main() {
	listing();
	finding(3, 0, 0);

	cout << least_cost << endl;

	return 0;
}
