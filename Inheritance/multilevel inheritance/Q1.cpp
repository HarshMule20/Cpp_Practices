#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    protected:
        int roll_number;
    public:
        void getnumber(int a)
        {
            roll_number=a;
        }
        void shownumber()
        {
            cout<<"Roll number= "<<roll_number<<"\n";
        }
};
class test:public student
{
    protected:
        float sub1,sub2,sub3;
    public:
        void getmark(float x,float y,float z)
        {
            sub1=x;
            sub2=y;
            sub3=z;
        }
        void showmark()
        {
            cout<<"Marks are= "<<sub1<<"\n"<<sub2<<"\n"<<sub3;
        }
};
class result:public test
{
    protected:
        float total;
    public:
        void display()
        {
            total=sub1+sub2+sub3;
            cout<<"\nTotal= "<<total<<"\n";
        }

};
int main()
{
    result obj;
    obj.getnumber(44);
    obj.getmark(20,30,40);
    obj.shownumber();
    obj.showmark();
    obj.display();
    getch();
    return 0;
}
