#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>

int main()
{
    int a,b,c,ans,i;
    while(scanf("%d%d",&a,&b)==2)
    {
        if (a==0 && b==0)
            break;
        ans=0;
        for (i=a;i<=b;i++)
        {
            c=sqrt(i);
            if((c*c)==i)
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
