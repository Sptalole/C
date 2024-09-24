#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void addSpaces(char *str, char *result) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        result[j++] = str[i];   // Copy the current character
        result[j++] = ' ';      // Add a space after it
        result[j++] = ' '; 
    }
    result[j - 1] = '\0'; // Null-terminate the new string (remove the last space)
}

int main() {
    char *names[] = {"deepak", "sagar", "frind1", "buddy2"};
    int numNames = sizeof(names) / sizeof(names[0]);
    char result[100]; // Adjust size as needed

    for (int i = 0; i < numNames; i++) {
        addSpaces(names[i], result);
        printf("%s\n", result);
    }

    return 0;
}
