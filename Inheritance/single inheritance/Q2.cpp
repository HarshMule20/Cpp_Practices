#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    int roll;
    public:
        void getdata()
        {
            cout<<"Enter roll number= ";
            cin>>roll;
            cout<<"\n";
        }
        void show()
        {
            cout<<"Roll number= "<<roll;
        }
};
class mark:public student
{
    float sub1,sub2,sub3;
    public:
        void getmark()
        {
            cout<<"enter marks in 3 subjects= ";
            cin>>sub1>>sub2>>sub3;
        }
        void showmark()
        {
            cout<<"\nMarks in all 3 subjects are= "<<sub1<<"\n"<<sub2<<"\n"<<sub3;
        }
};
int main()
{
    mark ob;
    ob.getdata();
    ob.getmark();
    ob.show();
    ob.showmark();
    getch();
    return 0;
}
