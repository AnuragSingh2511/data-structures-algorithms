#include<iostream>
using namespace std;

int lastOcc(int arr[], int size, int target){
    
  int s = 0;
  int e = size - 1;
  int ans = -1;

  while(s <= e){
    int mid = s + (e - s)/2;

    if(arr[mid] == target){
         ans = mid;
         s = mid + 1;
    }
    else if(arr[mid] > target){
        e = mid - 1;
    }
    else{
        s = mid + 1;
    }
  }
  return ans;
}

int firstOcc(int arr[], int size, int target){
  
  int s = 0;
  int e = size - 1;
  int ans = -1;

  while(s <= e){
    int mid = s + (e - s)/2;

    if(arr[mid] == target){
         ans = mid;
         e = mid - 1;
    }
    else if(arr[mid] > target){
        e = mid - 1;
    }
    else{
        s = mid + 1;
    }
  }
  return ans;
}

int totalOccurence(int arr[], int size, int target){
    
    //first occ
    //last occ
    
    //total = last occ - first occ + 1
     int total = lastOcc(arr, size, target) - firstOcc(arr, size, target) + 1;
     return total;
}

int main(){
      
    int arr[] = {2, 4, 4, 4, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(int);
    int target = 4;
    
    int ans = totalOccurence(arr, size, target);
    cout << ans;

    return 0;
}