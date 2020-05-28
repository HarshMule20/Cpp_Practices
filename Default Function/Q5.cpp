#include<iostream>
#include<conio.h>
using namespace std;
int fact(int num=6)
{
    int facto=1;
    for(int i=num;i>=1;i--)
        facto=facto*i;
    cout<<"\n";
    return facto;
}
int main()
{
    cout<<"Factorial= "<<fact();
    getch();
    return 0;
}
