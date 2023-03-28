#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    int a,b,t,i;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
    scanf("%d%d",&a,&b);
    if(a>b)
        printf(">\n");
    else if(a<b)
        printf("<\n");
    else if(a==b)
        printf("=\n");
    }

    return 0;
}
