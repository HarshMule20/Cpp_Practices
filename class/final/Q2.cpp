#include <iostream>
#include <conio.h>
using namespace std;
class fibonacci
{
    int no,i,a,b,c;
public:
    void display()
    {
    a=0;
    b=1;
    cout<<"Enter number of terms for series :";
    cin>>no;
    cout<<"\nFibonacci series are :";

    for(i=0;i<no;i++)
    {
        cout<<"\n"<<a;
        c=a+b;
        a=b;
        b=c;
    }
}
};
int main()
{
    fibonacci obj;
    obj.display();
    getch();
    return 0;
}

