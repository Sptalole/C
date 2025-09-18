// C Program to demonstrate the behaviour of constant
// variable
#include <stdio.h>

int main()
{
	// declaring a constant variable
	const int var =20;
	// initializing constant variable var after declaration
	var++;

	printf("Value of var: %d", var);
	return 0;
}
