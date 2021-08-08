#include <stdio.h>
#define MAX 100

int main()
{
	int number = 1;
	int product = 1;

	while (number <= MAX)
	{
		product = number * product;
		number = number + 1;
	}

	printf("\nThe factorial from 1 to %d is %d", MAX, product);
	printf("\n\nPress Enter to continue...");
	getchar();

	return(0);
}