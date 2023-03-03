#include "main.h"

/**
*_islower - checks is an alphabet is lowercase or not
*
* @c: alphabet to check
*
* Return: 1 if lower, else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
