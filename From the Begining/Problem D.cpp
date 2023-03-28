#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    long long int a,b,s=0;
    int i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s+=i;
    }
    printf("%lld",s);
    return 0;
}
