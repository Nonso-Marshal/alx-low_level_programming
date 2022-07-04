#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Print all alphabet in lowercase and in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char stri[100] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	x = strlen(stri) - 1;
	while (x >= 0)
	{
		putchar(stri[x]);
		x--;
	}
	putchar('\n');
	return (0);
}
