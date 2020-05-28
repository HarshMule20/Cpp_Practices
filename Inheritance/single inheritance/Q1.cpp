#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class emp
{
    char name[30];
    int age;
    public:
        void setdata(char *s,int n)
        {
            strcpy(name,s);
            age=n;
        }
        void show()
        {
            cout<<"Name= "<<name;
            cout<<"\nAge= "<<age;
        }
};
class officer:public emp
{
    float sal;
    public:
        void setsal(float n)
        {
            sal=n;
        }
        void showsal()
        {
            cout<<"\nSalary= "<<sal;
        }
};
int main()
{
    officer ob;
    ob.setdata("Xyz",45);
    ob.setsal(25000);
    ob.show();
    ob.showsal();
    getch();
    return 0;
}
