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
    // You put conditions inside of the "if" statement.

//How are conditions written in C?
    //Conditions are written in c using things like:
/*
<
>
<=
>=
==
!=
*/

//How do we write elif conditions in C?
    // You write elif conditions in c by typing else if and then the conditional statement.

//When do else conditions run?
    //You write else conditions by typing else and then the code you want to run if all other conditions are false.

//What are the 3 logical operators in C?
    //The 3 logical operators in c are && (and), || (or), and ! (not).

