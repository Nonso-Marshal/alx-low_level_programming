#include <stdio.h>
/**
 * main - Program that print all the single digit of base 10
 */

int main(void)
{
	int x;
	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
