#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
    private : int i,s;
    public :
            void add()
            {
                s=0;
                for(i=1;i<=50;i++)
                {
                    s=s+i;
                }
                cout<<"Sum of First 50 Natural numbers are : "<<s;
            }
};

    int main()
    {
        sum s;
        s.add();
        getch();
        return 0;
    }
