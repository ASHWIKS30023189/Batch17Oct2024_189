/*
 
   swtich(cond)
   {
   case 1:
           --
	   break;
   case 2:
           --
	   break;
   default:
           --
	   break;
    }
 */
 #include<stdio.h>
 int main()
{
	char clrcode;
	clrcode=getc(stdin);
	switch(clrcode)
	{
		case 'O':
			printf("Orange");
			break;
		 case 'B':
                        printf("Black");
                        break;

 		case 'N':
                        printf("Brown");
                        break;
                default:
			printf("\nenter the correct colour code\n");
			break;
	}
	printf("\nprogram ended\n");
	return 0;
}


