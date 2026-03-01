#include<iostream>
using namespace std;
main()
{
 cout<<"Number of square meter you can paint:";
 int number;
 cin>>number;
 cout<<"WIDTH of the single wall(in meter):";
 int width;
 cin>>width;
 cout<<"Height of the single wall(in meter):";
 int height;
 cin>>height;
 int numberofwalls;
 numberofwalls=number/(width*height);
 cout<<"Number of wall you can paint :"<<numberofwalls;
}

 
 
