#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arguments
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:this returns 0
*/
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

