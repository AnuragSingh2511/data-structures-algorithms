#include <iostream>
using namespace std;

void upperCase(char ch[], int size){

    int i = 0;
    while(ch[i] != '\0'){

        if(ch[i] >= 'a' && ch[i] <= 'z'){
            ch[i] = ch[i] - 'a' + 'A';
        }
        i++;
    }
}

int main()
{     
    char ch[200];
    cin.getline(ch, 200);

    upperCase(ch, 200);

    cout << ch << endl;
   
    return 0;
}
