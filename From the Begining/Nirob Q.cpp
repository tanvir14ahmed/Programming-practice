#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=17;i++)
{
for(j=17-i;j>=0;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++){
printf("*");
}
printf("\n");
}
return 0;
}
