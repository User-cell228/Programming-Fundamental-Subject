#include<iostream>
using namespace std;
int main()
{
    string password,pass;
    pass="0000";
    cout<<"Enter Your Password :";
    cin>>password;
    if(password==pass)
    {
     cout<<"WOW , you have cracked the code!";
    }
    else 
    {
     cout<<"Its not that simple . Try Again!";
    }
}