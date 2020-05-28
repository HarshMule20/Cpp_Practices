#include<iostream>
#include<conio.h>
using namespace std;
int series(int no)
{
    for(int i=no;i<=no*10;i+=no)
        cout<<i<<"\n";

}
int series(int a,int b)
{
     int c;
     for(int i=0;i<=9;i++)
     {
         c=a+b;
         cout<<c<<"\n";
         a=b;
         b=c;
     }

}
int main()
{
    int a,b,num;
    cout<<"Enter the number for table= ";
    cin>>num;
    series(num);
    cout<<"\nEnter the starting number for the Fibonacci series= ";
    cin>>a>>b;
    series(a,b);
    getch();
    return 0;
}
