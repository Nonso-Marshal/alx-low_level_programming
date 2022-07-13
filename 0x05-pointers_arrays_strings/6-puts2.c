@include "main.h"
/**
 * puts2 - prints a string, followed  by a newline
 * @str - pointer to string to print
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (1 % 2 == 0)
		{
			_putchar(str[1]);
		}

		i++;

	}
	_putchar('\n');
}
