#include<stdio.h>
 int main()
 {
 int t,i;
 float h,l,w;
 while(scanf("%d",&t)!=EOF)
 {
 for(i=1;i<=t;i++)
 {
 scanf("%f%f%f",&l,&w,&h);
 if (l<=20 && w<=20 && h<=20)
 printf("Case %d: good\n",i);
 else
 printf("Case %d: bad\n",i);
 }
 }

 return 0;
 }
