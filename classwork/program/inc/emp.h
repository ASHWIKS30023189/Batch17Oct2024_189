

#ifndef EMP_H

#define EMP_H
#define BUFF 1024
typedef struct  Employee {
    int id;
    int phoneNum;
    char name[BUFF];
    char gender;
    float salary;
}EMP;

int getDetails(EMP,char);
int printDetails(EMP *);

#endif


