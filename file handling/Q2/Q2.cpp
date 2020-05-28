#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char source[20],target[20];
    cout<<"Enter source filename= ";
    cin>>source;
    cout<<"Enter target filename= ";
    cin>>target;
    ifstream infile(source);
    ofstream outfile(target);
    outfile<<infile.rdbuf();          //returns a pointer to buffer stream
    cout<<"File Copied successfully";
    getch();
    return 0;
}
