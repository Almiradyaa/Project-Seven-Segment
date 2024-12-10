#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char text[MAX_LENGTH];
    char result[MAX_LENGTH];
    int i;
    
    printf("Enter the text: ");
    fgets(text, MAX_LENGTH, stdin);
    
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }
    
    for(i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            if (isupper(text[i])) {
                result[i] = tolower(text[i]);
            } else {
                result[i] = toupper(text[i]);
            }
        }
        else if (isdigit(text[i])) {
            result[i] = '0';
        }
        else {
            result[i] = '*';
        }
    }
    result[i] = '\0';
    
    printf("Transformed text: %s\n", result);
    
    return 0;
}

