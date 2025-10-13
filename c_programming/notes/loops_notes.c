// MA 6th loop and array(lists) notes for c
#include <stdio.h>
int main (void){

    int nums[] = {4,7,6,54,45,65,3,4,5,76,};
    char candy[5][20] = {"skittles", "Butterfinger", "Reese's", "Twix", "Kitkat"};

    for(int x = 0; x< 11; x++){
        printf("%d\n", nums[x]);

    }

    for(int i=0; i < 5; i++){
        printf("%s is my favorite Candy!\n", candy[i]);
    }

    for(int num = 1; num = 11; num++){
        printf("%d\n", num);
    }
    return 0; 

    int goose = 6;
    int count =0;
    while(count != goose){
        printf("Duck\n");
        count++;

    }
    printf("Goose!");
    return 0;
}

//What is a loop? 
    //A loop is code that can run contionually until told not to.

//What are the two types of loops?
//The two types of loops are for and while loops.

//What is iteration
    // iteration is repeatedly exucting code until a condition is met. So basiacly the same thing as loops.

//What are arrays? 
    //They are lists but in c. hold a set of things.

//How do you make lists in C? 
    //You put in your type of data- then how many pieces you have then make your list.
    //int nums[] = {4, 7,8, 1, 2, 7};
    
//How do you make for loops in C? 
    /* for(int i=0; i < 5; i++){
        printf("%s is my favorite Candy!\n", candy{i});
    }
    return 0;
    */

//How do you make while loops in C?
    // The only diffrences from python while loops is that the condition is in paratheses and then curly loops are put on the outside(outside).
