#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c:  is the int that will use for the argument of the function
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
