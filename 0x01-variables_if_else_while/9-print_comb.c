#include <stdio.h>
/**
 * main - print all possible combination of single digit numbers
 * Not allowed to use char
 * Return: 0 ALways
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
		putchar(44);
	putchar(32);
		}
	}
	putchar(10);
	return (0);
}
