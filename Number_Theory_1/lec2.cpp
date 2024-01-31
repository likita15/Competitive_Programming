// USING THE SIEVE OF ERATOSTHENES: o(nlog(logn)) or o(nloglog(n))

#include <bits/stdc++.h>

using namespace std;

void printOutput(vector<int> vect)
{
	int vect_size = vect.size();

	for(int i = 0; i < vect_size; i++)
    {
        cout << vect[i] << " ";
    }
}



vector<int> primeNumbersTillN(int N) 
{ 
   vector<int>vi; 
   bool prime[N+1];
	prime[0] = false;
    prime[1] = false;
	for(int i = 2 ; i <=N ; i++){prime[i] = true;}

	for(int i = 2 ; i<=sqrt(N);i++)
	{
		if(prime[i] == true){
			for(int j = i*i; j<=N; j+=i)
			{
				prime[j] = false;
			}
		}
	}
	for(int i = 2 ; i <=N ; i++)
	{
		if(prime[i]!=0)
		vi.push_back(i);
	}
	return vi;
}



int main()
{
    // For Fast IO
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    vector<int> primeNumbers = primeNumbersTillN(n);

    printOutput(primeNumbers);

    

}
