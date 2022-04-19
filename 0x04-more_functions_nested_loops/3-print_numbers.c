#include "main.h"

/**
 * print_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int a;

a = 0;

for (a = 48; a < 58; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
