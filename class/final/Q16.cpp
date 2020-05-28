#include<iostream>
#include<conio.h>
using namespace std;
class arrays
	{
		int arr[5],sum=0;
		public:
			void getdata()
			{
				cout<<"Enter Five Numbers : ";
				for(int i=0;i<5;i++)
					{
						cin>>arr[i];
					}
			}
			void addition()
			{
					for(int i=0;i<5;i++)
					{
						sum=sum+arr[i];
					}
			}
			void print()
			{
					cout<<"\n\nSum Of Array Elements are : "<<sum;
			}
			void square()
			{
			    	for(int i=0;i<5;i++)
					{
						cout<<"\n\nSquare of "<<arr[i]<<" is "<<arr[i]*arr[i];
					}
			}
	};

int main()
	{
		arrays s1;
		s1.getdata();
		s1.addition();
		s1.print();
		s1.square();
		getch();
		return 0;
	}
