#include<iostream>
using namespace std;

/*
int arr[][4] Column size is mandatory because 2D is just for visualization,actually 
it gets stored in 1D array -> c*i + j 

Find 8
 int arr[3][4] = {
        {1,2,3,4},     -> 4*1 + 3 = 7th index in 1D -> {1,2,3,4,5,6,7,8,9,10,11,12};
        {5,6,7,8},
        {9,10,11,12},        
    };

*/

// Row wise print
void rowWisePrint(int arr[][4], int rows, int cols){

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
// Column wise print
void colWisePrint(int arr[][4], int rows, int cols){

    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

//Linear search in 2D array

bool searchTarget(int arr[][4], int rows, int cols, int target){ 
     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
           if(arr[i][j] == target){
            return true;
           }
        }        
    }    
    return false;
}

int main(){
  
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},        
    };

    int rows = 3;
    int cols = 4;

    // rowWisePrint(arr, rows, cols);
    // colWisePrint(arr, rows, cols);
    
    int target = 11;
    cout << (searchTarget(arr, rows, cols, target) ? "Found" : "Not Found");



    return 0;
}