#include <iostream>
#include <vector>
using namespace std;

/*
Given an array arr, rotate the array by one position in clockwise direction. (right)

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
*/

void rotate(vector<int> &arr)  //O(n) , O(1)
{
    // code here
    int temp = arr[arr.size() - 1];

    for (int i = arr.size() - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
}

/*  what if rotate left by one
Input: arr[] = [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]
*/

void rotateLeft(vector<int> &arr)
{
    // code here
    int temp = arr[0];

    for (int i = 0; i < arr.size()-1 ; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[arr.size()-1] = temp;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    rotate(arr);
    // rotateLeft(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}