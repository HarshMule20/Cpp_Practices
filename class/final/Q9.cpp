#include<conio.h>
#include<iostream>
using namespace std;
class check
{
    private:
        int a;
    public:
        void getdata()
        {
            cout<<"Enter a Number : ";
            cin>>a;
            cout<<"\n";
        }
        void calculate()
        {
    if(a%2==0)
        cout<<a<<" is Even Number";
    else
        cout<<a<<" is Odd Number";
}

};
int main()
{
    check num;
    num.getdata();
    num.calculate();
    getch();
    return 0;
}
