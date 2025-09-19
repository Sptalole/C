#include <stdio.h>
#include <stdarg.h>

// Function to calculate the sum of variable number of integers
int sum(int count, ...) {
    va_list list; 
    /*va_list list;
    Use the va_list type to declare a variable that will store the information needed to retrieve the additional arguments. */
    int total = 0;

    va_start(list, count); // Initialize list to store all values after count 
    
    /*va_start(list, count);
    list: The va_list to initialize.
    count: The last fixed argument before the variable arguments (...).*/

    for (int i = 0; i < count; i++) {
        total += va_arg(list, int); // Get next argument (assumes int)
        /*va_arg(list, type);
        type: The type of the argument to retrieve.
        Note: It is important to not mix up the type of the arguments. */
    }

    va_end(list); // Clean up the va_list
    /*va_end(list);
    Once all the arguments are processed, use va_end() to clean up the va_list. */

    return total;
}

int main() {
    printf("Sum of 2 numbers: %d\n", sum(2, 10, 20));
    printf("Sum of 3 numbers: %d\n", sum(3, 5, 15, 25));
    printf("Sum of 5 numbers: %d\n", sum(5, 1, 2, 3, 4, 5));
    return 0;
}
