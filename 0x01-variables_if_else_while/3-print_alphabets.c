#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void){

char min ='a';
char maj ;
while(min <= 'z' )
{
	putchar(min);
	min++;
}
for (maj='A';maj <='Z';maj++){
putchar(maj);
}
putchar('\n');
return 0;
}
