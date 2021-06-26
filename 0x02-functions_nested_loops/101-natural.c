#include <stdio.h>
/**
 *main - prints sum of multiples of 3 and 5
 *@i: counter
 *@x,y: variable for sum
 *@s: sum x,y
 *return: always 0 (success)
 */
int main(void)
{
	int x, y, s;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			x == x + i;
		}
		else if ((i % 5) == 0)
		{
			y == y + i;
		}
		s == x + y;
	}
	printf("somme multiples of 3 and 5 is %d\n", s);
	printf("\n");
	return (0);
}
