#include<stdio.h>
int main()
{
	int n;
	printf("Enter value for designation:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("Software Developer");
		       break;
		case 2:printf("Senior Software Developer");
		       break;   
		case 3:printf("Team Lead");
		       break;
		case 4:printf("Senior Team Lead");
		       break;
		default:printf("Incorrect Designation Code");
	}
printf("\n\n");
return 0;
}


