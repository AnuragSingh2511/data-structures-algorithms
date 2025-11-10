#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target){ //O((n)) , O(1)

    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
      
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(int);

    int target;
    cin >> target;

    cout << (linearSearch(arr,size,target) ? " Found " : " Not Found ");

    return 0;
}