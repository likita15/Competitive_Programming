//linear diophantine equation: LDE
#include<bits/stdc++.h>
using namespace std;
int extendedGCD(int a , int b , int &x , int &y)
{
    if(b == 0){
        x = 1; 
        y = 0;

        return a ;
    }
    int x1  , y1;
    int g = extendedGCD(b , a%b , x1 , y1);

    x = y1;
    y = x1-floor(a/b)*y1;

    return g;

}
int main()
{
    int a , b , c , x , y ;  
    cin>>a>>b>>c;
    int g = extendedGCD(a  , b , x  , y);
     
    if(c%g == 0) cout<<"x: "<<x*(c/g)<<" y: "<<y*(c/g)<<endl;
    else cout<<"LDE dne"<<endl;
    
    return 0;
}