// example of hangman.c
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>   
#include <time.h>     
#include <ctype.h>   

// Function to show game rules
void showRules() {
    char answer[10];

    printf("Would you like to see the rules? (yes/no): ");
    scanf("%9s", answer);

    if (strcmp(answer, "yes") == 0) {
        printf("\n--- HANGMAN RULES ---\n");
        printf("You must guess a 5-letter word.\n");
        printf("You have 7 tries to guess letters in the word.\n");
        printf("Each wrong guess costs you one try.\n");
        printf("If you guess all letters before you run out of tries, you win!\n\n");
    } else {
        printf("\nOk, let's begin!\n\n");
    }
}

// Function to display the current progress of the guessed word
void displayWord(const char *word, int guessed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (guessed[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

// Function to check if all letters have been guessed
int checkWin(const char *word, int guessed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!guessed[i])
            return 0; // not yet won
    }
    return 1; // all guessed
}

int main(void) {
    // List of words to choose from
    const char *words[] = {
        "water", "avoid", "beach", "brave", "chief",
        "daily", "early", "field", "image", "ocean",
        "table", "value", "zeros"
    };
    int numWords = sizeof(words) / sizeof(words[0]);

    // Randomly select a word
    srand(time(NULL));
    const char *word = words[rand() % numWords];
    int wordLength = strlen(word);

    // Game setup
    int guessed[wordLength];
    int attempts = 7;
    char guess;

    // Initialize guessed array to 0
    for (int i = 0; i < wordLength; i++) {
        guessed[i] = 0;
    }

    printf("Welcome to Hangman!\n");
    showRules();

    // Game loop
    while (attempts > 0 && !checkWin(word, guessed)) {
        printf("\nWord: ");
        displayWord(word, guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        int correct = 0;

        // Check if the guessed letter is in the word
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correct = 1;
            }
        }

        // Conditional statement for correct/wrong guesses
        if (correct) {
            printf(" Good guess!\n");
        } else {
            printf(" Wrong guess!\n");
            attempts--;
        }
    }

    // End of game
    if (checkWin(word, guessed)) {
        printf("\n Congratulations! You guessed the word '%s'!\n", word);
    } else {
        printf("\n Out of tries! The word was '%s'.\n", word);
    }

    return 0;
}
