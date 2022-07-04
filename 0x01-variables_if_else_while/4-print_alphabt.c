#include <stdio.h>
/**
 * main - Program that prints alphabets in lowercase, except q and e
 * You can use putchar
 * Return: 0
 */

int main(void)
{
	char lw = 'a';

	while  (lw <= 'z')
	{
	if (lw != 'q' && lw != 'e')
	putchar (lw);
	lw += 1;
	}
	putchar ('\n');
	return (0);
}
