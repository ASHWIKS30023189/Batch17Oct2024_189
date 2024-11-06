/*
 print series 1,2,4,8,16,32,64
 n=6
 */

#include<stdio.h>
 int main()
{
  int n,a=1;
   printf("\nenter the value of n:");
   scanf("%d",&n);

   for(int i=0;i<n;i++)
   {
	   printf("%d",a);
	  
	   a*=2;
   }
   printf("\n\n");
   return 0;
}
