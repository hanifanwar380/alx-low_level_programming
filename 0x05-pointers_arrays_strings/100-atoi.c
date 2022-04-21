#include "main.h"

/**
 * _atoi - convert to a int
 * @s:string
 * Return:int
 */

int _atoi(char *s)
{
int a, b, n, x;

a = n = 0;
x = 1;
while ((s[a] < '0' || s[a] > '9') && (s[a] != '\0'))
{
if (s[a] == '-')
x *= -1;
a++;
}
j = a;
while ((s[b] >= '0') && (s[b] <= '9'))
{
n = (n * 10) + x * ((s[b]) - '0');
b++;
}
return (n);
}
