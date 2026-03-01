#include<iostream>
using namespace std;
main()
{

 cout<<"Enter the name of person :";
 string name;
 cin>>name;
 cout<<"Enter the target weight loss in kilogram :";
 float weight;
 cin>>weight;
 int Kilogram1=15;
 int days;
 days=weight*Kilogram1;
 cout<<name<<" will need"<<days<<" days to lose"<<weight<<" kg of weight by following the doctor suggestions";

}