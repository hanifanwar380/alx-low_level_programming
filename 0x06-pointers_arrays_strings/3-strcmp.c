#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: If str1 < str2, the negative difference of the first unmatcheds.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))

i++;

return (*(s1 + i) - *(s2 + i));
}
