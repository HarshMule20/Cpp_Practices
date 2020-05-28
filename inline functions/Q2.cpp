#include<iostream>
#include<conio.h>
using namespace std;
inline int arm(int a)
{
    int n1,n2,n3,sum=0;
    n1=a/100;
    n2=(a%100)/10;
    n3=a%10;
    sum=n1*n1*n1+n2*n2*n2+n3*n3*n3;
     if(a==sum)
        cout<<"An armstrong number";

    else
        cout<<"Not an armstrong number";

}
int main()
{
    int num;
    cout<<"Enter number= ";
    cin>>num;
    arm(num);
    getch();
    return 0;
}
