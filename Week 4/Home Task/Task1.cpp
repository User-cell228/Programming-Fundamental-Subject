#include<iostream>
using namespace std;
main()
{
    cout<<"Enter Country NAME :";
    string country;
    cin>>country;
    cout<<"Enter Ticket Price in Dollar :";
    float ticketprice;
    cin>>ticketprice;
    if(country=="ireland")
    {
    float priceafterdiscount;
    priceafterdiscount=ticketprice-(0.1*ticketprice);
    cout<<"Price After Discount :"<<priceafterdiscount;
    }
    else
    {
    float priceafterdiscount;
    priceafterdiscount=ticketprice-(0.05*ticketprice);
    cout<<"Price After Discount :"<<priceafterdiscount;
    }
}