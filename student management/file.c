#include<stdio.h>
#include<string.h>

struct automobile {
        char serial_no[4];
        int yr_of_manu;
        char material[15];
        int qty;
    } a1[8] = {
        "AA0", 1991, "Aluminium", 52,
        "AA1", 1995, "Alumina", 55,
        "BB0", 1995, "Iron", 51,
        "DD1", 1992, "Zirconium", 25,
        "CC0", 1991, "Carbon fiber", 65,
        "BB1", 1997, "Zinc", 45,
        "DD0", 1998, "Bronze", 35,
        "CC1", 1999, "Copper", 55,
    };

void retrieve(char *, char *);

void main(){
    retrieve("AA0", "BB0");
}

void retrieve(char *p1, char *p2){
    struct automobile *p;
    p = a1;

    for(int i = 0; i<=7; i++){
        p = a1 + i;
    
        int compare1 = strcmp(p1, p->serial_no);
        int compare2 = strcmp(p2, p->serial_no);

        if(compare1 <= 0 && compare2 >= 0)    
            printf("Entered parameters %s %d %s %d\n", p->serial_no, p->yr_of_manu, p->material, p->qty);
    }
}