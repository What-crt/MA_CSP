// MA 6th function notes
#include<stdio.h>

void birthday(char* name, int age){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s\n", name);
    printf("Happy Birthday to you\n");
    printf("Happy Birthday %s is now %d\n", name, age);

}
 int add(int num_one, int num_two){
    return num_one + num_two;

 }

float get_num(void){
    float num;
    printf("Tell me a number:");
    scanf("%f", &num);
    return num;
}

 char* get_name(void){
    char name[50];
    printf("what is your name: ");
    scanf("%s", name);
    return name;
 }
int main(void){
    birthday("Mykel", 15);
    birthday("Lucas", 40);
    birthday("Victoria", 19);
    char* user = get_name();
    birthday(user, 5);
    int addition = add(5,4);
    printf("%d\n", addition);
    printf("%d\n", add(50,37));
    float our_number = get_num();
    print("%f\n",  our_number);
    return 0;
}


//What a function is
    //are like variables that store things but instead of informations its actions.

//Why we use functions
    //Functions are used so you dont have to rewrite something over and over. to shorten code.

//How to write a function in C
/*
#include<stdio.h>

void birthday(char* name, int age){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s\n", name);
    printf("Happy Birthday to you\n");
    printf("Happy Birthday %s is now %d\n", name, age);

}


int main(void){
    birthday("Mykel", 15);
    birthday("Lucas", 40);
    birthday("Victoria", 19);

    return 0;
}
*/

//What are arguments and parameters?
    // Parameters are variables that are used in the function definition.
    // Arguments are the actual value that are passed to the function. 

//How do arguments and parameters work together?
    //parameters and arguments work together by the parameters being the variables that are used in the function definition. Arguments are the actual value that are passed to the function.

//How to use parameters and arguments in c?
    //Function definition with parameters 'a' and 'b'
/*int add(int a, int b) {
    return a + b;
}
*/

/*int main() {
    int x = 5;
    int y = 10;
    // Calling the 'add' function with arguments 'x' and 'y'
    int sum = add(x, y); 
    return 0;
}
    */

//What are return statements?
    // Return statements are used to return something from a function to a new part.

//How do return statements change how you define a function in C?
    // Return statements change how you define a function by chhanging the return type of the function. 

//What do return statements do with the information?
    // Return statements return the information to a new part of the code where the function is called.
