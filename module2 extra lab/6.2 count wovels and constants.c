#include <stdio.h>
#include <ctype.h>  
void countCharacters(char str[], int *vowels, int *consonants, int *digits, int *specials) {
    int i = 0;
    *vowels = *consonants = *digits = *specials = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        if (isalpha(ch)) { 
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
        else if (isdigit(ch)) {
            (*digits)++;
        }
        else if (ch != ' ') {
            (*specials)++;
        }
        i++;
    }
}

int main() {
    char str[200];
    int vowels, consonants, digits, specials;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  
    countCharacters(str, &vowels, &consonants, &digits, &specials);
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);
    return 0;
}

