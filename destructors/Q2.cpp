#include<iostream>
#include<conio.h>
using namespace std;
class check
{
    int number,flag=0;
public:
    check()
    {
        cout<<"Enter a number= ";
        cin>>number;
        for(int i=2;i<=number/2;i++)
        {
            if(number%i==0)
                flag=1;
        }
    }
    void show()
    {
    if(flag==1)
        cout<<number<<" is not a prime number ";
    else
        cout<<number<<" is a prime number";

     if(number%2==1)
                cout <<"\n"<<number<< " Odd number " << endl;
            else
                cout <<"\n"<<number<< " Even number " << endl;
    }
    ~check()
    {
        cout<<"\nDestructor is called";
    }

};
int main()
{
    check ob;
    ob.show();
    getch();
    return 0;
}

