#include <stdio.h>
/**
 * main - prints everything received.
 * @argc: number of command line arguments.
 * @argv: array consist the program command line arguments.
 *
 * Return: 0 - Succesed
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
