<<<<<<< HEAD
#include "main.h"                                                                                                                               

/*_printf - Output to format.
 *@format: Output a character string.
 *Return: The number of characters printed; excluding the null byte.
 */

int _printf(const char *format, ...)

{
	int i = 0, j = 0, a = 0;
	va_list ap;
	
		if (format == NULL || (strlen(format) == 1 && format[0] == '%'))
		{
			return (-1);
		}
		va_start(ap, format);
		while (format && format[i])
		{
			if (format[i] != '%')
			{
				putchar(format[i]);
				j++;
			}
			if (format[i] == '%' && format[i + 1] != 'K' && format[i + 1] != '!')
			{
				a = g_printf(*(format + (i + 1)), ap);
				if(a != 0){
					j = j + a;
					i = i + 2;
				}
				continue;
				if (*(format + (i + 1)) == '\0')
				{
					putchar(format[i]);
					j++;
				}
			}
			else if ((format[i] == '%' && format[i + 1] == 'K') ||
			(format[i] == '%' && format[i + 1] == '!'))
			{
				putchar(format[i]);
				j++;
			}
			i++;
	}
	va_end(ap);
	return (j);
=======
#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
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
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: Number of characters to printing
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
>>>>>>> 64bf14db5937c78e198a75250823e92c22d638ff
}
