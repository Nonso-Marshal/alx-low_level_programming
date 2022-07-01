#include <stdio.h>
/**
 * main - Print the alphabets in lowercase, then UPPERCASE
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a' && 'A'; letter <= 'z' && 'Z'; letter++)
	{
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
