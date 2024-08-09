#include<stdio.h>

struct customer_data {
    int acc_no;
    char name[25];
    float balance;
};

struct customer_data c[4] = {
    29382324, "Ashoke", 45.23,
    29382311, "Sumit Verma", 223345.23,
    29382232, "Suresh Singh", 1232345.23,
    29382122, "Adrian Sombers", 92835.23,
};

void balance_bel_100();
void withdrawal(int, float, int);

void main(){
    // balance_bel_100();
    int acc_no, code;
    float amt;

    printf("Welcome to c bank\n Please fill the form for taking an action");

    printf("Enter Account number, amount and code 1 = Deposit, 0 = Withdrawal\n");
    scanf("%d %f %d", &acc_no, &amt, &code);

    if(code < 0 || code > 1){
        printf("Please enter correct code\n");
    }
    else
        withdrawal(acc_no, amt, code);
}

void balance_bel_100(){
    struct customer_data *p;

    printf("Account no \tName \t\t\tBalance\n\n");

    for(int i = 0; i<=3; i++){
        p = c + i;
        if(!(p->balance >= 100))
            printf("%-15d %-23s %.2f\n", p->acc_no, p->name, p->balance);
    }
}

void withdrawal(int acc_no, float amt, int code){
    struct customer_data *p;
    int flag = 0;

    for(int i = 0; i<=3; i++){
        p = c + i;
        if(p->acc_no == acc_no){
            flag = 1;
            break;
        }
    }

    if(!flag){
        printf("Account number does not exists\n");
        return;
    }

    if(!code){
        if(p->balance < amt){
            printf("The balance is insufficient for specific withdrawal\n");
        }
        else{
            printf("Amount remaning %f\n", (p->balance - amt));
        }
    }else{
        p->balance += amt;
        printf("Current balance is %f\n", p->balance);
    }
}