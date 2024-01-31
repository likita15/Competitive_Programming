//printing the prime numbers between the given numbers:

#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n%i == 0)
        {
            return false;

        }
    }
    return true;
}
int main()
{
    int x , y  ; 
    cin>>x>>y;
    for(int i = x ; i <= y ; i++)
    {
        if(isprime(i)){cout<<i<<endl;}
    }
return 0;
}

//worst case : o(n^2)