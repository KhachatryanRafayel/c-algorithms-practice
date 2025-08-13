#include <stdio.h>
#include <string.h>

struct AAH{
    char name[12], surname[15], fname[12];
};

struct assesments{
    short assets[5];
};

struct student{
    int N;
    struct AAH stud_AAh;
    char gender[7];
    struct assesments stud_asses;
    short pensions;
};

int main() {
    struct AAH student_names[5] = {
        "Aro", "Rafayelyan", "Smbati",
        "Bagrat", "Bagratyan", "Bagrati",
        "Lilya", "Smbatyan", "Smbati",
        "Ashot", "Ashotyan", "Ashoti",
        "Ananun", "Ananunyan", "Ananuni"
    };

    char students_gender[5][7] = {"Male", "Male", "Female", "Male", "Male"};

    struct assesments students_assesments[5]={
        {10,15,16,14,12},
        {12,12,2,12,12},
        {20,20,19,20,18},
        {19,4,5,19,2},
        {10,3,10,12,10}
    };

    short students_pensions[5]={2000, 1600, 5500, 2000, 1300};

    struct student politex_students[5];

    for (int i = 0; i<5; i++){
        politex_students[i].N = i+1;
        politex_students[i].stud_AAh=student_names[i];
        strcpy(politex_students[i].gender, students_gender[i]);
        politex_students[i].stud_asses = students_assesments[i];
        politex_students[i].pensions = students_pensions[i];
    }
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            if(politex_students[i].stud_asses.assets[j]<5){
                printf("Anun | %s\n", politex_students[i].stud_AAh.name);
                printf("Azganun | %s\n", politex_students[i].stud_AAh.surname);
                printf("Hayranun | %s\n", politex_students[i].stud_AAh.fname);
                printf("Ararka| G%d\n", i+1);
                printf("\n");
            }
        }
    }
    return 0;
}