#include<iostream>
#include<conio.h>
using namespace std;
class star
{
    int i;
    unsigned char j;
    public: void getdata()
        {
            for(i='A';i<='E';i++)
            {
                for(j='A';j<=i;j++)
                {
                    cout<<j<<"  ";
                }
                cout<<"\n";
            }
        }
};
int main()
{
    star obj;
    obj.getdata();
    getch();
    return 0;
}

