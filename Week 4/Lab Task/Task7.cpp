#include<iostream>
using namespace std;
main()
{
    int num1,num2;
    cout<<"Enter First Number :";
    cin>>num1;
    cout<<"Enter Second Number :";
    cin>>num2;
    if(num1<num2)
    {
     cout<<"The greater number is :"<<num2;
    }
    else if(num1>num2)
    {
    cout<<"The greater Number is :"<<num1;
    }
}