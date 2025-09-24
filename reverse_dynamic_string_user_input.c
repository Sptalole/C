#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Taking the input string from user and allocate the memory for that string and reverse it
// Function to reverse a string in-place
void rev(char *s) {
    int i, j;
    char temp;
    int len = strlen(s);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char temp[100];  // Temporary buffer to read input
    char *str;
    char *s;

    printf("Enter the name:\n");
    scanf("%99s", temp);  // safer, limits input to 99 chars

    // Allocate memory dynamically for str and copy input
    str = (char *)malloc(strlen(temp) + 1);
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(str, temp);

    // Allocate memory for the reversed string
    s = (char *)malloc(strlen(str) + 1);
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        free(str);
        return 1;
    }
    strcpy(s, str);  // Copy original string to s

    rev(s);  // Reverse the string

    printf("\nReversed string: %s\n", s);

    // Free allocated memory
    free(str);
    free(s);

    return 0;
}
