#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    protected:
        int roll;
    public:
        void getnumber(int a)
        {
            roll=a;
        }
        void putnumber()
        {
            cout<<"Roll number= "<<roll<<"\n";
        }

};
class test: public student
{
    protected:
        float sub1,sub2;
    public:
        void getmark(float x,float y)
        {
            sub1=x;
            sub2=y;
        }
        void putmark()
        {
            cout<<"Marks of subject 1= "<<sub1;
            cout<<"\nMarks of subject 2= "<<sub2;
        }
};
class sport
{
    protected:
        float score;
    public:
        void getscore(float s)
        {
            score=s;
        }
        void putscore()
        {
            cout<<"\nscore= "<<score;
        }
};
class result:public test,public sport
{
    protected:
        float total;
    public:
        void display()
        {
            total=sub1+sub2+score;
            putnumber();
            putmark();
            putscore();
            cout<<"\nTotal performance= "<<total;
        }
};
int main()
{
    result ob;
    ob.getnumber(121);
    ob.getmark(50.5,68);
    ob.getscore(5.0);
    ob.display();
    getch();
    return 0;
}
