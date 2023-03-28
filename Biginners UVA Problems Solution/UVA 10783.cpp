#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int a,b,c=0,i,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
        {
        if ((i%2)==1)
          c=c+i;
        }
    printf("Case %d: %d\n",j,c);
    c=0;
    }
    return 0;
}
