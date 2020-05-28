#include<iostream>
#include<conio.h>
using namespace std;
class facto
{
    private:
            int i,num,fact;
    public:
            void getdata()
            {
                cout<<"Enter a Number= ";
                cin>>num;
            }
            int display()
            {
                fact=1;
                for(i=1;i<=num;i++)
                {
                    fact=fact*i;
                }
                cout<<"\n\nThe Factorial of "<<num<<" is= "<<fact;
            }
};

    int main()
    {
        facto obj;
        obj.getdata();
        obj.display();
        getch();
        return 0;
    }
