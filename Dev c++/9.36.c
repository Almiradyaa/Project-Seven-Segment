/* DITA AYODYA AL MIRA - D121241008 */
// NOMOR 9.36

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertToPiglatin(char *word, char *piglatin) {
    char firstLetter;
    int i;
    int length = strlen(word);
    int vowelIndex = -1;

    // Handle punctuation
    if (ispunct(word[length - 1])) {
        length--; // Ignore punctuation at the end
    }

    // Find the first vowel or handle double letters
    for (i = 0; i < length; i++) {
        if (strchr("AEIOUaeiou", word[i]) != NULL) {
            vowelIndex = i;
            break;
        }
    }

    // If the first letter is a vowel
    if (vowelIndex == 0) {
        // Append "qu" to the end
        strcpy(piglatin, word);
        strcat(piglatin, "au");
    } else if (vowelIndex > 0) {
        // Move the consonant cluster to the end and append "ay"
        strcpy(piglatin, word + vowelIndex);
        strncat(piglatin, word, vowelIndex);
        strcat(piglatin, "ay");
    } else {
        // No vowels found, just add "ay"
        strcpy(piglatin, word);
        strcat(piglatin, "ay");
    }

    // Restore punctuation if it was present
    if (ispunct(word[strlen(word) - 1])) {
        strncat(piglatin, word + length, 1);
    }
}

int main() {
    char input[100];
    char piglatin[200];
    char *token;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);

    // Tokenize the input by spaces
    token = strtok(input, " \n");
    while (token != NULL) {
        convertToPiglatin(token, piglatin);
        printf("%s ", piglatin);
        token = strtok(NULL, " \n");
    }

    printf("\n");
}

