#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2, len3, len4, len5, len6;
	unsigned char *c1 = malloc(sizeof(unsigned char) * 2);
	unsigned char *c2 = malloc(sizeof(unsigned char) * 2);
	*c1 = 2;
	*(c1 + 1) = '\0';
	*c2 = 1;
	*(c2 + 1) = '\0';

    	len1 = _printf("%S\n", "Best\nSchool");
    len2 = _printf("this is string and this is S[%S]\n", "!inside this shit\n");
    len3 = _printf("%S\n", "some talk \t\t\t");
    len4 = _printf("final test = %S\n", "now try this ]\r\rthis\\\tr");
    len5 = _printf("final final! = %S\n", c1);
    len6 = _printf("final final! = %S\n", c2);

    printf("%i    %i    %i    %i     %i     %i     \n", len1, len2, len3, len4, len5, len6);

    printf("****************\n");
    printf("pointer c1 in integer = %i, and pointer c1 in p = %p\n", c1, c1);
    _printf("pointer c1 in integer = %i, and pointer c1 in p = %p\n", c1, c1);
    printf("talking [ %x ]\n", 1234);
    _printf("hexa  [ %x ] \n", 1234);
    printf("[ %X ]\n", 34356);
    _printf("[ %X ]\n", 34356);

    return (0);
}
