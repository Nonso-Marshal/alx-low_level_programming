#include "main.h"
#include <string.h>

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */
void _puts(char *str)
{
	char *c, int k;
	c = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
