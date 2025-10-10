// MA 6th name decorator for c

#include<stdio.h>
int main(void){

    char name[30];

    printf("Tell me your name:");
    fgets(name, sizeof(name), stdin);
    printf("<-<- %s ->->", name);

    return 0;
}