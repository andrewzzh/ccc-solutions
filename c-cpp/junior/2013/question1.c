/*************************************
* Problem J1: Next in line
* assumption: inputs are integers
**************************************/
#include <stdio.h>

int main(int argc, char *argv[]){
    int youngest = 0;
    int middle = 0;

    scanf("%d", &youngest);
    scanf("%d", &middle);

    int diff = middle - youngest;

    int oldest = middle + diff;

    printf("%d\n", oldest);
}