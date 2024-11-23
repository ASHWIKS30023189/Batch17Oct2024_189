

#include <stdio.h>
#include<string.h>

void rot(char s1[20],int n,int k)
{
	for(int i=0;i<n;i+=k)
	{
		int start=i;
		int end=(i+k-1<n)?(i+k-1):(n-1);
		while(start<end)
		{
		       char  temp = s1[start];
		       s1[start]=s1[end];
	               s1[end]=temp;
	               start++;
	               end--;
		}
	}
}
void ad(char s1[20],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",s1[i]);

	}
	printf("\n");
}
 int main()
 {
    char s1[20];
    char *ptr=NULL;
    printf("\n enter the with delimiter\n");
    scanf("%[^\n]s",s1);

    ptr=strtok(s1,",");
    while(ptr!=NULL)
    {
     printf("\nptr=%s",ptr);
     ptr=strtok(NULL,",");
    }
    printf("\nptr=%s",ptr);
     ptr=strtok(NULL,",");
    printf("\nptr=%s",ptr);
     ptr=strtok(NULL,",");
    printf("\nptr=%s",ptr);
    printf("\n\n");
    return 0;
 }
