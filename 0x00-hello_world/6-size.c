#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(){
	int inttype
	float floattype
	long  int longtype
	long long int longlongtype
	char chartype
        printf("size of char:", sizeof(chartype));
	printf("size of int:", sizeof(intype));
	printf("size of long int:", sizeof(longtype));
	printf("size of long long int:", sizeof(longlongtype));
	printf("size of float:", sizeof(floattype));
	return (0);
}
