#include<iostream>
using namespace std;
 main()  
{
    int bill;
    cout<<"Enter your Bill :";
    cin>>bill;
    float PriceafterDiscount;
    if(bill<=5000)
    {
        PriceafterDiscount=bill-(bill*0.05);
    }
    else
    {
        PriceafterDiscount=bill-(bill*0.1);
    }
    cout<<"Your Discount Bill is :"<<PriceafterDiscount;
}