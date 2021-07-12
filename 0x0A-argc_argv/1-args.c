#include <stdio.h>

/**
 *main - prints the number of args
 *@argc: counts args
 *@argv: arguements passed
 *
 *Return: return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
