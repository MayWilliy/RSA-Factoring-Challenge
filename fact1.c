#include "factor.h"

/**
 * factoriazation - The function that factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: returns an integer int
 */
int fact(char *buffer)
{

	u_int32_t number;
	u_int32_t j;

	/*ASCII to integer*/
	number = atoi(buffer);


	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			printf("%d=%d*%d\n",number,number/j,j);
			break;
		}
	}

	return (0);
}
