#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct formats - Struct formats
 *
 * @format: The format
 * @func: The function associated
 */
typedef struct formats
{
	char *formats;
	void (*functions)(va_list *, int *);
} forms;

void print_char(va_list *ap, int *count_T);
void print_string(va_list *ap, int *count_T);
void print_pourcent(va_list *ap, int *count_T);
void print_integer(va_list *ap, int *count_T);
int _putchar(char c);
int _printf(const char *format, ...);
void print_recursive(int d, int *count_T);

#endif
