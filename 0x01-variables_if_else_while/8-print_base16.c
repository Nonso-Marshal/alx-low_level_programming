#include <stdio.h>
/**
 * main - print all number of base 16
 * Return: 0 Always
 */
int main(void)
{
	char ch;
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
