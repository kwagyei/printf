#include "main.h"

/**
 * _printf - prints output according to format
 * @format: character string
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_integer},
		{"i", _print_integer},
		{"b", _print_binary},
		{"r", _print_reversed},
		{"R", _rot13},
		{"u", _unsigned_integer},
		{"o", _print_octal},
		{"x", _print_hex},
		{"X", _print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = _pacer(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
