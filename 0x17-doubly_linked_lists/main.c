#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int a_pow(int a, int b)
{
	int i = 0, total = 1;

	if (b == 0)
		return (a);

	for (; i < b; i++)
		total *= a;

	return (total);
}

int is_palindrome(int num)
{
	char array [7];
	int i = 0, len = 0;

	while (i < 6)
	{
		if (i == 5 && !(num % 10))
		{
			array[i] = '\0';
			break;
		}	
		array[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	array[6] = '\0';
	len = strlen(array);
	for (i = 0; i < len / 2; i++)
	{
		if (array[i] != array[len - 1 - i])
			return (0);
	}
	return (1);
}

void main()
{
	int i = 0, j = 0, p = 0, max_i = 0, max_j = 0, max = 0;

	for (i = 100; i < 999; i++)
	{
		for (j = 100; j < 999; j++)
		{
			p = i * j;
			if (is_palindrome(p) && p < 998001)
			{
				printf("%d * %d = %d\n", i, j, p);
				if (max < p)
				{
					max_i = i;
					max_j = j;
					max = p;
				}
			}
		}
	}

	
	printf("------%d * %d = %d---------\n", max_i, max_j, max);
}
