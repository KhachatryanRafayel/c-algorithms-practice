#include <stdio.h>
#include <string.h>

struct family_members{
    short wife_man,boy,girl;  
};

struct employee{
  int N;
  char AAH[20];
  char gender[6];
  struct family_members members;
  int salary;
};

int main() {
    short P = 100;
    
    char empolyees_names[5][28] = {
        "Armen Srbazan Ashoti",
        "Lilit Artak Tigrani",
        "Ashotik Avetisyan Avetisi",
        "Meri Bxdo Bxdoi"
    };
    char emp_genders[4][6]={
        "male", "female", "male", "female"  
    };
    struct family_members employee_fam_members[4]={
      {1,2,1},
      {1,0,1},
      {2,3,2},
      {1,1,1}
    };
    short employee_salaries[4]={
      1000, 600, 150, 250  
    };
    
    struct employee employees[4];
    
    for(int i = 0; i<4; i++){
        employees[i].N = i+1;
        strcpy(employees[i].AAH, empolyees_names[i]);
        strcpy(employees[i].gender, emp_genders[i]);
        employees[i].members = employee_fam_members[i];
        employees[i].salary = employee_salaries[i];
    }
    
    for(int i = 0; i<4; i++){
        short kids = employees[i].members.boy+employees[i].members.girl;
        short all_membs = kids + employees[i].members.wife_man;
        short salar = employees[i].salary;
        if(kids>=1 && salar/all_membs<P){
            printf("%s\n", employees[i].AAH);
        }
    }
    
    return 0;
}