#include<iostream>
#include<conio.h>
using namespace std;
class odd
{
    int num;
    public:
        void getdata()
        {
            num=1;
            cout<<"The First 15 Odd numbers are : ";
            for(int i=num;i<=30;i++)
            {
                if(num%2!=0)
                    cout<<i;
                    cout<<" ";
            }
        }
};
int main()
{
    odd obj;
    obj.getdata();
    getch();
    return 0;
}
