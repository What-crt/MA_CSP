//MA 6th old enough project for c

#include<stdio.h>
#include<strings.h>
int main(void){

int age;
    printf("What is your age?: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are old enough to vote!\n");
    }
    else if (age >= 16){
        printf("You are old enough to drive!\n");
    }
    else if (age == 15){
        printf("You are old enough to get a learners permit!\n");
    }
    else if (age >= 4){
        printf("You are old enough to go to school!\n");
    }
    else{
        printf("You are not old enough to go to school!\n");
    }
return 0;
}

