#include <stdio.h>
/**
 * main - a program that prints the number of arguuments
 * @args: argument for count
 * @argv: argument vector
 * Return: returns to zero
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
