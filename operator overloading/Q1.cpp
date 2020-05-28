#include <iostream>
#include <conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

class combine
    {
        private:
            char str[50];
        public:
            combine()
                {
                    strcpy(str,"");
                }
            combine(char s[])
                {
                    strcpy(str,s);
                }
            void display()
                {
                    cout<<str;
                }
            combine operator +(combine s)
                {
                    combine temp;
                    if(strlen(str)+strlen(s.str)<50)
                        {
                            strcpy(temp.str,str);
                            strcat(temp.str,s.str);
                        }
                    else
                        {
                            cout<<"\n String Length Exceeds !";
                            exit(1);
                        }
                        return(temp);
                }
    };

int main()
{
    char str1[20],str2[20];
    cout<<"Enter First String : ";
    cin>>str1;
    cout<<"Enter Second String : ";
    cin>>str2;
    combine S1=str1;
    combine S2=str2;
    combine S3;
    S3=S1+S2;
    cout<<"\n\nCombined String is : ";
    S3.display();
    getch();
    return 0;
}
