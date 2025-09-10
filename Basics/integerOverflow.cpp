#include <iostream>
using namespace std;
/*
int (32-bit system) - unsigned - 0 - 2^32 - 1 , signed - -2^31 - 2^31 - 1
long long (64-bit) - unsigned - 0 - 2^64 - 1 , signed - -2^63 - 2^63 - 1
*/

int main()
{

    //    int start = 2147483647; // 2^31 - 1
    //    int end = 2147483647;

    //    int mid = (start + end)/2;
    //    cout << mid; // o/p : -1 ,reason : integer overflow

    // Prevention

    // int start = 2147483647; // 2^31 - 1
    // int end = 2147483647;

    // int mid = start + (end - start)/2; // or start/2 + end/2;
    // cout << mid; 

    // But long long works

    long long start = 2147483647; // 2^31 - 1
    long long end = 2147483647;

    long long mid = (start + end) / 2;
    cout << mid;
    return 0;
}