#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int target){ //O(log(n)) , O(1)

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(target == arr[mid]){
            return true;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return false;
}

int main(){
      
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(int);

    int target;
    cin >> target;

    cout << (binarySearch(arr,size,target) ? " Found " : " Not Found ");

    return 0;
}