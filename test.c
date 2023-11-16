#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	
	int len, len2, len3, len4;
	/*
	_printf("%c\n", '\0');
	printf("%c\n", '\0');
	_printf("%s\n", "this is a string with \0 %c \n");
	        printf("%s\n", "this is a string with \0 %c \n");
	*/
	len = _printf("%b\n", 200);
	len2 = _printf("%b\n", 201);
	len3 = _printf("%b\n", 0);
	len4 = _printf("%b\n", 5328891);
	_printf("%b\n", 98);
	printf("%i    %i    %i     %i      \n", len, len2, len3, len4);
	/*
	len = _printf("Let's try to printf a simple sentence.\n");
	    len2 = printf("Let's try to printf a simple sentence.\n");
	    _printf("Length:[%d, %i]\n", len, len);
	        printf("Length:[%d, %i]\n", len2, len2);
	*/
	return (0);

}
