//MA 6th conditional notes for c
#include <stdio.h>
#include <string.h>

int main (void){

int grade;
    printf("What is your grade: ");
    scanf("%d", &grade);
                          
    if(grade >= 90){
        printf("You have an A!\n");
    }else if(grade >=80){
        printf("You have a B!\n");
    }else{
        printf("You dont have an A :(\n");
     }

return 0;
}

//What puts something inside of the “if” statement?
    // You put      