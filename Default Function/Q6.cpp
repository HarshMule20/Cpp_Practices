#include<iostream>
#include<conio.h>
using namespace std;
int table(int num=7)
{
    for(int i=num;i<=num*10;i+=num)
       cout<<"\n"<<i;
}
int main()
{
   table();
    getch();
    return 0;
}

