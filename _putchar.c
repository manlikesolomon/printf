#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes characters to standard output
 * @c: character
 * Return: 1 for success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
