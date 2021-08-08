#include <stdio.h>

int main()
{
	int number = 1;
	int sum = 0;
	while (number <= 5)
	{
		sum = number + sum;
		number = number + 1;
	}

	printf("\nThe sum of 1 to 5 is %d", sum);

	printf("\n\nPress Enter to continue...");
	getchar();

	return(0);
}