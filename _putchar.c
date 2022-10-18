#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: character
 * Return: character to stdout
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
