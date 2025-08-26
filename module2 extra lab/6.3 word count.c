#include <stdio.h>
int countWords(char str[]) {
    int i = 0, count = 0, inWord = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (inWord == 0) {  
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;  
        }
        i++;
    }
    return count;
}
void findLongestWord(char str[], char longest[]) {
    int i = 0, start = 0, len = 0;
    int maxLen = 0, maxStart = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            if (str[i] == '\0')
                break;
            len = 0;
            start = i + 1;
        } else {
            len++;
        }
        i++;
    }
    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';
}
int main() {
    char str[200], longest[50];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);   
    int words = countWords(str);
    findLongestWord(str, longest);
    printf("Number of words = %d\n", words);
    printf("Longest word = %s\n", longest);
    return 0;
}

