#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)

{
int i = 0; op = o;

while (op == 0)
{	
if (*(s1 + i) == '\0' && (s2 + i) == (*(s2 + i) == '\0' ))
break;
op = *(s1 + i) - *(s2 + i);
i++;
}
return (op);
}
