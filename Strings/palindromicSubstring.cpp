#include <iostream>
#include <string>
using namespace std;


//L.C - 648
//optimal
// T.C - O(N^2)
// S.C - O(1)
int checkPalindrome(string s, int i, int j){
    
    int count = 0;
    
    while(i >= 0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
    
    return count;
}

int palindromicSubstring(string s){
    int count = 0;

    for(int centre = 0; centre < s.length(); centre++){
        //odd count
        int i = centre;
        int j = centre;

        int oddPalCount = checkPalindrome(s, i, j);
        
        //even count
        i = centre;
        j = centre + 1;
        int evenPalCount = checkPalindrome(s, i, j);

        count += oddPalCount + evenPalCount;
    }
    return count;
}

int main()
{     
    string s;
    cin >> s;
    // getline(cin,s);

    /*
    Sample Input:
    aaa

    Sample Output:
    6

    Explanation:
    Palindromic substrings are:
    "a", "a", "a", "aa", "aa", "aaa"
    */

    int ans = palindromicSubstring(s);
    cout << ans;
   
    return 0;
}
