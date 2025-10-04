// MA 6th variables.c notes

  #include <stdio.h>
int main(void){
    int num = 4;
    const float pi = 3.14;
    char grade; //Will only hold 1 letter
    char name[20];
    //bool passing = true;
    printf("What is your letter grade?: ");
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
    /* C is more efficent with the space. int-4bytes, float-4bytes, double-8bytes, and char-1bytes --> ;ist of characters for a string.*/

//List three common data types used in C and their corresponding format specifiers for printf().
    //int 4 bytes --> d
    // float bytes --> f
    //Doublebytes --> if
    //Char 1 bytes --> c


//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    // You would do it like; int age = 25;

//What is the difference between printf() and scanf() functions in C?
    // printf() is for formatted data that will display to the user. Scanf() is for data that will be inputed by the user.

//How do you add comments in C?
    // You can add coment by usiing // or /* */ for multiple lines.

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    // It helps manage inpput and output functions, like printf() and scanf().

//In C, what is the significance of the main() function?
    // Main() is the beginning of the program. It is where the program starts running.

//What is the difference between %d and %f format specifiers in printf()?
    //%d is for intergers and %f is for floats.

//How do you print a newline character in C?
    // You can print a new line by using \n.

//What is the purpose of the & symbol when using scanf() to get user input?
   // The & is used to get the location of the variable.

//How do you declare a constant in C? Provide an example.
    // You can declare a constanst by typing const befor the data type. Example: const float pi = 3.14;
