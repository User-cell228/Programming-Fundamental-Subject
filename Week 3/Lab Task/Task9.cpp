#include<iostream>
using namespace std;
main()
{
 cout<<"Enter Voltage (In volts):";
 int volt;
 cin>>volt;
 cout<<"Enter Current (In Amperes):";
 float current;
 cin>>current;
 float power;
 power = volt*current;
 cout<<"The power is "<<power<<"watts";
}