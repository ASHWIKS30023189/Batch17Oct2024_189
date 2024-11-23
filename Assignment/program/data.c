#include<stdio.h>
void getDetails();
int main()
{
	getDetails();
	return 0;
}
void getDetails()
{
	char username[125];
	int age;
	float salary;
	short code;
	char gender;
	
	printf("\n Enter username:");
	scanf("%s,",username);
	printf("\n Enter age:");
        scanf("%d,",&age);

	printf("\n Enter salary:");
        scanf("%f,",&salary);

	printf("\n Enter designation code:");
        scanf("%hd,",&code);
	printf("\n Enter gender:");
	scanf(" ");
	scanf("%c,",&gender);
	printf("\n\n");
	printf("\nUsername:%s",username);
        printf("\nAge:%d",age);
        printf("\nSalary:%.2f",salary);
        printf("\nDes Code:%d",code);
        printf("\nGender:%c",gender);
        printf("\n\n");
}





