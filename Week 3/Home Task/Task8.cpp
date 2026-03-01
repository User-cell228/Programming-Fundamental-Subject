#include<iostream>
using namespace std;
main()
{
 cout<<"Enter vegetable price per kilogram(In coins):";
 float vegetableprice;
 cin>>vegetableprice;
 cout<<"Enter fruit price per kilogram(In coins):";
 float fruitprice;
 cin>>fruitprice;
 cout<<"Enter total kilograms of vegetable :";
 float vegetableweight;
 cin>>vegetableweight;
 cout<<"Enter total kilograms of fruit :";
 float fruitweight;
 cin>>fruitweight;
 float vegetableearning;
 vegetableearning=vegetableprice*vegetableweight;
 float fruitearning;
 fruitearning=fruitprice*fruitweight;
 float totalcoin;
 totalcoin=vegetableearning+fruitearning;
 float Rp1=1.94;
 float Rupees;
 Rupees=totalcoin/Rp1;
 cout<<"Total earning in rupees (Rps):"<<Rupees;
 
 
}