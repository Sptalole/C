//Write a c function to take date (04/04/2022) as input and split it as day-04, month-04 & year-2022?


#include <stdio.h>

void splitDate(const char *date, int *day, int *month, int *year) {
    // Use sscanf to parse the date string into day, month, and year
    if (sscanf(date, "%d/%d/%d/%d", day, month, year) != 3) {
        // If sscanf does not return 3, there was an error in parsing
        printf("Error: Invalid date format\n");
    }
}

int main() {
    const char *date = "04/04/2022";  // Example date string
    int day, month, year;

    // Split the date
    splitDate(date, &day, &month, &year);

    // Print the results
    printf("Day: %02d\n", day);
    printf("Month: %02d\n", month);
    printf("Year: %d\n", year);

    return 0;
}
