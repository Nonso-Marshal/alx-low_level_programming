#include <stdio.h>
#include <string.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k, l;

	/* nest for loop inside another for loop */
	for (i = 48; i <= 57\n; i++)
	{
		for (j = 48; j <= 57\n; j++)
		{
			for (k = 48; k <= 57\n; k++)
			{
				for (l = 49; l <= 57\n; l++)
				{
					putchar(i);
					putchar(j);
					putchar(44);
					putchar(k);
					putchar(l);
					putchar(32);
					putchar(44);
				}
			}
		}
	}
	/* Print new line */
	putchar('\n');
	return (0);
i}
