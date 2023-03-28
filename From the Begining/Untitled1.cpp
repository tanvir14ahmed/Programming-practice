#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    double A,P,r,H,a,b,c;
    int t;

    scanf("%d",&t);

    for (int i=1;i<=t;i++)
    {
    scanf("%lf%lf%lf",&a,&b,&c);

    H=(a*b)/2;
    P=a+b+c;

    r=(2*H)/P;

    printf("Case #%d: %0.2lf\n",i,r);

    }

    return 0;



}
