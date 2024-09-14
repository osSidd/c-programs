void functions();

void functions(){
    float ram_dia = 30., plunger_dia = 4.5; // dia in cm

    float force = 500, weight; //Force in newton

    ram_dia /= 100;
    plunger_dia /= 100;

    //Since pressure is same at any point
    // printf("%f %f", ram_dia, plunger_dia);
    weight = (force * (ram_dia * ram_dia)) / (plunger_dia * plunger_dia);

    printf("Weight which can be lifted is %.2f KN", weight/1000);
}