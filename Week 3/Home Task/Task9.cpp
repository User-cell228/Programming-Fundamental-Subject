#include<iostream>
using namespace std;
main()
{
 int number, d1 , d2 , d3 , d4;
 cout<<"Enter 4-digit number :";
 cin>>number;
 d4=number%10;
 number=number/10;
 d3=number%10;
 number=number/10;
 d2=number%10;
 number=number/10;
 d1=number%10;
 number=number/10;
 int sum;
 sum=d1+d2+d3+d4;
 cout<<"Sum of the individual digits :"<<sum; 

 
 
}