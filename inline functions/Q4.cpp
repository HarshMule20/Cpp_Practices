#include<iostream>
#include<conio.h>
using namespace std;
inline int square_array()
{
    int arr[5]={4,5,6,7,8};
    cout<<"Given array= \n";
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i];
        cout<<"\n";
    }


    cout<<"square of the array is= \n";

    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]*arr[i];
        cout<<"\n";
    }
}
int main()
{
    square_array();
    getch();
    return 0;
}
