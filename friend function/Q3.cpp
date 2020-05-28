#include<iostream>
#include<conio.h>
using namespace std;
class calculate
{
    int num;
    public:
        void getdata()
        {
            cout<<"Enter a number= ";
            cin>>num;
        }
        friend int square(calculate &);
        friend int cube(calculate &);
};
int square(calculate &a)
{
    return a.num*a.num;
}
int cube(calculate &a)
{
    return a.num*a.num*a.num;
}
int main()
{
    calculate a;
    a.getdata();
    cout<<"Square of the number is= "<<square(a);
    cout<<"\nCube of the number is= "<<cube(a);
    getch();
    return 0;
}
