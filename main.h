#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct convert - defines a function for symbols and functions
 * @sym: the operator
 * @f: function
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;
int _pacer(const char *format, conver_t f_list[], va_list arg_list);

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list);
int _print_string(va_list);
int _print_percent(va_list);
int _print_integer(va_list);
int _print_number(va_list);
int _print_binary(va_list);
int _print_reversed(va_list arg);
int _rot13(va_list);
int _unsigned_integer(va_list);
int _print_octal(va_list list);
int _print_hex(va_list list);
int _print_heX(va_list list);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int);

#endif
