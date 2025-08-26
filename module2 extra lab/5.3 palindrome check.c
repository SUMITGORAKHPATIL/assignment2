#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindromeNumber(int num) {
    int original = num, reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return (original == reversed);
}
int isPalindromeString(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        while (i < j && !isalnum(str[i])) i++;
        while (i < j && !isalnum(str[j])) j--;
        if (tolower(str[i]) != tolower(str[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}
int main() {
    int choice;
    printf("Choose option:\n1. Check Number Palindrome\n2. Check String Palindrome\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (isPalindromeNumber(num))
            printf("%d is a palindrome number.\n", num);
        else
            printf("%d is not a palindrome number.\n", num);
    }
    else if (choice == 2) {
        char str[100];
        printf("Enter a string: ");
        scanf(" %[^\n]", str); 
        if (isPalindromeString(str))
            printf("\"%s\" is a palindrome string.\n", str);
        else
            printf("\"%s\" is not a palindrome string.\n", str);
    }
    else {
        printf("Invalid choice!\n");
    }
    return 0;
}

