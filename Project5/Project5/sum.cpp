/*
*/

#include <stdio.h>
#define MAX 31

int main()
{
	int number = 1;
	int product = 1;
	int n;
	
	printf("Enter a value to calculate the factorial: ");
	scanf_s("%d",&n);

	while (number <= n)
	{
		product = n * product;
		number = number + 1;
	}

	printf("The factorial from 1 to %d is %d", n, product);
	printf("Press Enter to continue...");
	getchar();

	return(0);
}