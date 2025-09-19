#include <stdio.h>
#include <stdlib.h>

int main() {

        int *carr;

    // Allocate memory for 5 integers, all initialized to 0
    carr = (int *) calloc(5, sizeof(int));

    if (carr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print initialized values (should be all 0)
    for (int i = 0; i < 5; i++) {
        printf("%d ", carr[i]);
    }
    printf("\n");
    free(carr);  // Free memory

    int *arr;

    // Allocate memory for 3 integers
    arr = (int *) malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Initial allocation failed!\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < 3; i++) {
        arr[i] = i + 1;
    }

    // Resize memory to hold 6 integers
    arr = (int *) realloc(arr, 6 * sizeof(int));

    if (arr == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }

    // Initialize the new elements
    for (int i = 3; i < 6; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Print all values
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);  // Free memory
    return 0;
}
