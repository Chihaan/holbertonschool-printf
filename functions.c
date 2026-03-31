#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - Prints a char
 * @ap : The argument
 * @count_T: Total printed chars
 * Return: Nothing
 */
void print_char(va_list *ap, int *count_T)
{
	char c = va_arg(*ap, int);

	write(1, &c, 1);
	*count_T += 1;
}
/**
 * print_string - Prints a string
 * @ap : The argument
 * @count_T: Total printed chars
 * Return: Nothing
 */
void print_string(va_list *ap, int *count_T)
{
	char *str = va_arg(*ap, char *);
	char *nil = "(null)";
	int count1 = 0, count2 = 0;
	
	while (nil[count1])
		count1++;
	if (!str)
	{
		write(1, nil, count1);
		*count_T += count1;
		return;
	}
	while (str[count2])
		count2++;
	write (1, str, count2);
	*count_T += count2;
}
/**
 * print_pourcent - Prints a pourcent
 * @ap: The argument
 * @count_T: Total printed chars
 * Return: Nothing
 */
void print_pourcent(va_list *ap, int *count_T)
{
	(void)ap;

	_putchar('%');
	*count_T += 1;
}
/**
 * print_integer - Prints an integer
 * @ap: The argument
 * @count_T: Total printed chars
 * Return: Nothing
 */
void print_integer(va_list *ap, int *count_T)
{
	int d = va_arg(*ap, int);

	if (d == -2147483648)
	{
   		write(1, "-2147483648", 11);
   		*count_T += 11;
   		return;
	}
	if (d < 0)
	{
		_putchar('-');
		*count_T += 1;
		d = -d;
	}
	print_recursive(d, count_T);
}
/**
 * print_recursive - Prints an integer to char
 * @d: the integer
 * @count_T: the counter
 * Return: Nothing
 */
void print_recursive(int d, int *count_T)
{
	if (d / 10)
		print_recursive(d / 10, count_T);
	_putchar(d % 10 + '0');
	*count_T += 1;
}
