#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
class combine
{
    char str1[20],str2[20];
    public :
        void getdata()
        {
            cout<<"Enter First string : ";
            cin>>str1;
            cout<<"Enter Second string : ";
            cin>>str2;
        }
        void display()
        {
            strcat(str1,str2);
            cout<<"\n\nThe Combination of strings are : "<<str1;
        }
};
int main()
{
    combine obj;
    obj.getdata();
    obj.display();
    getch();
    return 0;
}
