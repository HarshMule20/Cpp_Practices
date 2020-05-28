#include<iostream>
#include<conio.h>
using namespace std;
inline int sum_array()
{
    int arr[5]={4,5,6,7,8},sum=0;
    cout<<"Given array= \n";
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i];
        cout<<"\n";
    }


    cout<<"sum of the array is= \n";

    for(int i=0;i<=4;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}
int main()
{
    sum_array();
    getch();
    return 0;
}

