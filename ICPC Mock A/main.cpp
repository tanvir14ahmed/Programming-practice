#include<iostream>
using namespace std
#include<cstdio>

int main()
{
    int a,b,c;
    while (scanf("%d%d%d"&a,&b,&c)!=EOF)
    {
        if (a==b==c)
            printf("Equilateral Triangle\n");
        else if (a==b||b==c||c==a)
            printf("Isosceles Triangle\n");
        else printf("Bad Triangle\n");
    }
    return 0;
}
