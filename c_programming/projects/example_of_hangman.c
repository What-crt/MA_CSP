// example of hangman.c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int rules(){
    char awnser[10]; 

    printf("Would you like to see the rules? (yes/no):");
    scanf("%9s", awnser);

    if(rules == "yes"){
        printf("Hangman is a game where you have to guess a 5 letter word, you have 7 tries to guess a letter of the word or else the man will get hanged!!!, but if you guess the whole word without making 7 mistakes you will save the man and win!!\n");
    }
    else{
        printf("Ok you already know the game! Lets get started!!!\n");
    }


}

void displayWord(const char *word, int guessed[]){
    for (int i = 0; word[i] != '\0'; i++){
        if (guessed[i])
            printf("%c ", word[i]);
        else
            printf("_");
    }
    printf("\n");
}

int checkWin(const char *word, int guessed[]){
    for (int i = 0; word[i] != '\0'; i++){
        if (!guessed[i])
            return 0;
    }
    return 1;
}

int main(void){
     const char *words[] = {'water', 'avoid', 'beach', 'brave', 'chief', 'daily', 'early', 'field', 'image', 'ocean', 'table', 'value', 'zeros'};

int numwords = sizeof(words) / sizeof(words[0]);
srand(time(NULL));
const char *word = words[rand() % numwords];
int wordLength = strlen(word);
int guessed[wordLength];
int attempts = 7;
char guess;

for (int i = 0; i < wordLength; i++){
    guessed[i] = 0;
}

printf("Welcome to Hangman!\n");
showRules();

while (attempts > 0 && !checkWin(word, guessed)){
    printf("\nWord: ");
    displayWord(word, guessed);
    printf("Attempts left: %d\n", attempts);
    printf("Enter a letter: ");
    scanf(" %c", &guess);
    guess = tolower(guess);

    int correct = 0;
    for (int i = 0; i < wordLength; i++){
        if (word[i] == guess && !guessed[i]){
            guessed[i] = 1;
            correct = 1;
        }
}

    if(correct){
        printf("Good guess!\n");
    }else {
        printf("Wrong guess!\n");
        attempts--;
    }
}

if (checkWin(word, guessed)){
    printf("Congratulations! You guessed the word: %s\n", word);
}else{
    printf("Sorry, you ran out of attempts. The word was: %s\n", word);
}

return 0;

}

int randomIndex = rand() % numwords;
const char *selectedWord = words[randomIndex];
showRules();
printf("")


