//string functions:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //getline function:
    //push_back():
    //pop_back();
    //substr(starting_index , length_sub_string)
    

    //getline:
    /*getline function is used to take input of the string that contains
    space in it , doing it normally will using the 'cin' will only 
    takes the continuous string before the white_space it will no read 
    the remaining string to overcome it we use getline()*/

    string str ; 
    getline(cin , str);
    cout<<str<<endl;

    //length of string:
    cout<<str.size()<<endl;
    

    //appending the charcter in string:
    str.push_back('z');
    cout<<str<<endl;

    //poping the character from the string:
    str.pop_back();
    cout<<str<<endl;


    /*SYNTAX : cout<<str.substr(from_index_value , length_of_substring)*/
    cout<<str<<endl;
    cout<<str.substr(0,0)<<endl;
    cout<<str.substr(0,2)<<endl;
    cout<<str.substr(2,2)<<endl;
    cout<<str.substr(0,10)<<endl;



return 0;
}