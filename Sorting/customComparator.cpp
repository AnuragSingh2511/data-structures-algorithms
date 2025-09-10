#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
#include<algorithm> -> header file add
C++ - STL -> sort()
sort(v.begin(), v.end());
*/

bool mycomp(int &a, int&b){
    // return a < b; //increasing order sorting
    return a > b; //decreasing order sorting
}

bool myCompFor1stIndex(vector<int> &a, vector<int> &b){
    // return a[0] < b[0];
    return a[1] < b[1]; // sort by 1st index
}

void print(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

void printvv(vector<vector<int> > v){
    for(int i = 0; i < v.size(); i++){
       vector<int> &temp = v[i];
       int a = temp[0];
       int b = temp[1];
       cout << a << " " << b << endl;
    }
    cout << endl;
}

int main(){
   
    // vector<int> v = {5,4,3,2,1};
    // sort(v.begin(), v.end()); // increasing order
    // sort(v.begin(), v.end(), mycomp); // decreasing order
    
    // print(v);

    // vector of vector sorting
    vector<vector<int> > v; 
    // [ [1, 44] , [2, 33] , [0, 55], [0, 11] , [0, 22] ]
    // Sort by 1st index of vector
    int n;
    cout << " Enter size: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a , b;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    printvv(v);
    cout << "Sorted by 1st index " << endl;
    sort(v.begin(), v.end(), myCompFor1stIndex);
    printvv(v);

    return 0;
}