#include<iostream>
#include<conio.h>
using namespace std;
class operation
{
	public :
		operation(int a,int b)
			{
				cout<<"\n\nAddition of "<<a<<" And "<<b<<" are : "<<a+b;
            }
		 operation()
			{
                cout<<"\n\nSubtraction of 10 And 5 is  "<<10-5;
			}
};


int main()
{
	int n1,n2;
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
	operation c(n1,n2);
	cout<<endl<<endl;
	operation d;
	getch();
	return 0;
}
