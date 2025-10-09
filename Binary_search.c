#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        // Find the middle index (avoiding overflow)
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid; // Target found at index mid
        }
        else if (arr[mid] > target)
        {
            high = mid - 1; // Search in the left half
        }
        else
        {
            low = mid + 1; // Search in the right half
        }
    }

    return -1; // Target not found
}

int main()
{
    int arr[] = {2, 5, 7, 10, 15, 20, 25}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        printf("Element %d found at index %d\n", target, result);
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

/*OUTPUT*/
/*
Element 15 found at index 4
*/