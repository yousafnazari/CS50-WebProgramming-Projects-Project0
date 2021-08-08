#include <stdio.h>

int main()
{
	int result = 0, L, f1 = 0, f2 = 1, i, j;

	printf("Enter a sequence length: ");
	scanf_s("%d", &L);
	//getting the length of the sequence



	while (L > 0)
	{
		if (L == 1)
		{
			printf("0");
		}
		else if (L == 2)
		{
			printf("0, 1");
		}
		else
		{
			f1 = 0;
			f2 = 1;
			result = 0;

			printf("\n%d, %d, ", f1, f2);
			//shows first value in sequence ie 0

			for (i = 2; i < L; i++) //i = 2 because first two values already displayed
			{
				result = f1 + f2;
				f1 = f2;
				f2 = result;
				printf("%d, ", result);

			}
		}

		for (i = 0; i < L; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		printf("\nEnter a sequence length: ");
		scanf_s("%d", &L);

	}

	return(0);
}
