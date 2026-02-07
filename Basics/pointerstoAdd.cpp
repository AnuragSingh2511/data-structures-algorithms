#include<iostream>
using namespace std;

void add(int *a, int *b, int *result){
    *result = *a + *b;
}

int main(){
   
    int x = 10, y = 20, sum;
    add(&x, &y, &sum);
    cout << sum;


    return 0;
}