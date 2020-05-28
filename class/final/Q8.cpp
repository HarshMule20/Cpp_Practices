#include<iostream>
#include<conio.h>
using namespace std;
class prime
{
    int i,no,flag;
    public:
            int check()
            {
				flag=0;
                cout<<"Enter a number to check whether its a prime number or not: ";
                cin>>no;
                for(i=2;i<no;i++)
                {
                    if(no%i==0)
						flag=1;
                }
				if(flag==1)
					cout<<"Number is not prime number";
				else
					cout<<"Given number is prime number";
            }
};
    int main()
    {
        prime p;
        p.check();
        getch();
        return 0;
    }
