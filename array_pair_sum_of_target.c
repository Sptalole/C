/*
WAP to find the pair in the array = {1, 2, 3, 4, 5} and  target = 9,  need to check the any 2 element will have the sum of target is yes print yes else no*/

#include <stdio.h>

int main()
{
    int flag = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int target = 9;
    int length = sizeof(arr) / sizeof(arr[0]); // length 5
    for (int i = 0; i < length - 1; i++)
    /* run this 0 to 4 because if i =4 then j will become 5 , and arr[5] we dont have also , we dont want to check the one single element.
    Last element is 5 , so we can not find any pair so dont need to check that*/
    {
        for (int j = i + 1; j < length; j++) /*starting with j= i+1, so 1 + 2 , 1+3, 1+4, 1+5 and next itteration 2+3, 2+4, 2+5 */
        {
            int sum = 0;
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                flag = 1;
                printf("Yes");
                return 0;
            }
        }
    }

    printf("No");
}

/*OUTPUT*/
/*
Yes
*/