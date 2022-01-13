/*************************************
* Problem J1: Special Day
**************************************/
#include <stdio.h>

int main(int argc, char *argv[]){
    int month, day;
    scanf("%d", &month);
    scanf("%d", &day);

    if(month < 2 || (month == 2 && day < 18)){
        printf("Before\n");
    }
    else if(month > 2 || (month == 2 && day > 18)){
        printf("After\n");
    }
    else{
        printf("Special\n");
    }
}