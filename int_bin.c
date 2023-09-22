#include "main.h"
#include <stdlib.h>

/**
 * int_bin - converts integer to binary
 *
 * @intb: the integer to be converted
 *
 * Return: the number of characters printed
 */

int int_bin(int intb)
{
	int check, prnt, nos = 0;
	char *result;
	int intbb = intb;

	result = malloc(sizeof(int) * 32);

	for (check = 0; intbb > 0; check++)
	{
		result[check] = intbb % 2;
		intbb = intbb / 2;
	}
	for (prnt = check - 1; prnt >= 0; prnt--)
	{
		_putchar('0' + result[prnt]);
		nos++;
	}
	free(result);
	return (nos);
}
