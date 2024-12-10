// Dita Ayodya Al Mira - D121241008 - Program Palindrom

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100]; 
    int isPalindrome = 1; 
    int length;

    printf("Masukkan sebuah kata: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;
    
	//menghitung panjang kata
    length = strlen(word); 

    for (int i = 0; i < length / 2; i++) {
        if (tolower(word[i]) != tolower(word[length - i - 1])) {
            isPalindrome = 0; // Jika tidak sama, set flag menjadi 0
            break; 
        }
    }

    if (isPalindrome) {
        printf("\"%s\" adalah palindrom.\n", word);
    } else {
        printf("\"%s\" bukan palindrom.\n", word);
    }
    return 0;
}
