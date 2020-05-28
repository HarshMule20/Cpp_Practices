#include<iostream>
#include<conio.h>
using namespace std;
class first
{
    protected:
        int num1;
    public:
        void getnumber()
        {
            cout<<"Enter first number= ";
            cin>>num1;
        }
};
class second: public first
{
    protected:
        int num2;
    public:
        void getnum()
        {
            cout<<"Enter second number= ";
            cin>>num2;
        }
};
class third
{
    protected:
        int num3;
    public:
        void getscore()
        {
            cout<<"Enter third number= ";
            cin>>num3;
        }
};
class result:public second,public third
{
    public:
        void display()
        {
            cout<<"Addition of three numbers= "<<num1+num2+num3;
            cout<<"\nSubtraction of three numbers= "<<num1-num2-num3;
            cout<<"\nMultiplication of three numbers= "<<num1*num2*num3;
        }
};
int main()
{
    result ob;
    ob.getnumber();
    ob.getnum();
    ob.getscore();
    ob.display();
    getch();
    return 0;
}

