#include<iostream>
using namespace std;
main()
{
 int mint1=60;
 cout<<"Number of Minutes:";
 int mint;
 cin>>mint;
 mint1=mint*mint1;
 cout<<"Frames per Second:";
 int sec;
 cin>>sec;
 int total;
 total=mint1*sec;
 cout<<"Total Number of Frames :"<<total;
}