// MA 6th string notes for c

#include <stdio.h>
#include <string.h>

int main(void){


    char name[100]= "Jack";
    char last_name[25];

    printf("Please tell me your name:");
    scanf("%s", last_name);

    printf("[%s]", name);

    strcat(name, " ");
    printf("[%s]", name);

}

//What is the difference between a string and a character?
    //The difference is that a character is a data type that holds a single character, while a string can hold multiple characters.

//What types of quotation marks do we need for a string?
    // ("") are for strings, and ('') are for characters.

//What library do we need to include to access the string functions in C?
    // We need to include <string.h> to access string functions in c.

//List functions the library allows us to use.
    //this allows many functions like strlen(), strcpy(), strcat(), strcmp(), strchr(), strrchr(), and more.

//How do we concatenate strings in C?
    //We concatenate strings in c using the strcat() function.

//How do we get individual characters from a string in C?
    //You get individual characters from a string in c by using things like str[0] to get the first character, str[1] to get the second character, and so on.
