#include<iostream>
#include<conio.h>
using namespace std;
int operation(char ch)
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'|| ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        cout<<ch<<" is Vowel .";
    else
        cout<<ch<<" is Consonant .\n";
}
int operation(int a,int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n\nAfter swapping\nvalue of a and b are= "<<a<<" and "<<b;
}
int main()
{
    int a,b;
    char ch;
    cout<<"Enter a character= ";
    cin>>ch;
    operation(ch);
    cout<<"\nEnter the value of a= ";
    cin>>a;
    cout<<"Enter the value of b= ";
    cin>>b;
    operation(a,b);
    getch();
    return 0;
}

