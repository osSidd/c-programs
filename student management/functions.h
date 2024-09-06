void functions();
int sum_of_digits(int);

void functions(){

    int num;
    printf("Enter a 5 digit number\n");
    scanf("%d", &num);
    printf("The of digits of %d is %d", num, sum_of_digits(num));
}

int sum_of_digits(int a){
    if(!(a / 10))
        return a;
    else
        return (a % 10) + sum_of_digits(a / 10);
}