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
void dfs(int cnt,
    vector<vector<int>> &vec){
    if(cnt == )
}

int main(void){
    vector<vector<int>> vec(6, vector<int>(3, 0));
    
    return 0;
}
/*
5 0 0 2 2 1 2 2 1 0 3 2 0 1 4 1 2 2 (1)
5 0 0 2 2 1 3 1 1 0 3 2 0 0 5 1 2 2 (0)
*/