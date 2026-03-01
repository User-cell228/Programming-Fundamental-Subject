#include<iostream>
using namespace std;
main()
{
 cout<<"Enter the number of sides of the polygon:";
 int n;
 cin>>n;
 int polygon;
 polygon=(n-2)*180;
 cout<<"The total sum of internal angel of a :"<<n<<"-sided polygon is :"<<polygon<<" degrees";

}