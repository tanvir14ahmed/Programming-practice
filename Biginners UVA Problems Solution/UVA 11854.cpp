#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long int a,b,c;
    while(scanf("%ld%ld%ld",&a,&b,&c)!=EOF)
    {
    if(a==0 && b==0 && c==0)
        return 0;
    if((a*a)+(b*b)==(c*c) || (c*c)+(a*a)==(b*b) || (c*c)+(b*b)==(a*a))
        printf("right\n");
    else
        printf("wrong\n");
    }
    return 0;
}
