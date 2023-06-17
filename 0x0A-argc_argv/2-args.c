#include <stdio.h>
/**
 * main - prints all arguement it receives
 * @argv: arguement vector
 * @argc: arguement count
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
return (0);
}
