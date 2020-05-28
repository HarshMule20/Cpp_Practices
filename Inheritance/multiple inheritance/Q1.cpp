#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    protected:
        int roll_no;
    public:
        void getroll()
        {
            cout<<"Enter roll number= ";
            cin>>roll_no;
        }
};
class B
{
    protected:
        float sub1,sub2;
    public:
        void getmark()
        {
            cout<<"Enter marks of two subjects= ";
            cin>>sub1>>sub2;
        }
};
class C:public A,public B
{
    protected:
        float total;
    public:
        void display()
        {
            total=sub1+sub2;
            cout<<"Total marks of student= "<<total;
        }
};
int main()
{
    C obj;
    obj.getroll();
    obj.getmark();
    obj.display();
    getch();
    return 0;
}
