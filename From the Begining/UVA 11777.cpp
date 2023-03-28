#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    int t1,t2,fin,att,ct1,ct2,ct3,ctav,tot,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d%d%d%d%d%d%d",&t1,&t2,&fin,&att,&ct1,&ct2,&ct3);

    if(ct1<=ct2 && ct1<=ct3)
    {
        ctav=((ct2+ct3)/2);
    }
    else if(ct2<=ct1 && ct2<=ct3)
    {
        ctav=((ct1+ct3)/2);
    }
    else if(ct3<=ct1 && ct3<=ct2)
    {
        ctav=((ct1+ct2)/2);
    }


    tot=t1+t2+fin+att+ctav;

    if (tot>=90)
    {
        printf("Case %d: A\n",i);
    }
    else if(tot>=80 && tot<90)
    {
        printf("Case %d: B\n",i);
    }
    else if(tot>=70 && tot<80)
    {
        printf("Case %d: C\n",i);
    }
    else if(tot>=60 && tot<70)
    {
        printf("Case %d: D\n",i);
    }
    else
    {
        printf("Case %d: F\n",i);
    }
    }

    return 0;

}
