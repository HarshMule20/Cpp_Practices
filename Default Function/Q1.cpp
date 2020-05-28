#include<iostream>
#include<conio.h>
using namespace std;
int add(int a,int b=10)
{
    return (a+b);
}
int subtract(int a=25,int b=12)
{
    return (a-b);
}
int multiply(int a,float b=9.6)
{
    return (a*b);
}
float division(int a,int b=4)
{
    return(a/b);
}
int mod(int a,int b=2)
{
    return a%b;
}
int main()
{
    cout<<"\nAddition of two numbers is= "<<add(23);
    cout<<"\nSubtraction of two numbers is= "<<subtract();
    cout<<"\nMultiplication of two numbers are= "<<multiply(15);
    cout<<"\nDivision of two numbers are= "<<division(16);
    cout<<"\nModulus of two numbers are= "<<mod(76);
    getch();
    return 0;
}
