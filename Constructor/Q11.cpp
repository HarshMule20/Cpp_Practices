#include<iostream>
#include<conio.h>
using namespace std;
class student
	{
	    private : int r,a;
		public :
            student(int rn,int age)
				{
				    r=rn;
				    a=age;
					cout<<"\n\nStudent's Roll Number is : "<<r;
					cout<<"\nStudent's age is : "<<a;
				}
	};


int main()
	{
	    int rn,age;
	    cout<<"Enter Student Roll Number : ";
        cin>>rn;
        cout<<"Enter Student Age : ";
        cin>>age;
		student s(rn,age);
		getch();
		return 0;
	}
