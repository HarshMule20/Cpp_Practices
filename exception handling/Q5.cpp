#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char mobile_no[10];
    cout<<"Enter your mobile number= ";
    cin>>mobile_no;
    try
    {
        if(strlen(mobile_no)==10)
            cout<<"Entered mobile number is= "<<mobile_no;
        else
            throw mobile_no;
    }
    catch(const char *i)
     {
         cout<<"Invalid mobile number";
     }
        getch();
        return 0;
}
