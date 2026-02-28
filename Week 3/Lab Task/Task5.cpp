#include<iostream>
using namespace std;
main()
{
 cout<<"Entre the charge(Q) in Coulombs:";
 float Coulombs;
 cin>>Coulombs;
 cout<<"Entre the time(T) in second:";
 float Time;
 cin>>Time;
 float Current;
 Current=Coulombs/Time;
 cout<<"The Current Is ="<<Current;
}