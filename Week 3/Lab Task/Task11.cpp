#include<iostream>
using namespace std;
main()
{
 int win1=3,draw1=2,losses=0;
 cout<<"Enter The number of wins:";
 int win;
 cin>>win;
 win1=win1*win;
 cout<<"Enter the number of draws:";
 int draw;
 cin>>draw;
 draw1=draw1*draw;
 cout<<"Enter the number of losses:";
 int lose;
 cin>>lose;
 losses=losses*lose;
 int total;
 total=win1+draw1+losses;
 cout<<"Pakistan has obtained "<<total <<" in Asia Cup Tournament";
 
}