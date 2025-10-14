// MA 6th Time of day project for c
#include <stdio.h>
#include <string.h>

int main (void){

    int hour;
    printf("What hour is it in millitary time: ");
    scanf("%d", &hour);

    if(hour >= 1 && hour <= 11){
        printf("Good morning!\n");
    }else if(hour >= 12 && hour <= 16){
        printf("Good afternoon!\n");
    }else{
        printf("Good evening!\n");
    }

    return 0;
}