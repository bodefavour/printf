#include "main.h"
#include <stdarg.h>

/**
 * _printf - a function that produces output according to a format
 *
 * @format: The format of the output
 *
 * Return: the number of characters printed
 *
 */

int _printf(const char *format, ...)
{

/* Declare variables */
	va_list my_vars;
/*	char *char_pr; */
	unsigned int itr, count = 0;

/*	_putchar('1'); */
/* initiate variadic function */
	va_start(my_vars, format);

/*	_putchar('2'); */
/* initiate loop through the format */
	for (itr = 0; format[itr] != '\0'; itr++)
	{
		if (format[itr] == '%')
		{

			if (format[itr + 1] == 'c')
			{
				_putchar(va_arg(my_vars, int));
				count++;
			}


			if (format[itr + 1] == 's')
				count += print_string(va_arg(my_vars, const char*));

			if (format[itr + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			itr++;

		}
		else
		{
		_putchar(format[itr]);
		count++;
		}
	}
/*   	_putchar('4'); */
/* close variadic function */
	va_end(my_vars);

/*	_putchar('5'); */
	return (count);
}
