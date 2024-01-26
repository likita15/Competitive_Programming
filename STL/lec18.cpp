// struct datatype:

#include<bits/stdc++.h>
using namespace std;
struct student{
    string name , phone_number ; 
    int roll , class_num ; 
    char section ; 
};
void printStudentDetails(student s)
{
    cout<<s.name<<endl;
    cout<<s.class_num<<endl;
    cout<<s.phone_number<<endl;
    cout<<s.section<<endl;

}

int main()
{
    student s1;
    s1.name = "coding ninjas";
    s1.roll = 12;
    s1.class_num = 5 ; 
    s1.section = 'b';
    s1.phone_number = "465651458468";

    printStudentDetails(s1);


return 0;
}