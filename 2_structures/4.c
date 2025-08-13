#include <stdio.h>
#include <string.h>

struct book{
    char title[20];
    short pages;
    short price;
};

struct publiced_books{
    struct book books[20];    
};

struct library{
    int book_count;
    char author[30];
    struct publiced_books pub_books_in_lib;
};

int main() {

    short pages_limit = 200;
    short P = 60;
    
    char authors[3][30]={
        "Lev Nikolayevich Talstoy",
        "Erix Mariya Remark",
        "Mark Andre Ter-Shtegen"
    };
    
    
    
    struct book my_books[7]={
        {"Voyna I Mir", 650, 50},
        {"Vrijarunery", 340, 42},
        {"Anhayt", 140, 20},
        {"Noch v lissabone", 150, 60},
        {"Bez peremen", 240, 20},
        {"Priyut gryez", 140, 35},
        {"Anonymous", 90, 60}
    };

    short how_many_books_each_author_have[3] = {3,3,1};
    
    struct library my_lib[3];
    
    short book_count = 0;
    for(int i=0; i<3; i++){
        my_lib[i].book_count= i+1;
        strcpy(my_lib[i].author, authors[i]);
        
        
        for(int j=0; j<how_many_books_each_author_have[i]; j++){

            my_lib[i].pub_books_in_lib.books[j] = my_books[book_count];
            book_count++;
        }

        
    }

    // cuyc tal axyusaky
    // for(int i=0; i<3; i++){
    //     printf("Count | %d\n", my_lib[i].book_count);
    //     printf("Author| %s\n", my_lib[i].author);
    //     for(int j=0; j<how_many_books_each_author_have[i]; j++){
    //         printf("Pages | %d, Price | %d, Title | %s\n", my_lib[i].pub_books_in_lib.books[j].pages, my_lib[i].pub_books_in_lib.books[j].price, my_lib[i].pub_books_in_lib.books[j].title);
    //     }
    //     printf("\n\n\n");
    // }


    for(int i=0; i<3; i++){
        printf("Author | %s\n", my_lib[i].author);


        for(int j=0; j<how_many_books_each_author_have[i]; j++){
            if(my_lib[i].pub_books_in_lib.books[j].pages<200 && my_lib[i].pub_books_in_lib.books[j].price<P){
                printf("Title | %s\n", my_lib[i].pub_books_in_lib.books[j].title);
            }
        }
        
    }

    return 0;
}