/*************************************
* Problem J1: Tournament Selection
**************************************/
#include <stdio.h>

int main(int argc, char *argv[]){
    int win_count = 0;
    int i;
    for (i = 0; i<6; i++){
        char input = 0;
        scanf(" %c", &input);
        if(input == 'W'){
            win_count++;
        }
    }
    if(win_count >= 5){
        printf("1");
    }
    else if(win_count>=3 || win_count <=4){
        printf("2");
    }else if(win_count>=1 || win_count<=2){
        printf("3");
    }
    else{
        printf("-1");
    }
}