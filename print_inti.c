#include "main.h"

/**
 * print_inti - prints integers of different bases on std output
 *
 * @num: number to be printed
 *
 * Return: number of characters printed
 */

int print_inti(int num)
{
	int qty = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
	}
	if (num > 999 && num < 10000)
	{
		_putchar('0' + num / 1000);
		num = num % 1000;
	}
	if (num > 99 && num < 1000)
	{
		_putchar('0' + num / 100);
		num = num % 100;
	}
	if (num > 9 && num < 100)
	{
		_putchar('0' + num / 10);
		num = num % 10;
	}
	if (num < 10)
	{
		_putchar('0' + num);
		qty++;
	}
	return (qty);
}
