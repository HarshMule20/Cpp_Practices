#include<iostream>
#include<conio.h>
using namespace std;
class area
{
    float radius;
    public:
        void getdata()
        {
            cout<<"Enter the radius of the circle= ";
            cin>>radius;
        }
        friend float calculate(area &);
};
float calculate(area &a)
{
    return 3.14*a.radius*a.radius;
}
int main()
{
    area a;
    a.getdata();
    cout<<"Area of the circle= "<<calculate(a);
    getch();
    return 0;
}
