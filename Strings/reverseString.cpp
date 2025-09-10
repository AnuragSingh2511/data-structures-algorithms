#include<iostream>
using namespace std;

//for loop -> O(n), O(1)
// void reverseString(string &s){

//     for(int i = 0; i < s.length()/2; i++){
//         swap(s[i], s[s.length()-i-1]);
//     }
// }

//Two-Pointer approach -> O(n) , O(1)
void reverseString(string &s){
    
    int i = 0;
    int j = s.length()-1;

    while(i < j){
        swap(s[i], s[j]);
        i++;
        j--;
    }   
}

int main(){
  
    string s;
    getline(cin, s);

    reverseString(s);
    cout << s ;

    return 0;
}