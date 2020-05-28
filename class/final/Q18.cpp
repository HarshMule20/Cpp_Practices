#include<iostream>
#include<conio.h>
using namespace std;
class area
{
    private:
            int r;
            float a;
    public:
            void getdata()
            {
                cout<<"Enter radius= ";
                cin>>r;
                a=3.14*r*r;
            }
            void display()
            {
                cout<<"Area of circle is = "<<a;
            }
};
    int main()
    {
        area a1;
        a1.getdata();
        a1.display();
        getch();
        return 0;
    }
