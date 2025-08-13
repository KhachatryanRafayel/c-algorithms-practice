#include <stdio.h>
#include <string.h>

struct data {
    int day, month, year;
};

struct adress {
    char city_village[20];
    char street[20];
    short house;
    short appartment;
};

struct phone {
    char home_num[15], mobile_num[15];
};

struct human_info {
    int N;
    char AAH[32];
    struct data birth;
    struct adress living_adress;
    struct phone human_phone;
};

int main() {
    char residents_names[5][28] = {
        "Bagrat Srbazan Ashoti",
        "Sisakyan Artak Tigrani",
        "Varazdat Avetisyan Avetisi",
        "Bxdoyan Bxdo Bxdoi",
        "Axabekyan Rafayel Vardani"
    };

    struct data residents_birth_data[5] = {
        {1, 4, 2002},
        {2, 5, 1999},
        {6, 9, 1967},
        {25, 2, 1980},
        {30, 8, 1981}
    };

    struct adress residents_adress[5] = {
        {"Erevan", "Hunan Avetisyan", 20, 1},
        {"Vanadzor", "Axabek Bagratyan", 74, 21},
        {"Vanadzor", "Babken Sargsyan", 22, 10},
        {"Gyumri", "Anii Poxoc", 17, 8},
        {"Erevan", "Abovyan", 15, 5}
    };

    struct phone residents_phone_nums[5] = {
        {"010231123", "093585858"},
        {"010234623", "095585858"},
        {"010987893", "077595287"},
        {"010231123", "093585858"},
        {"010234623", "095585858"}
    };

    struct human_info residents[5];
    for (int i = 0; i < 5; i++) {
        residents[i].N = i + 1;
        strcpy(residents[i].AAH, residents_names[i]);
        residents[i].birth = residents_birth_data[i];
        residents[i].living_adress = residents_adress[i];
        residents[i].human_phone = residents_phone_nums[i];
    }

    // sax axyusaky cuyc tal
    // for (int i = 0; i < 5; i++) {
    //     printf("Resident %d:\n", residents[i].N);
    //     printf("Name: %s\n", residents[i].AAH);
    //     printf("Birth: %d %d %d\n", residents[i].birth.day, residents[i].birth.month, residents[i].birth.year);
    //     printf("Address: %s, %s, %d, %d\n", residents[i].living_adress.city_village, residents[i].living_adress.street, residents[i].living_adress.house, residents[i].living_adress.appartment);
    //     printf("Phone: %s, %s\n", residents[i].human_phone.home_num, residents[i].human_phone.mobile_num);
    //     printf("\n");
    // }
    for (int i = 0; i < 5; i++){
        if (strcmp(residents[i].living_adress.city_village, "Vanadzor") == 0 &&
            (residents[i].birth.year<2005 || (residents[i].birth.year==2005 && residents[i].birth.month<3)) &&
            residents[i].human_phone.mobile_num[0]=='0' &&
            residents[i].human_phone.mobile_num[1]=='9' &&
            residents[i].human_phone.mobile_num[2]=='5'){
            
            printf("%s", residents[i].AAH);
            
        }
        
        
    }
    return 0;
}