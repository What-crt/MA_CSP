// MA 6th family loop for c
#include <stdio.h>
int main (void){

    char family[6][20] = {"Dad", "Mom", "Tyler", "Kenyan", "Mykel", "Jack"};
    for(int i=0; i < 6; i++){
        printf("Hello, %s!\n", family[i]);
    }
    

    return 0;
}
