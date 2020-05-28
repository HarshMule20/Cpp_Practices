#include<iostream>
#include<conio.h>
using namespace std;
float area(float radius)
{
    return 3.14*radius*radius;
}
float area()
{
    int side;
    cout<<"Enter the side= ";
    cin>>side;
    cout<<"Area of square is= "<<side*side;
}
int main()
{
    int rad,side;
    cout<<"Enter the radius of a circle= ";
    cin>>rad;
    cout<<"Area of circle is= "<<area(rad);
    cout<<"\n";
    area();
    getch();
    return 0;
}
