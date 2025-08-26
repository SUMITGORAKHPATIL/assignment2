#include <stdio.h>
int main() {
    FILE *fp;
    char str[100] = "Hello, this is a file handling example in C.";
    char buffer[100];
    fp = fopen("example.txt", "w"); 
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(fp, "%s", str); 
    fclose(fp); 
    printf("Data written to file successfully.\n");
    fp = fopen("example.txt", "r"); 
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nReading from file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer); 
    }
    fclose(fp); 
    return 0;
}

