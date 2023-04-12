#include <stdio.h>

int main()
{
	int x, y, sum = 0;
	scanf("%d %d", &x, &y);
	if (x < y)
	{
		int z = x;
		x = y;
		y = z;
	}
	y += 1;
	for (int i = y; i < x; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}