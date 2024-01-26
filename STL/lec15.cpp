// pairs in the c++:
#include<bits/stdc++.h>
using namespace std;
int main()
{
  /*Pairs are conatainers which can store two different and the
  same datatype at the same time*/

  pair<string , int > p; 
  //making pairs manually: 
  p = {"coding " , 23}; 

  //making pairs using the make function:
  p = make_pair("coding" , 23);

  //let's make vector of the pairs:
  vector<pair<string , int>>phone_book;
  phone_book.push_back({"codingninjas" , 1235165});
  phone_book.push_back({"ninja" , 1235});
  phone_book.push_back({"conjas" , 123165});
  phone_book.push_back({"cninjas" , 1265});
  phone_book.push_back({"csfundamentals" , 5165});

  for(auto i : phone_book){
    cout<<i.first<<" "<<i.second<<endl;
  }


return 0;
}