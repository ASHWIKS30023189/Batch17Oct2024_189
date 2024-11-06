#include<stdio.h>

int main()
{
	int SLNo;
	int ID;
	int PHNO;
	float SALARY;
	char name[20];
	char ADDRESS[20];
	char DESG[20];
	char gender;

	printf("\nEnter the proper value\n");
	printf("\nEnter SLNo value:");
	scanf("%d",&SLNo);
	printf("\nEnter ID value:");
	scanf("%d",&ID);
	printf("\nEnter PHNO value:");
	scanf("%d",&PHNO);
	printf("\nEnter SALARY value:");
	scanf("%f",&SALARY);

	printf("\nEnter name:");
	scanf("%s",name);
	printf("\nGender:");
	scanf(" ");
	scanf("%c",&gender);


	printf("\nEnter address:");
	scanf("%s",ADDRESS);
	printf("\nEnter desg:");
	scanf("%s",DESG);

	printf("\nSLNo | ID | PHNO | SALARY | name | gender |ADDRESS |DESG");
        printf("\n%03d |%d |%d |%f |%s |%c |%s |%s",SLNo,ID,PHNO,SALARY,name,gender,ADDRESS,DESG); 	
        printf("\n\n");

	return 0;
}
