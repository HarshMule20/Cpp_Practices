#include<iostream>
#include<conio.h>
using namespace std;
int operation(int a,int b)
{
    return a+b;
}
int operation(int no)
{
    int fact=1;
    for(int i=1;i<=no;i++)
        fact=fact*i;
    return fact;
}
int main()
{
    int num,num1,num2;
    cout<<"Enter a number= ";
    cin>>num;
    cout<<"Factorial of the given number is= "<<operation(num);
    cout<<"\nEnter two numbers= ";
    cin>>num1>>num2;
    cout<<"Addition of two numbers are= "<<operation(num1,num2);
    getch();
    return 0;
}
