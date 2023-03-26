#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

typedef struct print_all
{
	char *op;
	void (*f)(va_list ap);
} print_all_t;

void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list args);
void print_str(va_list args);

#endif
