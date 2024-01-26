// sets and map:
    /*

        A Set is a container in which each element has to be unique. The
        values are stored in a specific sorted order i.e either ascending
        or descending in a set.
        By default it is ascending
        
    */

    /*set:A best example is the spotify playlist it's a set because you 
    can't add the songs twice in the same playlist*/


    // set,unorderd_set and multiset :


    /*set:
        elements are in increasing order (by default)
        used self balancing BST
        Search , insertion and deletion : o(logN)


    unordered_set:
        no orderdering of the elements
        used hash table
        Search , insertion and deletion : o(1)
        worst case: o(N)


    */
#include<bits/stdc++.h>
using namespace std;
int main()
{

    // initialization of the set: 
    set<int> s ; 
    unordered_set<int> us;


    // insert element into set and unordered set:
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    us.insert(1);
    us.insert(5);
    us.insert(1);
    us.insert(1);

    //no. of elements in the set:
    cout<<s.size()<<us.size()<<endl;

    //front and back element of the set:

    // Note : set and the  unordered_set has no member front and the back
    //instead we have to do something else to do the same:

    int front = *s.begin();
    int back = *s.end();
    

    /*

        s.end() will point the element one next to the last element.
        So how can we reference to last element in the set.

        to avoid this:
        WE WILL USE POINTER ARITHMETIC TO DO THE SAME :
        *(--s.end())

    */


    back = *(--s.end());
    cout<<front<<" "<<back<<"\n";


    //printing all the elements of the set:
    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;
 

    //check if the element is present inside the set or not:
    /*
       s.count() will counts how many times  element is occuring in the set
    
    */
    cout<<s.count(1)<<endl;
    // returns how many times 1 is occuring in the set

    //remove an element from the set:
    s.erase(3);

    //we can also pass the pointers to the erase function:
    s.erase(s.begin());

    //erase all the elements from the set:
    s.clear();

    //multiset:

    /*
    
     multiset are type of associative container similar to the set
     , with exception that it can hold the same value instances more
     than once
     

     multiset can contain duplicates of the same number also:
     */

    //intialization the multiset:
    multiset<int>ms;
    //it will store by default in the increasing order:

    /*we change the order of the multiset also using some 
    methods and the functions*/

    // like this-->:
    multiset<int , greater<int>> ms2; // decreasing order;

    //Same can be done with the set as well


    ms2.insert(1);
    ms2.insert(2);
    ms2.insert(3);
    ms2.insert(5);
    ms2.insert(2);
    ms2.insert(5);
    ms2.insert(7);

    for(auto i:ms2){
        cout<<i<<" ";
    }

    cout<<endl;

    //LET'S SEE WE CAN USE THE SAME TYPE OF THE GREATER DECLARTION IN THE SET AND THE UNORDERED SET AS WELL:
    set<int , greater<int>>se;

    /*
    we cannot use the greater<int> in the unordered_set
    
    unordered_set<int , greater<int>>u_s; // illegal*/
    se.insert(1);
    se.insert(2);
    se.insert(4);
    se.insert(5);
    se.insert(6);

    for(auto i:se){
        cout<<i<<" ";
    }
    


    //let's use erase in the muliset function:
    /*
    
        simply using the ms2.erase(2) in the multiset will 
        erase all the occurences of the element it's not like the set 
        since in the set we are only having only one occurence stored in 
        it so to avoid it we have to pass the pointer refernce of the element


    */


   // like this : -- >
   ms.erase(ms.find(2));
    
return 0;


/*try to use the multiset and the set and use search operations 
that's works perfect on the sorted data like binary search which 
will eventually increase the code quality and optimality*/

}