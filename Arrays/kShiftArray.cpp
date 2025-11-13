#include<iostream>
#include<vector>
using namespace std;

/*
1st approach: Brute(I think)
2nd approach : Index method -> best solution
*/
void kshiftLeftArray(int arr[], int size, int k) {
    k = k % size;  // handle k > size

    // save first k elements
    int temp[1000];  // large enough buffer OR use vector
    for(int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // shift remaining elements
    for(int i = 0; i < size - k; i++) {
        arr[i] = arr[i + k];
    }

    // put back saved elements
    for(int i = 0; i < k; i++) {
        arr[size - k + i] = temp[i];
    }
}

/*
Hard-coded example, k = 2

Left-shift

void kshiftLeftNormal(vector<int> &v, int k){
    vector<int> temp = {v[0], v[1]};   // saves first 2 elements

    for(int i = 0; i < v.size()-k; i++){
        v[i] = v[i + k];              // shift remaining left
    }
    
    v[v.size()-2] = temp[0];          // puts back first 2
    v[v.size()-1] = temp[1];
}

or

void kshiftLeftArray(int arr[], int size, int k){
     
    k = k % size; // handles k > size;

    int temp[] = {arr[0], arr[1]};   // <-- saves only 2 elements

    for(int i = 0; i < size - k ; i++){
        arr[i] = arr[i+k];           // shift left
    }

    arr[size - 2] = temp[0];         // put back 1st saved
    arr[size - 1] = temp[1];         // put back 2nd saved
}


Right-shift

void kshiftRightArray(int arr[], int size, int k) {

    k = k % size; // handles k > size

    int temp[] = {arr[size - 2], arr[size - 1]};  // save last 2 elements

    // shift remaining elements right by 2
    for(int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // put saved elements at the beginning
    arr[0] = temp[0];
    arr[1] = temp[1];
}

*/

void kshiftRightArray(int arr[], int size, int k) {
    k = k % size;  // handles k > size

    // step 1: save last k elements
    int temp[1000];  // assume big enough OR use vector
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    // step 2: shift remaining elements to the right
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // step 3: put saved elements at the start
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {10,20,30,40,50,60}; 
    int size = sizeof(arr)/sizeof(int);
    int k = 2; 

    // kshiftRightArray(arr, size, k); 
    kshiftLeftArray(arr, size, k); 
    print(arr, size); 

    cout << endl; 

    // kshiftRightArray(arr, size, k); 
    // print(arr, size); 

    return 0;
}

