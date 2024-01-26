// Maps:

/*

    Map is a data structure which stores a key-value pair.Key is mapped
    to a value.A map cannot have a key mapped to 2 values  , but 2 keys can
    have same values

*/

    //initialize a map , unordere_map and multimap:
    /*
        map:
            elements are present in the increasing order(by default)
            used self balancing BST
            search insertion and deletion o(log(N));

        unordered_map:
            no ordering of the elements
            uses hash table
            search  , insertion and deletion o(1) and worst case : o(n);
    
    
    
    */


#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<string , int>mp1;
    unordered_map<string , int>mp2;
    multimap<string , int>mp3;

    // insert elements in the map also :
    mp1["a"]=423;
    mp1["bm"]=564;
    mp1["cde"]=423;


    mp2["a"]=423;
    mp2["bm"]=564;
    mp2["cde"]=423;

    // we can declare in this fashion also:
    mp3 = {{"coding" , 45},{"coding_buddy",55} ,{"pizza",65}};
    
    //accesing value using keys:
    cout<<mp1["a"]<<endl;

    map<int, string> sample_map { { 1, "one"}, { 2, "two" } };

    cout << sample_map[1] << " " << sample_map[2] << endl;
    
    // count whether this key is present inside the map or not:
    cout<<sample_map.count(1);

    //iterate over the map:

    //map stores all the values in the sorted manner by their keys:
   
    map<string , int>mp;

    mp["codingNinja"] = 12345;
    mp["codingBuddy"] = 12543;
    mp["codingDudes"] = 15243;


    //here values are stored according to the lexicographical manner of the key name

    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //erase key-value pair from the map:
    mp.erase("codingNinja");

    //clear the map:
    mp.clear();


return 0;
}