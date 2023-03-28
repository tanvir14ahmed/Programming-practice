#include<stdio.h>

int main()
{
int a,b,c;
while(scanf("%d%d%d",&a,&b,&c)==3)
{
if(a==b&&b==c)
{
printf("Equilateral Triangle\n");
continue;
}
else if(a==b||b==c||c==a)
{
printf("Isosceles Triangle\n");
continue;
}
else
printf("Bad Triangle\n");
}
return 0;
}
