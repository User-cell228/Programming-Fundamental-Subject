#include<iostream>
using namespace std;
main()
{
    cout<<"Temperature City 1 in degree :";
    float temp1;
    cin>>temp1;
    cout<<"Temperature City 2 in degree :";
    float temp2;
    cin>>temp2;
    float difference;
    difference=temp1-temp2;
    if(difference>10)
    {
      cout<<"Difference is to Big";
    }
    if(difference<10)
    {
        cout<<"Ends Program";
    }
}
