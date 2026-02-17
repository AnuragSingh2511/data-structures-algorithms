//L.C - 2022 youtube

/*
int arr[][4] ..col mention is mandatory, row can be empty

2D to 1D transformation 
x = c*i + j

1D to 2D transformation
row = x/c
col = x%c
*/

// TC: O(m * n)
// We traverse the original array once

// SC: O(m * n)
// We create a 2D vector of size m × n

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

    if(m * n != original.size()){
        return {};
    }

    vector<vector<int>> res(m, vector<int>(n));

    for(int i = 0; i < original.size(); i++){
        res[i / n][i % n] = original[i];
    }

    return res;
}

int main() {

    /*
    Sample Input:
    original = [1,2,3,4,5,6]
    m = 2
    n = 3

    Sample Output:
    1 2 3
    4 5 6
    */

    vector<int> original = {1,2,3,4,5,6};
    int m = 2;
    int n = 3;

    vector<vector<int>> result = construct2DArray(original, m, n);

    if(result.empty()){
        cout << "Invalid dimensions";
        return 0;
    }

    for(auto &row : result){
        for(auto &val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
