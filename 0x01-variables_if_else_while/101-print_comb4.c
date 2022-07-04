#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * must not use any of char variable
 */

int main(void)
{
	int c;
	while (d < 10)

	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ')
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
