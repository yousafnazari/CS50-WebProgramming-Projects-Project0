#include<stdio.h>

int main()
{
	char choice;

	printf("MAIN MENU\n_________\n_________\n1. Calc Fibonacci\n2. Calc RectoPolar\n3. Calc Factorial\n4. Calc Sum\nEnter q or Q to quit\n");
	scanf_s("%c", &choice);

	while (choice != 'q')
	{
		switch (choice)
		{
		default:
			printf("Invalid entry");
			printf("\nMAIN MENU\n_________\n_________\n1. Calc Fibonacci\n2. Calc RectoPolar\n3. Calc Factorial\n4. Calc Sum\nq or Q to quit");
			scanf_s("%c", &choice);
		case '1':
			int result = 0, L, f1 = 0, f2 = 1, i, j;

			printf("Enter a sequence length: ");
			scanf_s("%d", &L);
			//getting the length of the sequence

			while (L >= 0)
			{
				if (L == 0)
				{
					printf("0");
				}
				else if (L == 1)
				{
					printf("0, 1");
				}
				else
				{
					int f1 = 0;
					int f2 = 1;
					int result = 0;
					int i, j;

					printf("\n%d, %d, ", f1, f2);
					//shows first value in sequence ie 0

					for (i = 1; i < L; i++) //i = 2 because first two values already displayed
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

				printf("\nEnter a sequence length (q or Q to quit): ");
				scanf_s("%d", &L);

			}
		}

		printf("MAIN MENU\n_________\n_________\n1. Calc Fibonacci\n2. Calc RectoPolar\n3. Calc Factorial\n4. Calc Sum\nEnter q or Q to quit\n");
		scanf_s("%c", &choice);
	}
	return(0);
}