#include<iostream>
using namespace std;
main()
{
    cout<<"Enter first number :";
    float num1;
    cin>>num1;
    cout<<"Enter the operator :";
    char op;
    cin>>op;
    cout<<"Enter second nummber :";
    float num2;
    cin>>num2;
    if(op=='+')
    {
     cout<<"Result Is :"<<num1<<"-"<<num2<<"="<<num1-num2;
    }
    else if(op=='-')
    {
     cout<<"Result Is :"<<num1<<"+"<<num2<<"="<<num1+num2;
    }
    else if(op=='*')
    {
    cout<<"Result Is :"<<num1<<"/"<<num2<<"="<<num1/num2;
    }
    else if(op=='/')
    {
    cout<<"Result Is :"<<num1<<"*"<<num2<<"="<<num1*num2;
    }
    else
    cout<<"Invalid Operator";
}