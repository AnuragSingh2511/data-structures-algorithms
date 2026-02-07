#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s){ // O(n) , O(n)

    string ans = "";
    int index = 0;

    while(index < s.length()){
         
        if(ans.length() > 0 && ans[ans.length()-1] == s[index]){
            //pop from ans;
            ans.pop_back();
        }
        else{
            //push
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}

int main()
{     
    string s;
    getline(cin, s);
    
    // removeDuplicates();
    cout << removeDuplicates(s) << endl;
   
    return 0;
}
