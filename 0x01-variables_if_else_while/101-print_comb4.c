#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * must not use any of char variable
 */

int main(void)
{
	int i, n, j;

	for (i = 0; i < 9; i++)
	{
		for (n = i + 1; n < 9; n++)
		{
			for (j = n + 1; j < 10; j++)
			{
				putchar((i % 10) + '0');
				putchar((n % 10) + '0');
				putchar((j % 10) + '0');

				if (i == 7 && n == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
