#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
inline int palindrome(char *s)
{
    char str[10];
    int len,i,mid,j;
        strcpy(str,s);
        len=strlen(str);
        mid=len/2;
        len--;
        for(i=0;i<=mid;i++)
                {
                    if(str[i]==str[len-i])
                        j=0;
                    else
                        j=1;
                }
                    if(j==0)
                          cout<<"String is palindrome";
                    else
                        cout<<"String is not a palindrome";
}
int main()
{
    char ch[20];
    cout<<"Enter a string to check palindrome= ";
    cin>>ch;
    palindrome(ch);

getch();
return 0;
}
