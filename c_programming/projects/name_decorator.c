// MA 6th name decorator for c
#include <stdio.h>
#include <string.h>

int main(void) {

    char name[30];
    char decorated[100] = "<<< ";

    printf("Tell me your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    strcat(decorated, name);
    strcat(decorated, " >>>");

    printf("%s\n", decorated);
    return 0;
}
