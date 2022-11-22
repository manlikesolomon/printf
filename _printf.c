#include "main.h"
/**
 * _printf - prints characters
 * @format: list of arguments
 * Return: 1 for success
 */

int _printf(const char *format, ...)
{
	int chars;
	va_list list;

	va_start(list, format);
	if (format == NULL)
		return (-1);

	chars = charsFormats(format, list);

	va_end(list);
	return (chars);
}

/**
 * charsFormats - paremters printf
 * @format: list of arguments
 * @args: listing
 * Return: value of print
 */

int charsFormats(const char *format, va_list args)
{
	int a, b, chars, r_val;
	fmtsSpefier f_list[] = {{"c", _char}, {"s", _string},
		{"%", _percent}, {"d", _integer}, {"i", _integer}, {NULL, NULL}
	}
	chars = 0;
