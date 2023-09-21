#include "main.h"

/**
 * print_string - puts characters on the screen
 *
 * @str: string to be printed
 *
 * Return: the number of characters printed.
 */

int print_string(const char *str)
{
	unsigned int looper, nos = 0;

	for (looper = 0; str[looper] != '\0'; looper++)
	{
		_putchar(str[looper]);
		nos++;
	}
	return (nos);
}
