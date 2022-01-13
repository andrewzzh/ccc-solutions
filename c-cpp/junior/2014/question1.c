/*************************************
* Problem J1: Triangle Times
**************************************/
#include <stdio.h>

int main(int argc, char *argv[]){
    int a1, a2, a3;

    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);
    if((a1 + a2 + a3) != 180){
        printf("Error");
    }
    else if(a1 == a2 == a3 == 60){
        printf("Equilateral");    
    }
    else if(a1 != a2 && a2 != a3 && a1 != a3){
        printf("Scalene");   
    }
    else{
        printf("Isosceles"); 
    }
}