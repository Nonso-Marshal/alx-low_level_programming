#include "main.h"

/**
 * _put this is a function that puts
 * @str: a param to _puts function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		(*str);
	}
	_putchar('\n');
}
