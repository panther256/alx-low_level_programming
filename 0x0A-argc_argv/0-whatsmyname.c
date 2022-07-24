#include <stdio.h>
/**
*  main:- writes a programm tht prints its name
*  if you rename the progrm it prints the new name and compiles it again
*  the path efor the program is not removed
*  @argc: the argument count
*  @argv: argument vector
*  Return: this return to 0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
