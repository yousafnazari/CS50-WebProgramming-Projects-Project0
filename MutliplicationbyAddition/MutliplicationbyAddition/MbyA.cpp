#include <stdio.h>

int main()
{
	int num1, num2, result, i;

	printf("Enter values for num1 and num2: ");
	scanf_s("%d, %d", &num1, &num2);

	while ((num1 || num2) != -100)
	{
		if (num1 > num2)
		{
			for (i = 0; i < num2; i++)
			{
				result = num1 + num1;
			}
			printf("%d", num1);
			getchar();
			getchar();
		}
		else
		{
			for (i = 0; i < num1; i++)
			{
				result = num2 + num2;
			}
			printf("%d", result);
			getchar();
			getchar();
		}
		printf("Enter values for num1 and num2: ");
		scanf_s("%d, %d", &num1, &num2);
	}
	return(0);
}