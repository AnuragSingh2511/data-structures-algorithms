#include<iostream>
#include<vector>
using namespace std;

/*
Bubble Sort : T.C - O(n^2) , S.C - O(1)
Swap the adjacents if needed, till we get all the array sorted.

Selection Sort : T.C - O(n^2) , S.C - O(1)
What if I select the minimum element and put it at correct position

Insertion Sort : T.C - O(n^2) , S.C - O(1)
*/

void bubbleSort(vector<int> &v){ 

    for(int i = 0; i < v.size()-1; i++){
        for(int j = 0; j < v.size() - i - 1 ; j++){            
            if(v[j] > v[j + 1]){
                swap(v[j], v[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int> &v){ 

    for(int i = 0; i < v.size()-1; i++){
        int minIndex = i; //ith element is the smallest element
        for(int j = i+1; j < v.size(); j++){            
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        //swap ith and minIndex elements
        swap(v[i], v[minIndex]);
    }
}

void insertionSort(vector<int> &v){ 
    
    // i = 0, leave it
    for(int i = 1; i < v.size(); i++){
        int key =  v[i];
        int j = i - 1;
    /* 
    Move elements of arr[0...i-1] that are 
    greater than key to one position ahead of their current position 
    */
        while(j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key; // insertion
    }
}

void print(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

int main(){
   
    vector<int> v = {5,4,3,2,1};

    // bubbleSort(v);
    // selectionSort(v);
    insertionSort(v);
    print(v);

    return 0;
}