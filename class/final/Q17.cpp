#include<iostream>
#include<conio.h>
using namespace std;
class table
{
    int i,num,tab;
    public:
        void getdata()
        {
            tab=1;
            cout<<"Enter a number for table : ";
            cin>>num;
            for(i=1; i<=10; i++ )
            {
                tab=num*i;
                cout<<tab<<"\n";
            }
        }
};
int main()
{

    table t;
    t.getdata();
    getch();
    return 0;
}
