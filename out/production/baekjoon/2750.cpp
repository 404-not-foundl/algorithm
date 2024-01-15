#include <iostream>
#include <vector>
using namespace std;

int main(){
    int many, number, change;
    vector<int> result;

    cin >> many;

    for(int i = 0; i < many; i++){
        cin >> number;
        result.push_back(number);

        if(i == 0){
            continue;
        }else{
            for(int j = result.size() - 1; j > 0; j--){
                if(result[j] < result[j - 1]){
                    change = result[j];
                    result[j] = result[j - 1];
                    result[j - 1] = change;
                }
            }
        }
    }

    for(int i = 0; i < result.size(); i++)
        printf("%d\n", result[i]);
    
    return 0;
}