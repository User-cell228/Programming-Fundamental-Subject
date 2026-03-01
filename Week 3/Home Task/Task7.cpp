#include<iostream>
using namespace std;
main()
{
 cout<<"Enter the movie name :";
 string name;
 cin>>name;
 cout<<"Enter the adult ticket price :$";
 int adult;
 cin>>adult;
 cout<<"Enter the child ticket price :$";
 int child;
 cin>>child;
 cout<<"The number of adult ticket sold :";
 int adultticket;
 cin>>adultticket;
 cout<<"The number of childern's ticket sold :";
 int childticket;
 cin>>childticket;
 cout<<"The percentage of the total money donate to charity :";
 int percentage;
 cin>>percentage;
 int total;
 total=(adult*adultticket)+(child*childticket);
 int donation;
 donation=total*(percentage/100.0);
 int remaining;
 remaining=total-donation;
 cout<<"--------------------------------------------------------"<<endl;
 cout<<"Movie :"<<name<<endl;
 cout<<"Total amount generated from ticket sale :$"<<total<<endl;
 cout<<"Donation to charity("<<percentage<<") :$"<<donation<<endl;
 cout<<"Remaining amount after donation :$"<<remaining;
 }