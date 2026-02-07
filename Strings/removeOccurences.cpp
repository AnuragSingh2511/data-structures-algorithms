#include <iostream>
#include <string>
using namespace std;

string removeOccurences(string s, string part){ // O(n^2) , O(1)
   

    while(s.find(part) != string::npos){
        s.erase(s.find(part), part.length());
    }
    return s;    
}

int main()
{     
    string s;
    getline(cin, s);

    string part;
    getline(cin, part);
    
    // removeDuplicates();
    cout << removeOccurences(s, part) << endl;
   
    return 0;
}
