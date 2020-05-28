#include<iostream>
#include<conio.h>
using namespace std;
class swp
{
    private: int a,b,temp;

    public:
        void getdata()
        {
            cout<<"Enter First Number = ";
            cin>>a;
            cout<<"Enter Second Number = ";
            cin>>b;
            temp=a;
            a=b;
            b=temp;
            cout<<"\n\nAfter swapping the number is : \n\nFirst Number is : "<<a<<"\nSecond Number is : "<<b;
        }
};
int main()
{
    swp s;
    s.getdata();
    getch();
    return 0;
    }
