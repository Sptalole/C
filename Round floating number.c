//Write a c function to round floating point numbers. Ex: If num = 1.84, round it to 2. If num is -1.84, then round it to -2.

#include <stdio.h>

// Function to round a floating point number
int roundFloat(double num) {
    // If the number is positive
    if (num >= 0) {
        // Add 0.5 and cast to int for positive numbers
        return (int)(num + 0.5);
    } else {
        // Subtract 0.5 and cast to int for negative numbers
        return (int)(num - 0.5);
    }
}

int main() {
    double num1 = 1.84;
    double num2 = -1.84;
    
    printf("Rounded value of %.2f is %d\n", num1, roundFloat(num1));
    printf("Rounded value of %.2f is %d\n", num2, roundFloat(num2));

    return 0;
}
