#include<iostream>
using namespace std;
main()
{
   int number,even;
   cout<<"Enter any number :";
   cin>>number;
   even=number%2;
   if(even==0)
   {
    cout<<"Given Number is 'Even'";
   } 
   else 
   {
    cout<<"Given Number is 'ODD'";
   }
}