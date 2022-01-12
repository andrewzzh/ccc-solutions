/*************************************
* Problem J1: Which Alien?
**************************************/
#include <stdio.h>

int main(int argc, char *argv[]){

    int antenna = 0;
    int eyes = 0;

    printf("How many antennas? ");
    scanf("%d", &antenna);

    printf("How many eyes? ");
    scanf("%d", &eyes);

    if(antenna >= 3 && eyes <= 4)
        printf("TroyMartian\n");
    if(antenna <= 6 && eyes >= 2)
        printf("VladSaturnian\n");
    if(antenna <= 2 && eyes <= 3)
        printf("GraemeMercurian\n");
}