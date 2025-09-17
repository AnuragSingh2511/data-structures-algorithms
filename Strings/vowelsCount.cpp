#include <iostream>
using namespace std;

int main()
{     // O(n) , O(1)
    
    char str[200];
    cout << "Enter : ";
    cin.getline(str, 200);

    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
       
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a'; // to lower
        }
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            ++count;
        }
    }

    cout << "Vowel count: " << count << '\n';
    return 0;
}
