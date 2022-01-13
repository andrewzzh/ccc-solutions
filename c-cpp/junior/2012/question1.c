/*************************************
* Problem J1: Speed fines are not fine!
* assumption: inputs are integers
**************************************/
#include <stdio.h>

int main(int argc, char *argv[]){

    int speed_limit = 0;
    int speed_recorded = 0;

    printf("Enter the speed limit? ");
    scanf("%d", &speed_limit);

    printf("Enter the recorded speed of the car? ");
    scanf("%d", &speed_recorded);

    int speed_over = speed_recorded - speed_limit;

    if (speed_over >= 1 && speed_over <=20){
        printf("You are speeding and your fine is $100\n");
    }
    else if(speed_over >= 21 && speed_over <=30){
        printf("You are speeding and your fine is $270\n");
    }
    else if(speed_over >= 31){
        printf("You are speeding and your fine is $500\n");
    }
    else{
        printf("Congratulations, you are within the speed limit!\n");
    }
}