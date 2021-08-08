#include <stdio.h>

int main()
{
	int number = 1;
	int product = 1;

	while (number <= 100)
	{
		product = number * product;
		number = number + 1;
	}

	printf("\nThe factorial from 1 to 100 is %d", product);
	printf("\n\nPress Enter to continue...");

	return(0);
}