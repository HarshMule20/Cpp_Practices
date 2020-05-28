#include<iostream>
#include<conio.h>
using namespace std;
int operation(int no)
{
    int n1,n2,n3,sum=0;
    n1=no/100;
    n2=(no%100)/10;
    n3=no%10;
    sum=n1*n1*n1+n2*n2*n2+n3*n3*n3;
    return sum;
}
int operation(int a,int b)
{
    return a+b;
}
int main()
{
    int num,num1,num2;
    cout<<"Enter a number= ";
    cin>>num;
    if(operation(num)==num)
        cout<<num<<" is Armstrong number";
    else
        cout<<num<<" is not an Armstrong number";
    cout<<"\n\nEnter two numbers= ";
    cin>>num1>>num2;
    cout<<"Addition of "<<num1<<" and "<<num2<<" is= "<<operation(num1,num2);
    getch();
    return 0;
}
