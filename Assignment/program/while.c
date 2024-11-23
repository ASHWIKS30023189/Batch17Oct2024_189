#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char s[81];
	int i;
	while(1)
	{
		printf("\n Enter string");
		fgets(s,sizeof(s),stdin);
		s[strlen(s)-1]='\0';
		if(strcmp(s,"END")==0)
			break;
		for(i=0;s[i]!='\0';i++)
			s[i]=toupper(s[i]);
		printf("\nUppercase:%s",s);
	}
	printf("END");
	printf("\n\n");
	return 0;
}

