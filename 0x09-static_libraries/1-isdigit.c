#include "main.h"

/**
 *_isdigit - check if c is a digit between 0 and 9.
 *@c: the integer to be supplied by user.
 *Return: 0 or 1.
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
