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

}
int main()
{
    fast_io;

    /*sometimes input stored in someother file so i/o takes some time
    so we use fast_io or fast input/output to make the program run 
    run faster*/
    cout<<fixed;
    cout<<setprecision(10);

    //setprecision() ensures that how much decimal places you want after
    // the decimal

    precal();

    /*whatever the pre calculation if we want to do we before the preceding forward in the program , we will do inside the
    precal() function*/

    int t  = 1; //testcase:
    for(int i = 1 ; i <=t ; i++)
    {
        cout<<"case #"<<i<<": ";
        solve();
    }
    
    return 0;
}


/*important notes:

(1LL << 60) is shifting the binary representation of 1 60 bits to the left. In other words, it's effectively raising 2 to the power of 60.
// meaning of  the Mod = 1e9 = 10^9+7






*/