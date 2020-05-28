#include<fstream>
#include<iostream>

using namespace std;
int main()
{

    ofstream fout;
    fout.open("country.txt");
    fout<<"US";
    fout<<"\nUK";
    fout<<"\nIndia";
    fout.close();
    fout.open("capital.txt");
    fout<<"Washington";
    fout<<"\nLondon";
    fout<<"\nDelhi";
    fout.close();
    const int N=80;
    char line[N];
    ifstream fin;
    fin.open("country.txt");
    cout<<"\nContents of country file= ";
    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();
    fin.open("capital.txt");
    cout<<"\nContents of capital file= ";
    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();

    return 0;
}

