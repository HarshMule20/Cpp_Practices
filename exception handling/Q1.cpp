#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a and b= ";
    cin>>a;
    cin>>b;
    try
    {
        if(b!=0)
        {
            cout<<"Result= "<<a/b<<"\n";
        }
        else
        {
            throw(b);
        }
    }
    catch(int i)
    {
        cout<<"Exception caught(invalid value of b),that is "<<b<<"\n";
    }
    cout<<"END";
    getch();
    return 0;
}
