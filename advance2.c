#include "main.h"
/**
 *print_u - Unsigned decimal integer
 *
 *@arg: arg
 *Return: length
 */
int print_u(va_list u)
{
	unsigned int num, a = 0, div;

	num = va_arg(u, int);

	if (num == 0)
	{
	putchar('0');
	a = 1;
	}
	if (num > 0)
		{
		for (div = 1; (num / div) > 9; div *= 10)
			;
		while (div != 0)
			{
			putchar((num / div) + '0');
			num %= div;
			div /= 10;
			a++;
			}
		}
	return (a);
}

/**
 *print_o - Unsigned octal
 *
 *@arg: arg
 *Return: length
 */
int print_o(va_list o)
{

	unsigned int num, a = 0, i = 0;
	int tab[100];

	num = va_arg(o, int);
	if (num < 9)
	{
	putchar(num + '0');
	a = 1;
	}
	else if (num >= 9)
		{
		while (num > 0)
			{
			tab[i] = num % 8;
			num /= 8;
			i++;
			}
		}
		while (i--)
			{
			putchar(tab[i] + '0');
			a++;
			}
	return (a);
}

/**
 *print_h - Unsigned hexadecimal integer
 *@arg: arg
 *Return: length
 */
int print_h(va_list h)
{
	unsigned int n = va_arg(h, unsigned int);
	unsigned int a[1024];
	int i = 0, t = 0;
	char p;

		if (n < 1)
		{
		write(1, "0", 1);
		return (1);
		}
		for (i = 0; n > 0; i++, t++)
			{
			a[t] = n % 16;
			n = n / 16;
		if (a[t] > 10)
			a[i] = a[t] + 39;
		else
			a[i] = a[t];
			}
		for (i = t - 1; i >= 0; i--)
		{
		p = a[i] + '0';
		putchar(p);
		}
	return (t);
}

/**
 *print_H - Unsigned hexadecimal integer (uppercase)
 *@arg: arg
 *Return: length
 */
int print_H(va_list H)
{

	unsigned int n = va_arg(H, unsigned int);
	int a[1024], i = 0, t = 0;
	char p;

	if (n < 1)
		{
		putchar('0');
	return (1);
		}
	for (i = 0; n > 0; i++)
	{
	a[t] = n % 16;
	n = n / 16;
	if (a[i] > 10)
	a[i] = a[t] + 7;
	else
		{
		a[i] = a[t];
		}
		t++;
	}
	for (i = t - 1; i >= 0; i--)
		{
		p = a[i] + '0';
		putchar(p);
		}
	return (t);
}

/**
 *print_S - return an str
 *@arg: var to write
 *Return: string
 */
int print_S(va_list S)
{
	int i = 0, b;
	char *s = va_arg(S, char *);

		if (s == NULL)
		s = "(null)";
		while (s[i] != '\0')
		{
		b = s[i];
		if (b == 92 && s[i + 1] == 'n')
		{
			putchar('x');
			putchar('0');
			putchar('A');
			i++;
		}
		else
			{
			putchar(s[i]);
			i++;
			}
		}
	return (i);
}
