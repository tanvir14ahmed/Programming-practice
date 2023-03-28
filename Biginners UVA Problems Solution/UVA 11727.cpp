#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    int a,b,c,survives;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && b<c)
    {
        printf("%d\n",b);
    }
    else if (b<c && c<a)
    {
        printf("%d\n",c);
    }
    else if (c<a && a<b)
    {
        printf("%d\n",a);
    }


    return main();
}

