
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1 = {3, 5, 1, 2, 4};
    // binary search:
    sort(arr1.begin(), arr1.end());

    // here we are searching whether 2 is present or not:
    if (binary_search(arr1.begin(), arr1.end(), 2))
    {
        cout << "yes it is present inside the array" << endl;
    }
    else
    {
        cout << "not present in the array" << endl;
    }

    // so this binary search will not work when multiple occurences of same
    // number ? find where that number is present in vector

    // so for this we will use the lower_bound and the upper_bound is applicable to any sorted data structure indirectly we are applying an advanced binary search

    vector<int> arr2 = {2, 2, 2, 3, 3, 3, 3, 6, 6, 7};

    // lower_bound:

    /*lower bound of the function returns pointer to
    return the  position of number when only one occurences of the number is there
    return the first position of the number when multiple occurences  of the number is given
    return the position of number just greater than num when no occurences of the number is there*/

    lower_bound(arr2.begin(), arr2.end(), 3);

    cout << "case1:" << lower_bound(arr2.begin(), arr2.end(), 2) - arr2.begin() << endl;
    cout << "case2:" << lower_bound(arr2.begin(), arr2.end(), 1) - arr2.begin() << endl;
    cout << "case3:" << lower_bound(arr2.begin(), arr2.end(), 4) - arr2.begin() << endl;
    cout << "case4:" << lower_bound(arr2.begin(), arr2.end(), 6) - arr2.begin() << endl;
    cout << "case5:" << lower_bound(arr2.begin(), arr2.end(), 9) - arr2.begin() << endl;


    //upper_bound:
    /*
        return pointer to 

        return position of the next higher number when only one occurence is there
        return first position of the next higher number when multiple occurence is there
        return position of number just greater than num when no occurence is there
    
    */

    cout << "case1:" << upper_bound(arr2.begin(), arr2.end(), 2) - arr2.begin() << endl;
    cout << "case2:" << upper_bound(arr2.begin(), arr2.end(), 1) - arr2.begin() << endl;
    cout << "case3:" << upper_bound(arr2.begin(), arr2.end(), 4) - arr2.begin() << endl;
    cout << "case4:" << upper_bound(arr2.begin(), arr2.end(), 6) - arr2.begin() << endl;
    cout << "case5:" << upper_bound(arr2.begin(), arr2.end(), 9) - arr2.begin() << endl;

    

    /*if we are using the sets then we can directly call the upper and
    lower bound function over the sets inorder to get the element index 
    and since the sets are sorted in nature by default*/
    return 0;
}