#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: char to be checked
 *
 * Return: 1 0r 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
