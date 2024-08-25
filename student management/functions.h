
void functions();

void functions(){
    int num1, num2, sum = 1;

    printf("Enter two numbers ");
    scanf("%d %d", &num1, &num2);

    switch(1)
    {
        case ( 2 < 3 && 2 > 5):
            printf("Hi");
        case 2 || 3:
            printf("Bye");

    }

    while(num2 >=1 ){
        sum *= num1;
        num2--;
    }

    printf("%d raised to the power of %d is %d", num1, num2, sum);
}