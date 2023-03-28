#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    int t,a,b,s=0,k,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d %d",&a,&b);
    s=0;
    if(a%2==0)
        a=a+1;
    for(k=a;k<=b;k=k+2)
        {
            s+=k;
        }
        printf("Case %d: %d\n",i,s);
    }

    return 0;
}
