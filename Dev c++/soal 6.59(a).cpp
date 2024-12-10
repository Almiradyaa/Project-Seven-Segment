#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char text[MAX_LENGTH];
    int i;
    
    printf("Enter an Uppercase Text: ");
    fgets(text, MAX_LENGTH, stdin);
    
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }
    
    for(i = 0; text[i] != '\0'; i++) {
        text[i] = tolower(text[i]);
    }
    
    printf("Converted text: %s\n", text);
    
    return 0;
}

