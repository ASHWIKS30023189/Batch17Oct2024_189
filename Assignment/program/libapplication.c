#include<stdio.h>
#include"calutility.h"
int main(){
	int a=10,b=5;
	int sum=add(a,b);
	int diff=subtract(a,b);
	
	printf("Addition result:%d\n",sum);
	printf("Subtraction result:%d\n",diff);
	return 0;
 }
