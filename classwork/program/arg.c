// Online C compiler to run C program online
/*
Command line arguments
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFF 1024


int main(int argc,char *argv[])
{
    file *fp;
    int i;
    char *token=NULL;

    char fileName[BUFF}; 
    char lines[BUFF];

    
    if(argc<2)
	   {
		   fprintf(stderr,"\ndest/source is missing");
		  // fprintf(stderr,"\n./app src dest\n\n");
		  fprintf(stderr,"\n./app configfile.csv\n\n");
		   return 1;
	   }
    fp=fopen(fileName,"r");
    if(fp==NULL)
    {
	    perror("fopen: ");
	    return1;
    }
    memset(lines,'\0',BUFF);

    while(fgets(lines,BUFF,fp)!=NULL)
    {
	    lines[strlen(lines)-1]='\0';
	    puts(lines);
	    memset(lines,'\0',BUFF);
    }
    fclose(fp);


    //printf("\n No of args =%d",argc);
    
   // for(i=0;i<argc;i++)
   // printf("\nargc[%d]=%s",i,argv[i]);
    printf("\n\n");
    return 0;
}

