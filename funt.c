#include "main.h"
/**
 * incount - count the number of an int
 * @a: int to count
 * Return: count 
 */

int incount(int a)
	
{
	int count=0;

	while(a != 0)
	{
		a = a / 10;
		count++;
	}
	return (count);
}  
