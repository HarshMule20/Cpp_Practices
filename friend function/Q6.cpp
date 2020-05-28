#include<iostream>
#include<conio.h>
using namespace std;
class fact
{
    int factorial=1,num;
    public:
        void getdata()
        {
            cout<<"Enter a number for factorial= ";
            cin>>num;
        }
        friend int facto(fact &);
};
int facto(fact &a)
{
    for(int i=1;i<=a.num;i++)
        a.factorial=a.factorial*i;
    return a.factorial;
}
int main()
{
    fact a;
    a.getdata();
    cout<<"Factorial of given number is= "<<facto(a);
    getch();
    return 0;
}
