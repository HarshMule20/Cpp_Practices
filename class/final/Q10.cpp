#include<iostream>
#include<conio.h>
using namespace std;

class pattern
{
    int n, c, k, space = 1;
    public:
      void getdata()
      {
        space = 3 - 1;
        cout<<endl<<endl;
        for (k = 1; k<=3; k++)
        {
            for (c = 1; c<=space; c++)
                cout<<" ";
            space--;
            for (c = 1; c<= 2*k-1; c++)
                cout<<"*";
                cout<<"\n";
        }
        space = 1;
        for (k = 1; k<= 3 - 1; k++)
        {
            for (c = 1; c<= space; c++)
                cout<<" ";
            space++;
            for (c = 1 ; c<= 2*(3-k)-1; c++)
                cout<<"*";
            cout<<"\n";
        }
      }
};
int main()
{
    pattern obj;
    obj.getdata();
    getch();
  return 0;
}
