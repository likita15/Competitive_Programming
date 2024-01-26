// Priority Queues:

/*Priority queue is a container such that queues elements
based on some priority. 
The queue follow the FIFO property but Priority Queue
pops the elements based on the priority 

Priority queues are built on the heaps (max heap by 
default) and uses an aray of vector as an internal structure
*/


/*max-heap priority queue : The top element is the maximum
in the priority queue and as we go down the priority 
queue the value decreases*/

/*Min-heap Priority queue : The top element is the minimum
in the priority queue and as we go down the priority 
queue the value increases*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //initialize a priority-queue:
    //max-heap priority queue:
    priority_queue<int>pq_max ; 


    //min-heap priority queue;
    priority_queue<int , vector<int> ,greater<int>>pq_min;    


    //inserting element in the queue:
    pq_max.push(45);
    pq_max.push(55);
    pq_max.push(95);
    pq_max.push(85);
    pq_max.push(15);

    pq_min.push(12);
    pq_min.push(1);
    pq_min.push(2);
    pq_min.push(3);
    pq_min.push(5);
    pq_min.push(9);

   //no. of the elements in the priority queue:
   cout<<pq_max.size()<<endl;
   cout<<pq_min.size()<<endl;

   //top element of the priority queue:
   cout<<pq_max.top()<<endl;
   cout<<pq_min.top()<<endl;


   // pop the element of the priority queue:
   pq_max.pop();
   pq_min.pop();

   //printing the elements of the priority queue:
   
   while(!pq_max.empty()){
    cout<<pq_max.top()<<" ";
    pq_max.pop();
   }

   cout<<endl;


 while(!pq_max.empty()){
    cout<<pq_min.top()<<" ";
    pq_min.pop();
   }

return 0;
}
