
// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
struct emp
{
    char eName[20];
    char eGender;
    char eAddress[20];
    int eId;
    float eSal;

};
typedef struct emp EMP;
int main()
{
    EMP e1,e2,e3;
    EMP e[3];
    e1.eId=101;
    e1.eSal=10000;
    strcpy(e1.eName,"ash");
     strcpy(e1.eAddress,"arsikere");
     e1.eGender='F';
     printf("\nemployee details are\n");
     printf("\n ID:%d",e1.eId);
     printf("\nName:%s",e1.eName);
      printf("\nAddress:%s",e1.eAddress);
       printf("\nGender:%d",e1.eGender);
       printf("\nsalary:%f",e1.eSal);
       printf("\n\n");
  
    
      e2.eId=102;
      e2.eSal=6000;
    strcpy(e1.eName,"ram");
     strcpy(e1.eAddress,"hassan");
     e1.eGender='M';
     printf("\nemployee details are\n");
     printf("\n ID:%d",e2.eId);
     printf("\nName:%s",e2.eName);
      printf("\nAddress:%s",e2.eAddress);
       printf("\nGender:%d",e2.eGender);
       printf("\nsalary:%f",e2.eSal);
       printf("\n\n");

      
     
      e3.eId=103;
      e3.eSal=7800;
    strcpy(e1.eName,"sitha");
     strcpy(e1.eAddress,"hassan");
     e1.eGender='F';
     printf("\nemployee details are\n");
     printf("\n ID:%d",e3.eId);
     printf("\nName:%s",e3.eName);
      printf("\nAddress:%s",e3.eAddress);
       printf("\nGender:%d",e3.eGender);
       printf("\nsalary:%f",e3.eSal);
       printf("\n\n");
 
       return 0;
}

