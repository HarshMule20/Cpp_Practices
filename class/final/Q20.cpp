#include<iostream>
#include<conio.h>
using namespace std;
class sorting
{
    int num[5],i,j,temp;
    public:
        void getdata()
            {
                cout<<"Enter Five Numbers : ";
                for(i=0;i<5;i++)
                {
                    cin>>num[i];
                }
            }
        void method()
            {
                for (i=0;i<5;i++)
                {
                      for(j=i+1;j<5;j++)
                         {
                             if (num[i]>num[j])
                             {
                                temp = num[i];
                                num[i]= num[j];
                                num[j] = temp;
                              }
                         }
                }
                for(i=0;i<5;i++)
                {
                    cout<<num[i]<<"  ";
                }
            }
};
int main()
{
    sorting s;
    s.getdata();
    cout<<"\n\nSorted Array : ";
    s.method();
    getch();
    return 0;
}
