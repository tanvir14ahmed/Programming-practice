#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
    int a=4;
    int i;
    double d=4.0;
    double j;
    string s="HackerRank ";


    cin>>i;
    cin>>j;
    string name;
    cin.ignore();
    getline (cin,name);


    cout<<a+i<<endl;
    printf("%0.1f\n",d+j);

    cout<<s;
    cout<<name;


    return 0;

}
