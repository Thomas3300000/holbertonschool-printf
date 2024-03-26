#include "main.h"


/**
 * print_c - print a character
 * @args: arguments to prints
 *
 * Return: character
 */

int print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_s - print a string
 * @list: string arguments
 *
 * Return: cpt
 */
int print_s(va_list list)
{
	char *str = va_arg(list, char *);
	int cpt;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		for (cpt = 0; str[cpt] != '\0'; cpt++)
		{
			_putchar(str[cpt]);
		}

		return (cpt);
	}
}

/**
 * print_percent - print percent
 * @list: string arguments
 *
 * Return: percent
 */
int print_percent(va_list list __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
