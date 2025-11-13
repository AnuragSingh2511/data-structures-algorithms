#include<iostream>
#include<vector>
using namespace std;

/*
1st approach: Brute(I think)
2nd approach : Index method -> best solution
*/

/*
🧩 What does k = k % arr.size() do?

It ensures that even if you rotate more times than the array length,
you still get the same result.

For example:
Array = {10, 20, 30, 40, 50, 60}
Length = 6

Right shift by k = 2 → {50, 60, 10, 20, 30, 40} ✅

Right shift by k = 8 → same as right shift by 8 % 6 = 2 → {50, 60, 10, 20, 30, 40} ✅

Without doing %, your formula (i + k) % arr.size() still works (because of % inside), but:

You’re repeatedly computing (i + k) with a possibly huge number.

That makes it less efficient for large k.

*/
void shiftLeftK(vector<int> &arr, int k){
    k = k % arr.size(); // handles k > n
    vector<int> ans(arr.size());

    for(int i = 0; i < arr.size(); i++){
        int newIndex = (i - k + arr.size())%arr.size();
        ans[newIndex] = arr[i];
    }

    arr = ans;
}

void shiftRightK(vector<int> &arr, int k){
    k = k % arr.size(); // handles k > n
    vector<int> ans(arr.size());

    for(int i = 0; i < arr.size(); i++){
        int newIndex = (i + k) % arr.size(); // move each element k steps forward
        ans[newIndex] = arr[i];
    }

    arr = ans;
}

void print(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int k = 2;

    // shiftLeftK(arr, k);
    shiftRightK(arr, k);
    print(arr);
    
}

