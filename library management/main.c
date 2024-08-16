#include<stdio.h>
#include<stdbool.h>

#include"./headers/library.h"
#include "./functions/add_book.c"

int menu();

void main(){
    printf("C Library\n");
    
    int option = 1;
    int operation = 0;

    while(option != 7){

        option = menu();

        if(option < 1 || option > 7)
            printf("Please select a valid option between 1 and 7\n");
        else{
            switch(option){
                case 1:
                    operation = add_book();
                    break;

            }
        }
        
    }

}

int menu(){
    printf("Please select an option from the menu below\n1 Add book info\n2 Display book info\n3 List books of given author\n4 List the title of a specified book\n5 List the count of books in library\n6 List the books in the order of accession number\n7 Exit\n");

    int option;
    scanf("%d", &option);

    return option;
}