#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
void print_c(va_list list);
void print_s(va_list list);
void print_percent(va_list list);

/**
 * struct type - Struct type
 *
 * @type: the type 
 * @f: the function associated
 */

typedef struct type
{
	char *type;
	void (*f)(va_list list);
} type_t;

#endif
