#include <stdio.h>

// Check whether input character is vowel or consonant using switch case

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // space handles leftover newline

    // Check if alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        switch(ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("Vowel\n");
                break;

            default:
                printf("Consonant\n");
        }

    } 
    else {
        printf("Not an alphabet\n");
    }

    return 0;
}