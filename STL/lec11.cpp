// sort the vector of pair by descending order of second element in the
// pair using the comparator

#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b) { return a.second > b.second; }
int main()
{
    vector<pair<int, int>> arr = {{1, 2}, {7, 8}, {4, 5}, {2, 3}, {7, 6}};
    for (auto i : arr)
    {
        cout << "(" << i.first << "," << i.second << ")"
             << " ";
    }
    cout << endl;
    sort(arr.begin(), arr.end(), cmp);
    for (auto i : arr)
    {
        cout << "(" << i.first << "," << i.second << ")"
             << " ";
    }

    return 0;
}