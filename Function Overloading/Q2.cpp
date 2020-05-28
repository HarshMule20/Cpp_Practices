#include<iostream>
#include<conio.h>
using namespace std;
int operation(int a,int b);
int operation(int a);
int main()
{
    int num1,num2;
    cout<<"Enter two numbers= ";
    cin>>num1>>num2;
    cout<<"Multiplication of numbers= "<<operation(num1,num2);
    cout<<"\nSquare of the first number is= "<<operation(num1);
    getch();
    return 0;
}
int operation(int a,int b)
{
    return a*b;
}
int operation(int a)
{
    return a*a;
}

