#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_id;        
    char name[50];    
    char gender;     
    int phone_number; 
    int emp_number;    
};


void display(struct Employee emp) {
    printf(" %d |%s|%c|%d|%d\n", emp.emp_id,emp.name,emp.gender,emp.phone_number,emp.emp_number);
   
}

int main() {
   
    struct Employee employees[5] = {
        {101, "AMIT KUMAR1", 'M', 8888, 100001},
        {102, "AMIT KUMAR2", 'M', 8881, 100002},
        {103, "AMIT KUMAR3", 'M', 8882, 100003},
        {104, "AMIT KUMAR4", 'M', 8883, 100004},
        {105, "AMIT KUMAR5", 'M', 8884, 100005}
    };

    
    FILE *file = fopen("emp.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(employees,sizeof(struct Employee),5,file);

    
    fclose(file);

    
    FILE *file_read = fopen("emp.dat", "rb");
    if (file_read == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    struct Employee read_employees[5];
    fread(read_employees,sizeof(struct Employee),5,file_read);

    

   printf("Empolyee records:\n");
   for(int i=0;i<5;i++)
   {
	   display(read_employees[i]);
   }
  

    
    fclose(file_read);

    return 0;
}


