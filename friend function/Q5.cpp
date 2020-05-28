#include<iostream>
#include<conio.h>
using namespace std;
class year
{
    int yr;
    public:
        void getdata()
        {
            cout<<"Enter a year= ";
            cin>>yr;
        }
        friend int leap_year(year &);
};
int leap_year(year &a)
{
    if(a.yr%100==0)
    {
        if(a.yr%400==0)
            cout<<a.yr<<" Leap year";
        else
            cout<<a.yr<<" Not a leap year";
    }
    else
    {
        if(a.yr%4==0)
            cout<<a.yr<<" Leap year";
        else
            cout<<a.yr<<" Not a leap year";
    }
}
int main()
{
    year a;
    a.getdata();
    leap_year(a);
    getch();
    return 0;
}
