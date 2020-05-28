#include <iostream>
#include <conio.h>
using namespace std;
class vowel
{
    private:
        char ch;
    public:
        void getdata()
        {
            cout<<"Enter a character : ";
            cin>>ch;
        }

    void show()
    {
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
            cout<<ch<<" is Vowel";
        else
            cout<<ch<<" is Consonant";
   }
};

int main()
{
    vowel v;
    v.getdata();
    v.show();
    getch();
    return 0;
}
