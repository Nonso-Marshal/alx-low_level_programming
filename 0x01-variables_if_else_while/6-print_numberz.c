#include <stdio.h>
/**
 * main - Print all single digit of base 10 starting from 0
 * only using putchar and without char variables
 * Return: 0 Always
 */

int main(void)
{
	int num;
	{
	for (0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar ('\n');
	}
		return (0);
}