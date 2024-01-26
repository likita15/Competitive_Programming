//iterators:
/*iterators are the smart pointer that automatically
detects the datatype and can iterates through that
datatype value */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a = {1,2,3,4,5};
    cout<<"iterate over vector"<<endl;
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    map<int , int>mp;
    mp[0] = 1;
    mp[1] = 1;
    mp[2] = 1;

    cout<<"iterate over map :"<<endl;
    for(auto i : mp)
    {
        cout<<"key:"<<i.first<<endl;
        cout<<"value:"<<i.second<<endl;
    }

    set<int>s ; 
    s.insert(1);
    s.insert(4);
    s.insert(8);
    cout<<"iterate over set:"<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
return 0;
}