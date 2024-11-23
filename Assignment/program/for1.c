#include<stdio.h>

int main()
{
	int n,v;
	int i,pc=0,nc=0,z=0;
	printf("Enter n value");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		if(scanf("%d",&v)==1)
		{
			if(v>0)
				pc++;
			else if(v<0)
				nc++;
			else
				z++;
		}
		else
		{
			printf("\n Enter a integer value\n");
			while(getchar()!='\n');
		}
		i++;
	}
	printf("\nPoitive values:%d\n",pc);
	printf("\nNegative values:%d\n",nc);
	printf("\nNumber of zero:%d\n",z);
	printf("\n\n");
	return 0;
}

