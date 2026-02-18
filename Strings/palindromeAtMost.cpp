#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string s, int i, int j){
  
    while(i <= j){
        if(s[i] != s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

bool validPalindrome(string s){
   
    int i = 0;
    int j = s.length()-1;

    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{

            bool ans1 = checkPalindrome(s, i+1, j); //ith index remove
            bool ans2 = checkPalindrome(s, i, j-1); //jth index remove
            return ans1 || ans2;
        }
    }
    return true;
}
// O(n) , //O(1)
int main()
{     
    string s;
    getline(cin, s);
    
     /*
    Sample Input 1:
    abca

    Sample Output 1:
    Valid

    Explanation:
    Remove 'b' → "aca" (palindrome)


    Sample Input 2:
    abc

    Sample Output 2:
    Invalid

    Explanation:
    Cannot become palindrome by removing only one character
    */
   
    cout << (validPalindrome(s) ? " Valid Palindrome " : " Invalid Palindrome ");
   
    return 0;
}
