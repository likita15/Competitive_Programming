#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fr(i, a, b) for (int i = a; i < b; i++)
#define loop(x, n) for (int x = 0; x < n; x++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) x.begin(), x.end()
using namespace std;
void precal()
{

}
void solve()
{
    int n ; 
    cin>>n; 
    vector<ll>a(n);
    fr(i , 0 , n) cin>>a[i]; //taking input using the for-loop:

    cout<<"printed using the macros:"<<endl;
    loop(i , n) cout<<a[i]<<endl; //printing output using the for-loop:

    //let's sort the vector elements:
    sort(all(a));

    //printing after sorting:
    loop(i , n)cout<<a[i]<<endl;
}
int main()
{
    fast_io;

    cout<<fixed;
    cout<<setprecision(10);

    precal();

   
    int t  = 1; 
    for(int i = 1 ; i <=t ; i++)
    {
        cout<<"case #"<<i<<": ";
        solve();
    }
    
    return 0;
}

/*

    Certainly! In simpler terms, the code `cout << fixed; cout << setprecision(10);` is configuring the way C++ outputs floating-point numbers when using `cout` (the standard output stream).

    1. `cout << fixed;`: This line tells C++ to use fixed-point notation when printing floating-point numbers. In fixed-point notation, numbers are displayed with a fixed number of digits after the decimal point, regardless of the size of the number.

    2. `cout << setprecision(10);`: This line sets the precision of the floating-point output to 10 digits. It means that when printing floating-point numbers, C++ will show up to 10 digits after the decimal point.

    Together, these lines ensure that any subsequent floating-point numbers printed using `cout` will be in fixed-point notation and will have up to 10 digits after the decimal point. This provides control over the formatting of floating-point output in your C++ program.


*/













