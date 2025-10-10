// MA 6th name decorator for c

#include<stdio.h>
#include<string.h>
int main(void){

    char name[30];

    printf("Tell me your name:");
    scanf(name, sizeof(name), stdin);
    printf("<-<- %s ->->", name);

    return 0;
}