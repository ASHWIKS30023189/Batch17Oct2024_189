/*
  print star pattern 
  n=5
  */

#include<stdio.h>

int main()
{
	int n;
	printf("\nenter the n value:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
