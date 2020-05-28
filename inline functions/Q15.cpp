#include<iostream>
#include<conio.h>
using namespace std;
inline int leap_year(int year)
{
    if(year%100==0)
      {
          if(year%400==0)
            cout<<"Given year is a leap year";
          else
            cout<<"Given year is not a leap year";
      }
    else
       {
           if(year%4==0)
            cout<<"Given year is a leap year";
        else
            cout<<"Given year is not a leap year";
       }
}
int main()
{
    int yr;
    cout<<"Enter a year= ";
    cin>>yr;
    leap_year(yr);
    getch();
    return 0;
}
