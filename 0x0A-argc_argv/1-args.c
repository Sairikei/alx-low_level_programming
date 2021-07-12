#include <stdio.h>

/**
 *main - prints the number of args
 *@argc: counts args
 *@argv: arguements passed
 *
 *Return: return 0
 */
int main(int argc, char *argv[] __ attribute __((unused)))
{
	printf("argc = %d\n", argc);
	return (0);
}
