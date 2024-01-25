// stacks in the stl:
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //intialization of the stack:
   stack<int> s;

   //insert element at the top of the stack:
   s.push(5);
   s.push(6);
   s.push(7);

   //pop element from the top of the stack:
   s.pop();

   //top element of the stack:
   cout<<s.top()<<endl;

   //number of element in the stack:
   cout<<s.size()<<endl;

   //printing the element of the stack:
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}

return 0;
}