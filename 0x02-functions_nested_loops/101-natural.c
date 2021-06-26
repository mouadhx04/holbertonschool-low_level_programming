#include <stdio.h>
/**
 *main - prints sum of multiples of 3 and 5
 *@i: varaiable counter
 *@x: variable for sum multiples
 *return: always 0 (success)
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			x == x + i;
	}
	printf("somme multiples of 3 and 5 is %d\n", x);
	printf("\n");
	return (0);
}
