#include<iostream>
#include<conio.h>
using namespace std;
int check(int a,int b=15)
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
    check(14);
    getch();
    return 0;
}
