void functions();

void functions(){
    printf("Enter two numbers");
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int rem, temp;
    int sub_rem;

    printf("Greatest common divisor of %d and %d ", num1, num2);

    if(num2 > num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    rem = num1 / num2;
    sub_rem = num1 - (rem * num2);

    while(sub_rem){
        num1 = num2;
        num2 = sub_rem;

        rem = num1/num2;
        sub_rem = num1 - (rem * num2);
    }

    printf("is %d", num2);
}