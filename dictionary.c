#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define WORD_LENGTH 50
#define MEANING_LENGTH 200

// Structure to hold a dictionary entry
struct DictionaryEntry
{
    char word[WORD_LENGTH];
    char meaning[MEANING_LENGTH];
};

struct DictionaryEntry dictionary[MAX_WORDS];
int wordCount = 0;

// Function to add a word
void addWord()
{
    if (wordCount >= MAX_WORDS)
    {
        printf("Dictionary is full!\n");
        return;
    }

    char word[WORD_LENGTH];
    char meaning[MEANING_LENGTH];

    printf("Enter word: ");
    scanf(" %[^\n]", word); // Read input with spaces

    // Check if word already exists
    for (int i = 0; i < wordCount; i++)
    {
        if (strcmp(dictionary[i].word, word) == 0)
        {
            printf("Word already exists in the dictionary.\n");
            return;
        }
    }

    printf("Enter meaning: ");
    scanf(" %[^\n]", meaning); // Read input with spaces

    strcpy(dictionary[wordCount].word, word);
    strcpy(dictionary[wordCount].meaning, meaning);
    wordCount++;

    printf("Word added successfully!\n");
}

// Function to search for a word
void searchWord()
{
    char word[WORD_LENGTH];
    printf("Enter word to search: ");
    scanf(" %[^\n]", word);

    for (int i = 0; i < wordCount; i++)
    {
        if (strcmp(dictionary[i].word, word) == 0)
        {
            printf("Meaning: %s\n", dictionary[i].meaning);
            return;
        }
    }
    printf("Word not found in the dictionary.\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- Word Dictionary Menu ---\n");
        printf("1. Add Word\n");
        printf("2. Search Word\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addWord();
            break;
        case 2:
            searchWord();
            break;
        case 3:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

/*OUTPUT*/

/*
--- Word Dictionary Menu ---
1. Add Word
2. Search Word
3. Exit
Enter your choice: 1
Enter word: clock
Enter meaning: time display machine
Word added successfully!

--- Word Dictionary Menu ---
1. Add Word
2. Search Word
3. Exit
Enter your choice: 1
Enter word: mobile
Enter meaning: wireless device to make a call
Word added successfully!

--- Word Dictionary Menu ---
1. Add Word
2. Search Word
3. Exit
Enter your choice: 2
Enter word to search: mobile
Meaning: wireless device to make a call

--- Word Dictionary Menu ---
1. Add Word
2. Search Word
3. Exit
Enter your choice: 3
Exiting program.
*/