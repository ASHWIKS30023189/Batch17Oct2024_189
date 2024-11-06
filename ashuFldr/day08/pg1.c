/*
Q: print series 0,3,8,15,24,35,48,63,80,99
n=10
*/

#include<stdio.h>

int main()
{
	int n,a;
	printf("\nenter n value:");
	scanf("%d",&n);
	for(a=1;a<n;a++)
	{
		printf("%d, ",(a*a)-1);
	}
	printf("%d",(a*a)-1);
	return 0;
}
