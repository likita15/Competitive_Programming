//queues and the dequeues:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // initialize the queue
    queue<int> q ;

    //insert element in the queue from the back of the queue:
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(9);
    q.push(11);
    q.push(12);

    //pop element from the font of the queue:
    q.pop();

    //front and the back of the queue:
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    //no. of the elements in the queue:
    cout<<q.size()<<endl;

    //print all element from the queue:
    //remove all the element from the queue:  

    while(!q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<q.empty()<<endl;

return 0;
}