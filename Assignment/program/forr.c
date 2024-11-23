#include<stdio.h>
int factorial(int);
int main()
{
	int n,sum=0,i;
	printf("Enter number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum=sum+factorial(i);
	printf("Factorial of number:%d\n",sum);
	return 0;
}
int factorial(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
		f *=i;
	return f;
}

