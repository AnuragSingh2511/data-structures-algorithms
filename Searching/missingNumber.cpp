#include<iostream>
using namespace std;

//Approaches -> Linear Search, XOR, Sum, Binary Search

/*
L.S - O(n) , XOR - , Sum - , B.S - 
*/

//0 indexed inputs
// int zeroMissingNumber(int arr[], int n){
   //i) XOR
//    int start = 0;
//    for(int i = 0; i<n; i++){
//        start = start^arr[i];
//    }

//    for(int i = 0 ; i<=n; i++){
//       start = start^i;
//    }

//    if(start == 0){
//      return n;
//    }
//    return start;

   //ii) Sum
//    int sum = 0;
//    for(int i = 0; i<n; i++){
//         sum = sum + arr[i];
//    }

//    int totalSum = ((n)*(n+1))/2;
//    int missingNo = totalSum - sum;

//    if(missingNo == 0){
//     return n;
//    }
//    return missingNo;

//iii) B.S - O(logn)
//   int start = 0;
//   int end = n - 1;

//   int mid = start + (end - start)/2;
//   int ans = -1;

//   while(start <= end){
//     if(arr[mid] - mid == 0){
//         start = mid + 1;
//     }
//     else{
//         ans = mid;
//         end = mid-1;        
//     }
//     mid = (start + end)/2;
//   }
//   if(ans == -1){
//     return n;
//   }
//   return ans;
// }
//1 indexed inputs
int oneMissingNumber(int arr[], int n){
    //B.S

    // int start = 0;
    // int end = n - 1;
    // int mid = start + (end - start)/2;
    // int ans = -1;

    // while(start <= end){
    //     if(arr[mid] - mid == 1){
    //         start = mid + 1;
    //     }
    //     else{
    //         ans = mid;
    //         end = mid - 1;
    //     }
    //     mid = (start + end)/2;
    // }
    // if(ans + 1 == 0){
    //     return n+1;
    // }
    // return ans + 1;

    // Sum    
//    int sum = 0;
//    for(int i = 0; i<n; i++){
//         sum = sum + arr[i];
//    }

//    int totalSum = ((n)*(n+1))/2;
//    int missingNo = totalSum - sum;

//    if(missingNo == 0){
//     return n+1;
//    }
//    return missingNo;

    // XOR    
   int start = 0;
   for(int i = 0; i<n; i++){
       start = start^arr[i];
   }

   for(int i = 0 ; i<=n; i++){
      start = start^i;
   }

   if(start == 0){
     return n+1;
   }
   return start;
}

int main(){
    
   //0-indexed

//    int arr[] = {0,1,2,4,5}; //o/p: 3
//    int arr[] = {0,1,2,3,4}; // o/p : 5
//    int n = sizeof(arr)/sizeof(int);

//    int finalAns = zeroMissingNumber(arr, n);

//    cout << " Missing number is : " << finalAns << endl;
   //1-indexed
//    int arr[] = {1,2,3,5,6};
   int arr[] = {1,2,3,4,5,6}; //o/p -> 7
   int n = sizeof(arr)/sizeof(int);

   int finalAns = oneMissingNumber(arr, n);
   cout << " Missing number is : " << finalAns << endl;

    return 0;
}