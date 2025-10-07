// MA  6th variable pracctice for c
#include <stdio.h>
int main(void){

    char name[20];
    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);

    int lucky_number;
    printf("What is your lucky number?: ");
    scanf("%d", &lucky_number);
    

    float GPA;
    printf("What is your GPA?: ");
    scanf("%f", &GPA);
    

    char breakfast[20];
    printf("What did you have for breakfast?: ");
    scanf(" %s", breakfast);
    

    char color[20];
    printf("What is your favorite color?: ");
    scanf(" %s", color);
    

    char school[20];
    printf("What school do you go to?: ");
    scanf(" %s", school);
    

    int year;
    printf("What year is it?: ");
    scanf("%d", &year);
    

    char eye_color[20];
    printf("What is your eye color?: ");
    scanf(" %s", eye_color);
   

    int age;
    printf("How old are you?: ");
    scanf("%d", &age);
    

    char school_subject[20];
    printf("What is your favorite school subject?: ");
    scanf(" %s", school_subject);
  

    printf("Hello %s", name);
    printf("%s your lucky number is %d\n", name, lucky_number);
    printf("your GPA is %1.2f\n", name, GPA);
    printf("You had %s for breakfast\n", breakfast);
    printf("Your favorite color is %s\n", color);
    printf("You go to %s\n", school);
    printf("The year is %d\n", year);
    printf("Your eye color is %s\n", eye_color);
    printf("You are %d years old\n", age);
    printf("Your favorite school subject is %s\n", school_subject);

    return 0;
}