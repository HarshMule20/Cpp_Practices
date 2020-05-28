#include<iostream>
#include<conio.h>
using namespace std;
class first
{
    protected:
        int num1;
    public:
        void getdata()
        {
            cout<<"Enter first number= ";
            cin>>num1;
        }
};
class second:public first
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
class third:public second
{
    public:
        void display()
        {
            cout<<"Addition of numbers= "<<num1+num2;
            cout<<"\nSubtraction of number= "<<num1-num2;
            cout<<"\nMultiplication of two numbers= "<<num1*num2;
            cout<<"\nDivision of two numbers= "<<num1/num2;
            cout<<"\nModulus of two numbers= "<<num1%num2;
        }

};
int main()
{
    third obj;
    obj.getdata();
    obj.getnum();
    obj.display();
    getch();
    return 0;
}
