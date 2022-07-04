#include <stdio.h>
/**
 * main - Print all single digit of base 10 starting from 0
 * only using putchar and without char variables
 * Return: 0 Always
 */

int main()
{
	int x;

	for (x = '0'; x <= '9'; x++);
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
