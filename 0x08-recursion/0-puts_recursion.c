#include "main.h"

/**
 * _puts_recursion - print a string.
 * put to char
 * Return: 0
 */

void -puts_recursion.c (char *s)
{
	if (*s != '0\')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}	
