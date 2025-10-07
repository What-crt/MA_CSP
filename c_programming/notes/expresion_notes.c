//# MA expressions notes for c
#include <stdio.h>
#include <math.h>

int main (void){
    int year = 2025;//Whole decimals
    float pi = 3.14;//decimals
    double long_pi = 3.14159265359;// decimals that are 2x as long

    printf("8/3 = %d\n", (float) 8/3); //cast is specifically stating the data type
    printf("8/3 = %1.2f\n", 8/3.0);
    printf("2 ^ 4 = %f\n", pow(2, 4));

    year += 1;
    year ++;

    return 0;
}
//What is the difference between an integer and a float in C?
    //integers are whole  numbers while floats are decimals.

//How does C handle integer division compared to float division?
    //It handles the same but intergers always come out as a whole number and floats can be decimals.

//List the arithmetic operators available in C and their functions.
    // Addition (+), Subtraction (-), Multiplication (*), Division (/), Modulus (%)

//What is the modulus operator, and how is it used?
    //(%) It calculates the reminder of an integer division.

//How do you round a float to the nearest integer in C?
    //You use <math.h> to get roundf(). rounds value to the nearest integer.

//What is type casting in C? Provide an example of explicit type casting.
    //Type casting is converting a variable from one data type to another.
    /*
        int x = 5;
        float y = (float) x; //explicitly converting int to float
    */

//How do compound assignment operators work in C? List three examples.
    // Asignment operators are ways to shorten code. So instead of writing sperate operations you can combine them.
    /*
        Addition
        int x = 5;
    x += 3;
        multiplication
        int x = 5;
    x += 3; 
        Division
        int y = 20;
    y /= 5; 

    */

//What is the purpose of the math.h library? Name three functions it provides.
    // It provides mathematical functions.
    /*
        pow() - power function
        sqrt() - square root function
        roundf() - rounds a float to the nearest integer
    */

//How do you print a float with a specific number of decimal places using printf()?
    //To print a float with a specific number of decimal places in C using printf(), you use a format specifier with precision control.

//What happens when you mix integer and float operations in C?
    //When you mix integer and float operations in C, the integer is typically turned into a float which makes it a float output.
