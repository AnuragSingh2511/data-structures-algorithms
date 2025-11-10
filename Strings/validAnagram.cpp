#include<iostream>
using namespace std;
/*
An anagram is when you take the letters 
of a word or phrase 
& rearrange them to make a new word or phrase.

Example:
 "listen" → "silent"
*/
bool isAnagram(string s, string t){ //O(n+m) , O(1)
  
    int freqTable[256] = {0};

    for(int i = 0; i < s.size(); i++){
        freqTable[s[i]]++;
    } //O(n)

    //iterate and decrease
    for(int i = 0; i < t.size(); i++){
        freqTable[t[i]]--;
    } //O(m) .. mostly m will be eqaul to n

    for(int i = 0; i < 256; i++){  // char -> 1 byte -> ASCII -> 8 bit -> 2^8 => 256 -> 0-255

        if(freqTable[i] != 0){
            return false;
        }
    } //O(256) -> O(1)
    return true;
}

int main(){
   
    //M2 -> Counting : Anagram
    string s = "rat";
    string t = "tar";
    

    if(isAnagram(s, t)){
        cout << " Valid Anagram " << endl;
    }
    else{
        cout << " Invalid Anagram " << endl;
    }
     
    // cout << (isAnagram(s, t) ? " Valid Anagram " : " Invalid Anagram ");

    return 0;
}