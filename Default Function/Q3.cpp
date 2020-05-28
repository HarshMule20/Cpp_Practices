#include<iostream>
#include<conio.h>
using namespace std;
int square(int a=5)
{
    return a*a;
}
int cube(int a=12)
{
    return a*a*a;
}
int main()
{
    cout<<"\nSquare of the number is= "<<square();
    cout<<"\nCube of the number is= "<<cube();
    getch();
    return 0;
}
