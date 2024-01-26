// STL Functions:-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //initalize a vector and a string:

    // NOTE: These functions can work both on the string and the vector :
    vector<int> arr1 = {1,2,3,4,5};
    string str = "codingninjas";

    //reverse string and vector:
    reverse(arr1.begin() , arr1.end());
    for(auto i:arr1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // similarly:
    reverse(str.begin(),str.end());

    //maximum value in the vector and the index of the maximum value  present in the vector:
    int maxElem_value = *max_element(arr1.begin() , arr1.end());
    cout<<maxElem_value<<endl;

    //this will give the index of the element:
    int maxElem_index = (max_element(arr1.begin(),arr1.end())-arr1.begin());
    cout<<maxElem_index<<endl;

    //minimum value in the vector
    int minElem_value = *min_element(arr1.begin() , arr1.end());
    cout<<minElem_value<<endl;

    //maximum of the three numbers manually:
    int a = 1 , b = 2  , c = 3;
    //if numbers are less as 3 then we can use this:
    int maxVal_three = max(a , max(b , c));

    //when numbers are large then we have to use this:
    int max_val_large = max({1,2,3,4,5,6,8});
    int min_val_large = min({1,2,3,4,5,6,8});

    cout<<maxVal_three<<endl;
    cout<<max_val_large<<endl;
    cout<<min_val_large<<endl;

    //sum of all the numbers inside the vector:
    int sum  = accumulate(arr1.begin() , arr1.end() , 0);
    cout<<"total sum of the numbers inside the vector:"<<sum<<endl;
    

    //sort the vector:

    //ascending order:
    sort(arr1.begin() , arr1.end());
    for(auto i : arr1){
        cout<<i<<" ";
    }
    cout<<endl;

    //descending order:
    sort(arr1.begin() , arr1.end() , greater<int>());
    for(auto i : arr1)
    {
        cout<<i<<" ";
    }

    


return 0;

}