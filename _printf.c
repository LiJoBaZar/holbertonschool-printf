#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *check_format - checks if there is a valid format specifier
 *@format: possible valid format specifier
 *Return: pointer to valid function or NULL
 */

int (*check_format(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i=0; p[i].type != NULL; i++)
	{
		if (*(p[i].type) == *format)
			break;
	}
	return (p[i].function);
}

/**
 *_printf - function for format printing
 *@format: list of arguments to printing
 *Return: Number of characters to printing
 */

int _printf(const char *format, ...)
{
	va_list name;
	int (*function)(va_list);
	unsigned int i = 0, counter = 0;

	if (format == NULL)
		return (-1);

	va_start(name, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				function = check_format(&format[i + 1]);
				if (function == NULL)
					return (-1);
				i += 2;
				counter += function(name);
				continue;
			}
		}
	}
	va_end(name);
	return (counter);
}
