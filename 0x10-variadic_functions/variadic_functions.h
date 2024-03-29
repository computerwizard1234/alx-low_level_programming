#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>
/**
 * struct printer - A new struct type defining a printer
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 * 				a data type corresponding to symbol.
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
