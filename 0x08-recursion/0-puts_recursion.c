#include "main.h"
/**
 * _puts_recursion - This needs to prints a string, followed by a new line.
 * @s: string to print
 * Return: void.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
