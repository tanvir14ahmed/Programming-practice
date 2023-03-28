#include<iostream>
using namespace std;
#include<cstdio>


long int series(int n)
{
    if (n < 1)
    return n;
    if (n == 1)
    return 2;

  return ((4*series(n-1))+series(n-2));
}


int main ()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        long int n;
        scanf("%ld",&n);
        cout << series(n)<<endl;
    }
    return 0;
}
