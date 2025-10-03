// MA 6th variables.c notes

  #include <stdio.h>
int main(void){
    int num = 4;
    const float pi = 3.14;
    char grade; //Will only hold 1 letter
    char name[20];
    //bool passing = true;
    printf("What is your letter grade: ");
    scanf("%c", &grade);
    // first info your getting is what is the info and the second one is what to do with it.
    printf("Tell me a number: ");
    scanf("%c", &num);
    // the next comment lets you use a space;
    printf("tell me your name:");
    fgets(name, sizeof(name), stdin);
    printf("%d\n", num);
    printf("%s has a %c grade in the class!\n", name, grade);
    return 0;
}

//What is the main difference between declaring variables in Python and C?
    //In c you have to set what type of data the variable will hold. C is static --> data types. and python is dynamic. 
  
//In C, what is the purpose of specifying a data type when declaring a variable?
    /* C is more efficent with the space. int-4bytes, float-4bytes, double-8bytes, and char-1bytes --> ;ist of characters for a string.
    int 4 bytes --> d
    float bytes --> f
    Doublebytes --> if
    Char 1 bytes -->
    */

//List three common data types used in C and their corresponding format specifiers for printf().

//How do you declare and initialize an integer variable named "age" with the value 25 in C?

//What is the difference between printf() and scanf() functions in C?

//How do you add comments in C?
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?

//In C, what is the significance of the main() function?

//What is the difference between %d and %f format specifiers in printf()?

//How do you print a newline character in C?

//What is the purpose of the & symbol when using scanf() to get user input?

//How do you declare a constant in C? Provide an example.

