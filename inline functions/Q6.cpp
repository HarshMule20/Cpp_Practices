#include<iostream>
#include<conio.h>
using namespace std;
inline int check(int a,int b)
{
    if(a%2==0 && b%2==0)

        cout<<"a and b are even numbers";
    if(a%2==0 && b%2!=0)
        cout<<"a is even number and b is odd number";
    if(a%b!=0 && b%2==0)
        cout<<"a is odd number and b is even number";
    if(a%2!=0 && b%2!=0)
        cout<<"a and b both are odd numbers";
}
int main()
{
    int no1,no2;
    cout<<"Enter first number= ";
    cin>>no1;
    cout<<"Enter second number= ";
    cin>>no2;
    check(no1,no2);
    getch();
    return 0;
}
