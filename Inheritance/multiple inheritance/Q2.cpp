#include<iostream>
#include<conio.h>
using namespace std;
class square
{
    protected:
        int a,s;
    public:
        void sqr()
        {
            cout<<"Enter first number= ";
            cin>>a;
            s=a*a;
        }
};
class cube
{
    protected:
        int b,c;
    public:
        void cub()
        {
            cout<<"Enter second number= ";
            cin>>c;
            b=c*c*c;
        }
};
class num:public square,public cube
{
    public:
        void display()
        {
            cout<<"Square of the first number is= "<<s;
            cout<<"\nCube of the second number= "<<b;
        }
};
int main()
{
    num obj;
    obj.sqr();
    obj.cub();
    obj.display();
    getch();
    return 0;
}
