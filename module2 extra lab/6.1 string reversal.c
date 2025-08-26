#include <stdio.h>
int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
void reverseString(char str[]) {
    int i, j;
    char temp;
    int len = stringLength(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);   
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

