#include<iostream>
using namespace std;
main()
{
cout<<"Name :";
string name;
cin>>name;

cout<<"Enter your Matriculation Marks (out of 1100):";
float Matric;
cin>>Matric;
Matric = Matric * 10/1100;

cout<<"ENTRE your Intermediate Marks (Out of 550):";
float Inter;
cin>>Inter;
Inter = Inter * 40/550;
cout<<"Entre Ecat marks (out of 400):";
float Ecat;
cin>>Ecat;
Ecat = Ecat * 50/400;
float Aggregate;
Aggregate = Matric+Inter+Ecat;
cout<<"Your Aggregate Is:"<<Aggregate<<endl;
cout<<"----------Your Aggregate----------"<<endl;
cout<<"Student Name:"<<name<<endl;
cout<<"Your Aggregate:"<<Aggregate;
}