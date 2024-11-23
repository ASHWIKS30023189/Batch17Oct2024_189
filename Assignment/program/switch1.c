#include <stdio.h>
 
int main()
{
 int test1, test2, test3, project;
 printf("Enter Test1 Score:");
 scanf("%d", &test1);
 printf("Enter Test2 Score: ");
 scanf("%d", &test2);
 printf("Enter Test3 Score: ");
 scanf("%d", &test3); 
 printf("Enter Project Score: ");
 scanf("%d", &project);
  
 if (test1>= 75 && test2 >= 75 && test3 >= 70 && project >= 75){
	 printf("Eligibile for Development\n");
 
 switch ((test1>=75) + (test2>=75) + (test3 >=70) + (project >= 75)) {
		
  case 4:printf("All conditions met\n");
         break; 
  case 3:printf("Three conditions met\n");
         break;
  case 2:printf("Two conditions met\n");
	 break;
  case 1:printf("One condition met\n");
         break;
 default:
    printf("None of the conditions met\n");
    break;
	 }
 }
 else{
  printf("Eligibility Check Failed.\n");
 }
 
return 0;
}

