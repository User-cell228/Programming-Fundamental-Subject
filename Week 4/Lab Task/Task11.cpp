#include<iostream>
using namespace std;
main()
{
    cout<<"Enter Per month Salary :";
    float permonthsalary;
    cin>>permonthsalary;
    cout<<"Enter Laptop Price :";
    float laptopprice;
    cin>>laptopprice;
    cout<<"Advance salary for how many months :";
    float months;
    cin>>months;
    float advancesalary = permonthsalary*0.5*months;
    cout<<"Your advance salary is "<<advancesalary;
    if (advancesalary>=laptopprice)
    {
    cout<<"You can buy the laptop with this advance salary";
    }
    else
    {
        cout<<"you cant you the laptop with this salary"<<endl;
        float waitingmonths=laptopprice/(permonthsalary*0.5);
        cout<<"you can to wait for :"<<waitingmonths;
    }
}