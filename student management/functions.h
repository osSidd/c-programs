void functions();
int gcd(int, int);

void functions(){
    printf("Enter two numbers");
    int num1, num2, temp;

    scanf("%d %d", &num1, &num2);

    printf("Greatest common divisor of %d and %d ", num1, num2);

    if(num2 > num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("is %d", gcd(num1, num2));
}

int gcd(int num1, int num2){
    int rem, temp;
    int sub_rem;

    rem = num1 / num2;
    sub_rem = num1 - (rem * num2);

    if(!sub_rem)
        return num2;
    
    return gcd(num2, sub_rem);
}