#include "main.h"

/**
* _isalpha - checks if argument is alpha
*
* @c: input
* Return: return 1 if c is alpha, return 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
