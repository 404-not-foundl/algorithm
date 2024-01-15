// C header
#include <stdio.h>	// Scanf, printf
#include <stdlib.h>	// Dynamic allocation (malloc)
#include <string.h>	// C String
// CPP header
#include <iostream>			// Cin, cout
#include <sstream>			// String partition
#include <vector>			// Vector
#include <iterator>			// Iterator
#include <algorithm>		// Algorithm
#include <cmath>			// Math
#include <numeric>			// Reduce, inner product
#include <string>			// String
#include <cstring>			// C-style strings
#include <map>				// Map
#include <unordered_map>	// Unordered map
#include <utility>			// Pair
#include <set>				// Set
#include <tuple>			// Tuple
#include <regex>			// Regular expression

using namespace std;

#define max(x,y) (x > y? x: y)
#define min(x,y) (x < y? x: y)

template <typename T>
void printV(vector<T> const &input, unsigned size=0)
{
    if(size) copy(input.begin(), input.begin()+size, ostream_iterator<T>(cout, " "));
    else copy(input.begin(), input.end(), ostream_iterator<T>(cout, " "));
    cout << endl;
    return;
}

int main(void){
    vector<vector<int>> vec(6, vector<int>(3, 0));
    int N = 4, resF = 0, a = 0, b = 0, c = 0;
    int zA, zB, zC;
    int maxA = 0, maxB = 0, maxC = 0;

    while(--N >= 0){
        a = 0; resF = 0; maxA = 0; maxC = 0;
        for(int i = 0; i < 6; ++i){
            for(int j = 0; j < 3; ++j){
                cin >> vec[i][j];
                a += vec[i][j];
                if(j == 0 && maxA < vec[i][0]) maxA = vec[i][0];
                if(j == 2 && maxC < vec[i][2]) maxC = vec[i][2];
            }
            if(vec[i][0]+vec[i][1]+vec[i][2] != 5) resF = 1;
        }
        if(a != 30) resF = 2;
        
        a = 0; zA = 0;
        for(int i = 0; i < 6; ++i){
            a += vec[i][0];
            if(vec[i][0]) ++zA;
        }
        c = 0; zC = 0;
        for(int i = 0; i < 6; ++i){
            c += vec[i][2];
            if(vec[i][2]) ++zC;
        }
        if(a != c) resF = 3;
        if(zC < maxA) resF = 5;
        if(zA < maxC) resF = 6;
        b = 0; maxB = 0;
        for(int i = 0; i < 6; ++i){
            if(maxB < vec[i][1]) maxB = vec[i][1];
            if(vec[i][1]) ++b;
        }
        if(maxB > b) resF = 4;

        printf("%s\n", resF? "0": "1");
        //printf("%d\n", resF);
    }
    
    return 0;
}
/*
5 0 0 2 2 1 2 2 1 0 3 2 0 1 4 1 2 2 (1)
5 0 0 2 2 1 3 1 1 0 3 2 0 0 5 1 2 2 (0)
*/