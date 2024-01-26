// sort according to given condition:
// sorting the vector using the comparator:


#include <bits/stdc++.h>
using namespace std;

// making comparator function:
bool cmp_sortInDecrease(int &a, int &b) { return a > b; }
bool cmp_sortInIncrease(int &a, int &b) { return a < b; }

int main()
{
    vector<int> arr = {3, 5, 1, 2, 4};

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end(), cmp_sortInDecrease);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout<<endl;
    sort(arr.begin(), arr.end(), cmp_sortInIncrease);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}