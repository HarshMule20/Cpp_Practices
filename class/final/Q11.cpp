#include<iostream>
#include<conio.h>
using namespace std;
class star
{
    int r,c,n=1;
    public:
        void getdata()
        {
            for(r=1;r<=3;r++)
            {
                for(c=1;c<=r;c++)
                {
                    cout<<n<<" ";
                    n++;
                }
                cout<<"\n";
            }
        }
};
int main()
{
    star obj;
    obj.getdata();
    getch();
    return 0;
}
