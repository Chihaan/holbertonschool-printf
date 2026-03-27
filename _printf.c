#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - My printf
 *
 * @formats: The string givent to _printf
 */
int _printf(const char *format, ...)
{
	forms fs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pourcent},
		{NULL, NULL}
	};
	int count_T = 0;
	int i = 0, j = 0;
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
			{
				va_end(ap);
				return (-1);
			}
			j = 0;
			while (fs[j].formats != NULL)
			{
				if (format[i] == fs[j].formats[0])
				{
					fs[j].functions(&ap, &count_T);
					break;
				}
				j++;
			}
			if (fs[j].formats == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count_T += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count_T++;
		}
		i++;
	}
	va_end(ap);
	return (count_T);
}
