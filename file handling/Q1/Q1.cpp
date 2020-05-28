#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("Item.txt");
    char name[30];
    float cost;
    cout<<"Enter name= ";
    cin>>name;
    fout<<name;
    cout<<"Enter item cost= ";
    cin>>cost;
    fout<<cost;
    fout.close();
    ifstream fin("item.txt");
    //fin>>name;
    //fin>>cost;
    cout<<"Item name= "<<name;
    cout<<"\nItem cost= "<<cost;
    fin.close();
    getch();
    return 0;
}
