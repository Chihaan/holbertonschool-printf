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
	char *nil = "(Nil)";
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
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}