#include "main.h"
/**
 *g_printf - _printf to get function from function.c
 *@ap: arg
 *@c: char
 *Return: char
 */
int g_printf(const char c, va_list ap)
{
	int i = 0;
	int j = 0;
	
	print_t type[] = {
	
		{'c', pchar},
		{'s', printf_str},
		{'%', printf_perc},
		{'d', printf_int},
		{'i', printf_int},
		{'b', printf_bin},
		{'u', printf_udi},
		{'o', printf_oct},
		{'x', printf_hex},
		{'X', printf_HEX},
		{'S', printf_STR},
		{'p', printf_pntr},
		{'r', printf_revs},
		{'R', printf_root}};
	
	while (type[i].t != 0)
	{
	if (type[i].t == c)
	{
		j += type[i].f(ap);
	return (j);
	}
		i++;
	}
	return (0);
}
