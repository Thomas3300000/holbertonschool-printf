#include "main.h"

/**
 * _printf - reproduce the printf function
 * @format: string to print taking account of specific characters
 *
 * Return: the string by replacing the specific characters
 */
int _printf(const char *format, ...)
{
	va_list list;
	int cptform, cptype, len = 0;
	type_t types[] = {{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'\0', NULL}};

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (cptform = 0; format[cptform] != '\0'; cptform++)
	{
		if (format[cptform] == '%' && format[cptform + 1] != '!' && format[cptform + 1] != 'K')
		{
			cptform++;
			for (cptype = 0; types[cptype].type != '\0'; cptype++)
			{
				if (format[cptform] == types[cptype].type)
				{
					len = len + types[cptype].f(list);
					break;
				}
			}
		}
		else
		{
			_putchar(format[cptform]);
			len++;
		}
	}
	va_end(list);
	return (len);
}
