#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    //statically typed array:
    int arr[10] = {1,3,4,5,6};

    //STL array:
    array<int , 5>arr1;
    array<int , 5>arr2 = {1,2,3,4,5};
    

    cout<<endl;

    //finding the number of the elements int  the array:
    int len = arr2.size();
    cout<<"size of an array : "<<len<<endl;

    //fill the array with some integer:
    arr2.fill(10);
    for(int i = 0 ; i < arr2.size() ; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    //checking whether the array is empty or not:
    cout<<arr2.empty()<<endl;


    
    array <int , 3>arr3 = {'G','f','G'}; // ASCII val of 'G' =71 
    for(auto i : arr3)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    int n = 5; 
    array<int , 5>n_arr;
    for(auto i:n_arr){cin>>i;}
    for(auto i:n_arr){cout<<n_arr[i]<<" ";}
	
    return 0;
}
