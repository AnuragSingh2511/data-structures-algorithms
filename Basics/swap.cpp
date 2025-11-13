#include<iostream>
using namespace std;

void swapUsingTemp(int &a, int &b){
    
    int temp = a;
    a = b;
    b = temp;
}

void swapUsingArithmetic(int &a, int &b){
    
    a = a + b; // a = a + b , b = b
    b = a - b; // a = a + b, b = a + b - b = a
    a = a - b; // a = a + b - a =  b , b = a
    // a = b and b = a
}

void swapUsingXOR(int &a, int &b){

    /*
    Bitwise XOR -> 1^1 = 0 or a^a = 0 and a^b = 1

    a = 5 -> 101 and b = 1 -> 001
    a = a^b -> 100 -> 4
    b = a^b -> 101 -> 5
    a = a^b -> 001 -> 1
    a = 1 and b = 5
    */
    
    a = a^b; 
    b = a^b;
    a = a^b;
}

int main(){
    
    int a = 5 , b = 1;

    // swapUsingTemp(a,b);
    // swapUsingArithmetic(a,b);
    swapUsingXOR(a,b);
    cout << a << " & " << b; 

    return 0;
}