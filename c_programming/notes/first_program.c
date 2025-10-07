// MA 6th first program for c
#include <stdio.h>
int main(void){
    char name[20];
    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s This is your first program for c. Have a nice day!", name);

    return 0;
}