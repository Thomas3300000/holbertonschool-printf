#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_percent(va_list list);

/**
 * struct type - Struct type
 *
 * @type: the type
 * @f: the function associated
 */

typedef struct type
{
	char type;
	int (*f)(va_list list);
} type_t;

#endif
