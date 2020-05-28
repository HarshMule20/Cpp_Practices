#include<iostream>
#include<conio.h>
using namespace std;
float area(float rad=7)
{
    return (3.14*rad*rad);
}
int main()
{
    cout<<"The area of the circle is= "<<area();
    getch();
    return 0;
}
