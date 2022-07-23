#include "main.h"

/**
 *printf_hexa - prints in hexadecimal form in lowercase.
 *@n: unsigned ling int
 *Return: j
 */
int printf_hexa(unsigned int n)
{
	unsigned int a[1024];
	int i = 0, j = 0;
	char p;

	if (n < 1)
	{
		putchar('0');
	return (1);
	}
	for (i = 0; n > 0; i++, j++)
	{
		a[j] = n % 16;
		n = n / 16;
	if (a[j] > 10)
		a[i] = a[j] + 39;
	else
		a[i] = a[j];
	}
	for (i = j - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		putchar(p);
	}
	return (j);
}

/**
 *printf_pntr - print pointer
 *@arg: arg
 *Return: length
 */
int printf_pntr(va_list arg)
{

	unsigned long int n = va_arg(arg, unsigned long int);
	int len = 0;

	putchar('0');
	putchar('x');
	len += hexa(n);
	len = len + 2;
	return (len);
}

/**
 *printf_revs - print reversed string
 *@arg: arg
 *Return: len
 */
int printf_revs(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "(null)";
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	}
	else
	{
	for (i = strlen(s) - 1; i >= 0; i--)
		putchar(s[i]);
	}
	return (strlen(s));
}

int printf_root(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i, j, count = 0;
	char code[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		for (i = 0; s[i] != '\0'; i++)
		{
		j = 0;
	while ((code[j] != '\0') && (s[i] != code[j]))
	{
		j++;
	}
	if (s[i] == code[j])
	{
		putchar(encode[j]);
		count++;
	}
	else if (code[j] == '\0')
	{
		putchar(s[i]);
		count++;
	}
		}
	return (count);
}
