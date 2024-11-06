#include<stdio.h>
int main()
{
	int i,j;
	char buff[1024];
	scanf("%d %d",&i,&j);
	printf("\ni=%d\tj=%d",i,j);
	sprintf(buff,"\ni=%d\tj=%d",i,j);
	printf("\bBuffer value:%s",buff);		
	printf("\n\n");
	return 0;
}
