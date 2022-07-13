#include "main.h"

/**
 * put this is a function that puts
 * @str: a param to _puts function
 */
void puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
