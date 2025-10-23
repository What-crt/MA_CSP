#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// Function to show rules
void showRules() {
    char answer[10];

    printf("Would you like to see the rules? (yes/no): ");
    scanf("%9s", answer);

    if (strcmp(answer, "yes") == 0) {
        printf("\n--- HANGMAN RULES ---\n");
        printf("Guess the 5-letter word before the man is hanged!\n");
        printf("You have 7 incorrect guesses before you lose.\n");
        printf("Each time you guess wrong, the man gets closer to being hanged!\n\n");
    } else {
        printf("\nAlright, let's begin!\n\n");
    }
}

// Function to display the hangman art based on remaining attempts
void showHangman(int attempts) {
    switch (attempts) {
        case 7:
            printf("\n  -----\n      |\n      |\n      |\n     ---\n");
            break;
        case 6:
            printf("\n  -----\n  O   |\n      |\n      |\n     ---\n");
            break;
        case 5:
            printf("\n  -----\n  O   |\n  |   |\n      |\n     ---\n");
            break;
        case 4:
            printf("\n  -----\n  O   |\n /|   |\n      |\n     ---\n");
            break;
        case 3:
            printf("\n  -----\n  O   |\n /|\\  |\n      |\n     ---\n");
            break;
        case 2:
            printf("\n  -----\n  O   |\n /|\\  |\n /    |\n     ---\n");
            break;
        case 1:
            printf("\n  -----\n  O   |\n /|\\  |\n / \\  |\n     ---\n");
            break;
        case 0:
            printf("\n  -----\n [O]  |\n /|\\  |\n / \\  |\n     ---\n");
            break;
    }
}

// Function to display guessed progress
void displayWord(const char *word, int guessed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (guessed[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

// Function to check win condition
int checkWin(const char *word, int guessed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!guessed[i])
            return 0;
    }
    return 1;
}

int main(void) {
    // Word bank
    const char *words[] = {
        "water", "avoid", "beach", "brave", "chief",
        "daily", "early", "field", "image", "ocean",
        "table", "value", "zeros"
    };
    int numWords = sizeof(words) / sizeof(words[0]);

    // Random selection
    srand(time(NULL));
    const char *word = words[rand() % numWords];
    int wordLength = strlen(word);

    // Game setup
    int guessed[wordLength];
    int attempts = 7;
    char guess;
    for (int i = 0; i < wordLength; i++) {
        guessed[i] = 0;
    }

    printf(" Welcome to Hangman! \n");
    showRules();

    // Game loop
    while (attempts > 0 && !checkWin(word, guessed)) {
        showHangman(attempts);
        printf("\nWord: ");
        displayWord(word, guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        int correct = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correct = 1;
            }
        }

        if (correct) {
            printf(" Correct!\n");
        } else {
            printf(" Wrong guess!\n");
            attempts--;
        }
    }

    // Final result
    showHangman(attempts);
    if (checkWin(word, guessed)) {
        printf("\n You saved the man! The word was '%s'!\n", word);
    } else {
        printf("\n The man is hanged! The word was '%s'.\n", word);
    }

    return 0;
}


/*   at least one variables
int attempts = 7;
char guess;
int guessed[wordLength];
int wordLength = strlen(word);
*/

/* At least two functions
void showRules()         // prints the game instructions
void showHangman(int)    // prints the hangman picture
void displayWord(...)    // shows progress of the guessed word
int checkWin(...)        // checks if the player has guessed all letters
*/

/* At lest one conditional statment 
if (strcmp(answer, "yes") == 0) { ... }     // checks if player wants to see rules
if (correct) { ... } else { ... }            // checks if the letter was guessed correctly
if (checkWin(word, guessed)) { ... }         // checks for win/loss
*/

/* At least one loop
while (attempts > 0 && !checkWin(word, guessed)) { ... }   // main game loop
for (int i = 0; i < wordLength; i++) { ... }               // checks letters
*/