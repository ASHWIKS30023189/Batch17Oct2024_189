/*
 while(cond1)
 {
 sts
 }
 */

#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 0
#define FAILURE -1
#define True 1
#define Flase 0
int displayMenu();

 int main()

{
	int ch;
	int flag=0;
	while(1){
	ch=displayMenu();
	switch(ch)
	{
		case 1:
			printf("\n Addition fun executed\n");
			break;
		 case 2:
                        printf("\n Sub fun executed\n");
                        break;

		 case 3:
                        printf("\n Mul fun executed\n");
                        break;

		 case 4:
                        printf("\n Div fun executed\n");
                        break;

		 case 5:
                        printf("\n Exiting fun executed\n");
			flag=1;
                        break;

                 defalut:
			printf("\n Enter the correct Choice\n");
	}
     }
   printf("\n program ended\n");
  return SUCCESS;   

}

 int displayMenu()
 {
	 int choice;
	 printf("\nPress,");
	 printf("\n1. Addition");
         printf("\n2. Sub");

          printf("\n3. Mul");

         printf("\n4. Div");

         printf("\n5. Exit");
	 printf("\nChoice:");
         scanf("%d",&choice);
         return choice;
 }
		

