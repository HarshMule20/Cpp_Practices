#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char name[20],father[20] ;
    int age,mobile_no,aadhar_no;
    cout<<"Enter your name= ";
    cin>>name;
    cout<<"Enter your age= ";
    cin>>age;
    try
    {
        if(age>=18)
        {
            cout<<"Enter your father's name=  ";
            cin>>father;
                cout<<"Enter your mobile number= ";
                cin>>mobile_no;
                cout<<"Enter your aadhar number= ";
                cin>>aadhar_no;
        }
        else
        {
            throw(age);
            {
            cout<<"Result= "<<age<<"\n";
            }
        }

    }
    catch(int i)
    {
        cout<<"Not applicable, Your age must be 18 or above"<<"\n";
    }
    getch();
    return 0;
}
