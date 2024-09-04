
void functions();
int display(int);

void functions(){
    static i = 0;
    int a;
    printf("Only Stupids use C\n");
    // a = display(display(44));
} 

int display(int cc){
    printf("Fools use C too! %d", cc);
    return 3;     
}