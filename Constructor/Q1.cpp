#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
    private : int number,add;
    public :
        sum()
        {
            add=0;
            for(number =1; number <=100; number++)
            {
                add=add+number;
            }
            cout << add;
    }
};
int main()
{
    cout << "The sum of the first 100 Natural Numbers are : ";
    sum s;
    getch();
    return 0;
}
