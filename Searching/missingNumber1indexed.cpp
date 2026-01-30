#include<iostream>
#include<vector>
using namespace std;


// 1-INDEXED INPUTS
// Expected range: [1 .. n+1] -> Count = n + 1 numbers

// Binary Search -> O(log n), O(1)
int getMissingNumberBS_1Indexed(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int ans = arr.size() + 1;

    while(s <= e){
        int mid = s + (e - s)/2;

        // expected value at index mid = mid + 1
        if(arr[mid] == mid + 1){
            s = mid + 1;
        } else {
            ans = mid + 1;
            e = mid - 1;
        }
    }
    return ans;
}

// XOR
// O(n), O(1)
int getMissingNumberXOR_1Indexed(vector<int> arr){
    int ans = 0;

    // XOR of expected range [1 .. n+1]
    for(int i = 1; i <= arr.size() + 1; i++){
        ans = ans ^ i;
    }

    // XOR array elements
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

// Sum
// O(n), O(1)
int getMissingNumberSum_1Indexed(vector<int> arr){
    int n = arr.size();

    // sum of [1 .. n+1]
    int totalSum = (n + 1) * (n + 2) / 2;

    int arraySum = 0;
    for(int i = 0; i < n; i++){
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

// Linear Search
// O(n), O(1)
int getMissingNumberLS_1Indexed(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        // expected value = index + 1
        if(arr[i] != i + 1){
            return i + 1;
        }
    }
    return arr.size() + 1;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6}; // o/p -> 7

    int ans = getMissingNumberXOR_1Indexed(nums);
    cout << ans;

    return 0;
}
