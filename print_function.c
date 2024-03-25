#include "main.h"

/**
 * print_c - print a character
 *
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
