#include<iostream>
using namespace std;
main()
{
    cout<<"Enter The Name of First Brother :";
    string firstbrother;
    cin>>firstbrother;
    cout<<"Enter The Age of First Brother :";
    int age1;
    cin>>age1;
    cout<<"Enter The Name of Second Brother :";
    string secondbrother;
    cin>>secondbrother;
    cout<<"Enter The Age of Second Brother :";
    int age2;
    cin>>age2;
    cout<<"Enter The Name of Third Brother :";
    string thirdbrother;
    cin>>thirdbrother;
    cout<<"Enter The Age of Third Brother :";
    int age3;
    cin>>age3;
    if(age1<age2)
    {
    if(age1<age3)
    {
     cout<<"Your Youngest Brother is :"<<firstbrother;   
    }
    else
    {
    cout<<"Your Youngets Brother is :"<<thirdbrother;
    }
    }
    else
    if(age2 > age3)
    {
        cout<<"Your Youngets Brother is  "<<thirdbrother;
    }
    else
    {
        cout<<"YourYoungest Brother  is "<<secondbrother;
    }
    
}