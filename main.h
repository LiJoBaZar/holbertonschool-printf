#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 *struct print - Struct op
 *
 *@t: The operator
 *@f: The function associated
 */
typedef struct print
{
	char t;
	int (*f)(va_list);
} print_t;


int _printf(const char *format, ...);
int g_printf(const char c, va_list ap);
int pchar(va_list arg);
int printf_str(va_list arg);
int printf_perc(va_list arg);
int printf_int(va_list arg);
int printf_bin(va_list arg);
int printf_udi(va_list arg);
int printf_oct(va_list arg);
int printf_hex(va_list arg);
int printf_HEX(va_list arg);
int printf_STR(va_list arg);
int printf_pntr(va_list arg);
int printf_revs(va_list arg);
int printf_root(va_list arg);
int incount(int a);
int printf_hexa(unsigned int n);
#endif
