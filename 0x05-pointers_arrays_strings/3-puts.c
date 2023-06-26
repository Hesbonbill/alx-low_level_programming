#include "main.h"
/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: strings to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');

}



