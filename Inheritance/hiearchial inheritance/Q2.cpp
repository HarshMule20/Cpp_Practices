#include<iostream>
#include<conio.h>
using namespace std;
class number
{
    protected:
        int num;
    public:
        void getdata(int a)
        {
            num=a;
        }
};
class square:public number
{
    public:
        void display_sqr()
        {
            cout<<"Square of the number is= "<<num*num;
        }
};
class cube: public number
{
    public:
        void display_cube()
        {
            cout<<"\nCube of the number is= "<<num*num*num;
        }
};
int main()
{
    square ob;
    int a;
    cout<<"Enter the number= ";
    cin>>a;
    ob.getdata(a);
    ob.display_sqr();
    cube obj;
    obj.getdata(a);
    obj.display_cube();
    getch();
    return 0;
}
