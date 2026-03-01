#include<iostream>
using namespace std;
main()
{
 cout<<"Weight of the fertilizer bag(in pound): ";
 int weight;
 cin>>weight;
 cout<<"Total price of the bag :$";
 int price;
 cin>>price;
 cout<<"Area the bag can cover(in square feet):";
 int area;
 cin>>area;
 int PricePerRound;
 PricePerRound=price/weight;
 int Costpersquarefoot;
 Costpersquarefoot = price/area;
 cout<<"Cost of fertilizer per pound :$"<<PricePerRound<<endl;
 cout<<"Cost of fertilizer per square foot :$"<<Costpersquarefoot;
}
 


