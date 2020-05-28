#include<iostream>
#include<conio.h>
using namespace std;
class check
{
    int number;
    public:
        void getdata()
        {
            cout<<"Enter a number= ";
            cin>>number;
        }
        friend int checker(check &);
};
int checker(check &a)
{
    if(a.number%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    check a;
    a.getdata();
    if(checker(a)==1)
        cout<<"Even number";
    else
        cout<<"Odd number";
    getch();
    return 0;
}
