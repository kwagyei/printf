#include "main.h"

/**
 * _print_char - prints character
 * @list: list of arguments
 * Return: ammount of characters printed
 */

int _print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * _print_string - prints string
 * @list: list of arguments
 * Return: characters printed
 */

int _print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * _print_percent - prints percent
 * @list: list of arguments
 * Return: %
 */

int _print_percent(__attribute__((unused))va_list list)
{
	_putchar(37);
	return (1);
}

/**
 * _print_integer - prints qan integer
 * @list: list of arguments
 * Return: char
 */

int _print_integer(va_list list)
{
	int n;

	n = _print_number(list);
	return (n);
}

/**
 * _unsigned_integer - prints unsigned integers
 * @list: list of all arguments
 * Return: count of numbers
 */
int _unsigned_integer(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (print_unsigned_number(n));

	if (n < 1)
		return (-1);
	return (print_unsigned_number(n));
}
