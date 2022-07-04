#include <stdio.h>
/**
 * main - Program that print all the single digit of base 10
 * Return: 0 Always
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
