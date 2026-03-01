#include<iostream>
using namespace std;
main()
{
 cout<<"Enter Acceleration :";
 int acceleration;
 cin>>acceleration;
 cout<<"Enter Time :";
 int time;
 cin>>time;
 cout<<"Enter Initial velocity :";
 int initial;
 cin>>initial;
 int final ;
 final=(acceleration*time)+initial;
 cout<<"Final Velocity :"<<final;
}