#include<iostream>
#include<conio.h>
using namespace std;
int operation(int no)
{
    int flag=0;
    for(int i=2;i<no;i++)
    {
        if(no%i==0)
            flag=1;
    }
    return flag;
}
int operation(int a,int b)
{
    return a-b;
}
int main()
{
    int num,num1,num2;
    cout<<"Enter a number= ";
    cin>>num;
    if(operation(num)==1)
        cout<<num<<" is not a prime number";
    else
        cout<<num<<" is a prime number";
    cout<<"\n\nEnter two numbers= ";
    cin>>num1>>num2;
    cout<<"Subtraction of "<<num1<<" and "<<num2<<" is= "<<operation(num1,num2);
    getch();
    return 0;
}
