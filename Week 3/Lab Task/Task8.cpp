#include<iostream>
using namespace std;
main()
{
 int hour1=60;
 int mint1=60;
 cout<<"ENTER the number of hours:";
 int hours;
 cin>>hours;
 int second;
 second=hours*mint1*hour1;
 cout<<hours<<" is equivalent to:"<<second<<"seconds";
}