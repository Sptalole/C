/*Reverse the array*/

#include <stdio.h>

int main ()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int length = sizeof (arr) / sizeof (arr[0]);
  printf ("Length = %d\n", length);
  int l = (length / 2);
  int temp = 0;
  for (int i = 0; i < l; i++)
	{
	  temp = arr[i];
	  arr[i] = arr[length - 1 - i];
	  arr[length - 1 - i] = temp;
	}
  printf ("Reversed array = ");
  for (int i = 0; i < length; i++)
	{
	  printf ("%d ", arr[i]);
	}
  return 0;
}
