#include <iostream>
using namespace std;

// void reverseArray(int arr[], int size){ //O(n) , O(1)
//    //Two-pointer approach
//    int i = 0;
//    int j = size - 1;

//    while(i < j){
//      swap(arr[i], arr[j]);
//      i++;
//      j--;
//    }
// }

void reverseArray(int arr[], int size)  //O(n) , O(1)
{
    // For-loop

    for (int i = 0; i < size/2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}