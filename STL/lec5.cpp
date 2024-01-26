// Deque:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //intialization of the deque
   deque<int>d;

   //insert element in the front and the back:
   d.push_front(5);
   d.push_front(6);
   d.push_back(1);
   d.push_back(2);
   // deque will look : 2 1 5 6

   //removing from the both the ends:
   d.pop_front();
   d.pop_back();

   //printing the front and the back element:
   cout<<d.front()<<endl;
   cout<<d.back()<<endl;

   // number of the elements :
   cout<<d.size()<<endl;

   //printing all the elements using the iterators:
   for(auto it = d.begin() ; it!=d.end() ; it++)
   {
    cout<<*it<<" ";
   }

   

return 0;
}