#include<stdio.h>


int main()
{
    long int t,n,i,c=0;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        c=0;
        for(long int j=1;j<=1000000;j++)
        {
            if (n%j==0)
                c=c+1;
        }

        if(c<3 || c>3)
            printf("Ronaldo does not love %d\n",n);
        else printf("Ronaldo loves %d\n",n);

    }
    return 0;
}
