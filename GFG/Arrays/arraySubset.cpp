#include <iostream>
#include <vector>
using namespace std;

/*
[Naive approach] Using Nested Loops - O(m*n) Time and O(1) Space
[Better Approach] Using Sorting and Two Pointer
[Expected Approach] Using Hashing- O(m + n) Time and O(m) Space
*/

bool isSubset(vector<int> &a, vector<int> &b)
{ // O(m*n) , O(1)
    int m = a.size(), n = b.size();

    for (int i = 0; i < n; i++)
    { // Loop over elements of b[]
        bool found = false;

        for (int j = 0; j < m; j++)
        { // Check each element of a[]
            if (b[i] == a[j])
            {
                found = true; // We found the element
                a[j] = -1;    // Mark it used (so duplicates don't interfere)
                break;        // 🔴 Exit inner loop IMMEDIATELY
            }
        }

        if (!found)
            return false; // If even 1 element not found → not subset
    }

    return true; // All elements found
}

int main()
{

    vector<int> a = {11, 1, 13, 21, 3, 7};
    vector<int> b = {11, 3, 7, 1};
    
    if (isSubset(a, b))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
