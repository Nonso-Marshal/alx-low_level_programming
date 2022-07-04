#include <stdio.h>
#include <string.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, n;

	for (i = 0; i <= 98; i++)
	{
		for (n = i + 1; n <= 99; n++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar((32));
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			if(i/ 10 != 9 || i % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return(0);
}
