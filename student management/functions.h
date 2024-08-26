
void functions();


void functions(){
    int matches = 21;

    while(matches > 0){
        int human;
        int computer =4;

        printf("computer picks %d", computer);
        matches -= computer;

        printf("pick a stick\n");
        scanf("%d", &human);

        matches -= human;

        printf("sticks remaining %d", matches);
    }
} 