#include "main.h"
/**
 * _printf - prints a function
 * @format: character string
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list item;
	int count, k = 0;
	int value;

	va_start(item, format);

	if (!format)
		return (-1);
	while (format[k])
	{
	if (format[k] == '%')
	{
		k++;
		switch (format[k])
		{
			case 'c':
				value = print_char(va_arg(item, int));
				count += value;
				break;
			case 's':
				value = print_str(va_arg(item, char *));
				count += value;
				break;
			case '%':
				value = print_per();
				count += value;
				break;
			case 'd':
				value = print_int(va_arg(item, int));
				count += value;
				break;
			default:
				_putchar('%');
				_putchar(format[k]);
				count += 2;
				break;
		}
	} else
	{
		_putchar(format[k]);
		count++;
	}
	k++;
	}
	va_end(item);
	return (count);
}
