#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    long long int n,i,borrow,k,w,j=0,c=0;
    scanf("%lld%lld%lld",&k,&n,&w);
    for (i=1;i<=w;i++)
    {
        c=c+i*k;

    }
    if (c>n)
    {
        printf("%lld\n",c-n);
    }
    else
        printf("0\n");

    return 0;
}
