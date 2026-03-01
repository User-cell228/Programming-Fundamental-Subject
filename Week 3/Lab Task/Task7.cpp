#include<iostream>
using namespace std;
main()
{
 int Mb1=1024,Kb1=1024,Byte=8;
 cout<<"Enter the size in megabytes(mb):";
 int mb;
 cin>>mb;
 float bit;
 bit=Mb1*Kb1*Byte;
 cout<<mb<<"MB is equivalent to:"<<bit<<"bits";
 


}