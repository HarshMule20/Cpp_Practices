#include<iostream>
#include<conio.h>
using namespace std;
class operation
{
    int num1,num2;
    public:
        void getdata()
        {
            cout<<"Enter two numbers= ";
            cin>>num1>>num2;
        }
        friend int add(operation &);
        friend int sub(operation &);
        friend int mul(operation &);
        friend int div(operation &);
};
int add(operation &a)
{
    return a.num1+a.num2;
}
int sub(operation &a)
{
    return a.num1-a.num2;
}
int mul(operation &a)
{
    return a.num1*a.num2;
}
int div(operation &a)
{
    return a.num1/a.num2;
}

int main()
{
    operation a;

    a.getdata();
    cout<<"Addition of two numbers is= "<<add(a);
    cout<<"\nSubtraction of two numbers is= "<<sub(a);
    cout<<"\nMultiplication of two numbers is= "<<mul(a);
    cout<<"\nDivision of two numbers is= "<<div(a);
    getch();
    return 0;
}
