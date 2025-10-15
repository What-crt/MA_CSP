// MA 6th fizz buzz project for c
#include <stdio.h>
int main (void){
    for(int x = 1; x <= 50; x++){
        if(x % 3 == 0 && x % 5 == 0){
            printf("FizzBuzz\n");
        }
        else if(x % 3 == 0){
            printf("Fizz\n");
        }
        else if(x % 5 == 0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n", x);
        }
        }
        
    


    return 0;
}


    //Write a program that counts from 1 to 50 and replaces numbers based on the following rules:

//Numbers divisible by 3 are replaced with "Fizz"
//Numbers divisible by 5 are replaced with "Buzz"
//Numbers divisible by both 3 and 5 are replaced with "FizzBuzz"
//All other numbers should be printed as is