#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int login_id;
    char password[20];
    cout<<"Enter login id= ";
    cin>>login_id;
    try
    {
        if(login_id!=100)
            throw (login_id);
        else
        {
            cout<<"Enter password= ";
            cin>>password;
            if(strcmp("abcd",password)!=0)
                throw password;
                cout<<"Valid user";
        }

    }
    catch(int i)
    {
        cout<<"Invalid Login Id";
    }
    catch(const char *s)
    {
        cout<<"invalid password";
    }
    getch();
    return 0;
}
