#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print all the alphabet except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char min ='a';
	
	while( min <= 'z' )
		{
			
			
			if( min == 'q' || min == 'e' )
			{
				min++;
			} else 
			{
				putchar(min);
				min++;
			
			}
		
		
		}


	
	putchar('\n');
	return (0);
}

