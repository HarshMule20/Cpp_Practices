#include<iostream>
#include<conio.h>
using namespace std;
void test(int i)
{
    try
    {
        if(i!=0)
            throw i;
        else
            throw "zero";

    }
    catch(...)
    {
        cout<<"\nCaught a Exception";
    }
}
int main()
{
    cout<<"Catching all exception";
    test(1);
    test(2);
    test(3);
    getch();
    return 0;

}
