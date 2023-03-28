#include<iostream>
using namespace std;
#include<stdio.h>

int main()
{
	long int n;
	while (scanf("%ld",&n)==1)
    {
    long int a[n];
	for(int i=0; i<n; i++)
		scanf("%ld", &a[i]);
	long int lover = a[0];
	for(int i=1; i<n; i++)
	{
		lover = lover^a[i];
	}
	printf("%ld\n", lover);

    }
	return 0;
}
