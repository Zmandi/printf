#include "main.h"
/**
 * print_char - prints a character
 * @c: character
 * Return: a char
 */
int print_char(char c)
{
	return (_putchar(c));
}

/**
 * print_str - prints a string
 * @s: string
 * Return: a string
 */
int print_str(char *s)
{
	int k = 0;

	if (s == NULL)
	{
	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
	}
	while (s[k])
	{
		_putchar(s[k]);
		k++;
	}
	return (k);
}

/**
 * print_per - print percent(%) sign
 * Return: a percent sign
 */
int print_per(void)
{
return (_putchar('%'));
}


/**
 * print_int - prints integers
 * @d: integer
 * Return: an integer
 */
int print_int(int d)
{
	char *buffer = NULL;
	int temp = d, size;	/*where d is a positive number.*/
	int num_digits = 0;
	int i, t = 0;

	if (d == 0)
	{
		_putchar('0');
		return (1);
	}
	if (d < 0)
	{
		t = 1;
		d *= -1;
	}
	while (temp != 0)
	{
		num_digits++;
		temp /= 10;
	}
	size = num_digits + 1;
	buffer = malloc(sizeof(char) * (size));

	for (i = size - 2; i >= 0; i--)
	{
		buffer[i] = (d % 10) + '0';
		d /= 10;
	}
	buffer[size - 1] = '\0';
	if (t == 1)
	{
		_putchar('-');
		num_digits++;
	}
	print_str(buffer);
	free(buffer);

	return (num_digits);
}
