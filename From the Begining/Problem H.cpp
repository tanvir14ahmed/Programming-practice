#include<iostream>
using namespace std;
#include<cstdio>


int main()
{
int i,j,k,z,n,t,iccha[199],ans;
while(scanf("%d",&z)==1)
{
for(k=1;k<=z;k++)
    {
    ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&iccha[i]);

    for(i=1;i<n;i++)
        for(j=n-1;j>=i;j--)
            if(iccha[j-1]>iccha[j])
                {
                ans=ans+1;
                t=iccha[j-1];
                iccha[j-1]=iccha[j];
                iccha[j]=t;
                }
    printf("Optimal train swapping takes %d swaps.\n",ans);
    }
}
return 0;
}
