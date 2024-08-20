void functions();

void functions(){
    int num, sum = 0;
    printf("Enter a five digit number ");
    scanf("%d", &num);
    while(num){
        sum += (num % 10);
        num /= 10;
    }

    printf("sum of digits  = %d", sum);
}