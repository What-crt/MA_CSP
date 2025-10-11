// MA 6th name decorator for c

#include <stdio.h>
#include <string.h>

int main(void) {

    char name[30];
    char decorated[100] = "<<< ";

    printf("Tell me your name: ");
    scanf("%29s", name);  // reads one word, up to 29 characters

    strcat(decorated, name);
    strcat(decorated, " >>>");

    printf("%s\n", decorated);
    return 0;
}
