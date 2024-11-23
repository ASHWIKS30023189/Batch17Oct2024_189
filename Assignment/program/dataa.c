#include<stdio.h>
#include<stdlib.h>
void getDetails();
int main()
{
	char ch;
	printf("Enter y/n:");
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y')
		printf("Yes");
	else if(ch=='n'||ch=='N')
		printf("No");
	else 
		printf("Invalid character");
	printf("\n\n");
	return 0;
}
