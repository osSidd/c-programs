
void functions();

void functions(){
    int num, rev_num = 0, i = 10 * 1000;

    printf("enter a five digit number ");
    scanf("%d", &num);

    int original = num;

    while(num){
        rev_num += (num % 10) * i;
        i /= 10;
        num /= 10;
    }

    printf("The original number = %d and reversed number = %d\n", original, rev_num);

    (original == rev_num) ? printf("Both are equal") : printf("Not equal");
}