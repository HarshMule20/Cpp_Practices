#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class length
{
    int len;
    char name[20];
    public:
         void getdata()
        {
            cout<<"Enter a string to count its Length : ";
            cin>>name;
            len=strlen(name);
        }
        void display()
        {
            cout<<"\n\nThe Length of the String is = "<<len;
        }
};
int main()
{
    length obj;
    obj.getdata();
    obj.display();
    getch();
    return 0;
}
