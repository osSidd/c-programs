void functions();
void reverse(char *, int, int);

void functions(){
    printf("Enter a string\n");
    
    char str[25];
    
    gets(str);
    printf("%s", str);

    int len = strlen(str);

    reverse(str, len, 0);
    
    printf("\nreverse is %s", str);
}

void reverse(char *p, int len, int i){
    if(i == (len / 2)) return;

    else{
        char temp;
        temp = *(p + i);
        *(p + i) = *(p + (len - (i + 1)));
        *(p + (len - (i + 1))) = temp;
        reverse(p, len, i + 1);
    }
}   