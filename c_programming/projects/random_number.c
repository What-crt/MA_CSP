// MA 6th random number

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    char letters[] = {'a', 'b', 'c', 'd', 'e'};
    srand(time(NULL));
    for(int i=0; i< 10; i++){
    int num = rand() %5;
    int num = rand() %20 +1;
    printf("%d\n", num);
    printf("%c\n", letters[num]);
    }
    return 0;
}