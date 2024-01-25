// vectors:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vectors are dynamic size container
    vector<int>arr;
    vector<int>arr2 = {1,2,3,4};
    vector<int> arr3(10); // size is 10;

    vector<int>arr4(10 , 1);// size is 10 and the at the each location 1 is present 


    for(int i=0; i < arr4.size() ; i++){
            cout<<arr4[i]<<'\t';
    }

    cout<<endl;

    //nested vectors:
    vector<vector<int>>v_nested(3 , vector<int>(5 , 23));
    for(int i = 0 ; i < v_nested.size() ; i++)
    {
        for(int j = 0 ; j < v_nested[i].size(); j++)
        {
            cout<<v_nested[i][j]<<" ";
        }
        cout<<endl;
    }

    //Inserting and removing  elements in the vector:  o(1) time complexity
    arr2.push_back(45);
    cout<<arr2.back()<<endl;

    arr2.pop_back();
    cout<<arr2.back()<<endl;

    //Inserting at the position of the vector:
    arr2.insert(arr2.begin() , 63);
    cout<<*arr2.begin()<<endl;

    // front and the back of the vector:
    cout<<arr2.front()<<endl;
    cout<<arr2.back()<<endl;

    //clear all the element inside the vector:
    arr2.clear();

    //check if vector is empty:
    cout<<arr2.empty()<<endl;

return 0;
}