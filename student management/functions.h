
void functions();
void display();

void functions(){
    static i = 0;
    printf("Only Stupids use C\n");
    i++;
    if(i < 5) functions();
} 

void display(){
    printf("Fools use C too!");
    functions();
}