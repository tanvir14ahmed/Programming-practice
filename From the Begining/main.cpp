#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    int t,n,i,c=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(int j=1;j<=100;)
        {
            if (n%j==0)
                c=c+1;
            j++;

        }
        if(c<3 || c>3)
            printf("Ronaldo does not love %d\n",n);
        else printf("Ronaldo loves %d\n",n);

    }
    return 0;
}
