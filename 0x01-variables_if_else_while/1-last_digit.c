#include <stdlib.h>
#include <time>
#include<stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>5)
		{
			printf("%d and is greater than 5 \n",n);
		}
	else if (n==0)
	{
	printf("%d is equal to 0\n",n);
	}
	else
	{
		print("%d and is less than 6 and not 0\n",n);
	}
	return (0);
}
