#include <stdio.h>

int main()
{
	int n, x, j, y;
	scanf("%d", &n);
	int arr[n][2];
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}
	for (j = 0; j < n; j++)
	{
		if (arr[j][1] == 0)
			printf("divisao impossivel\n");
		else if (arr[j][1] != 0)
		{
			float x = arr[j][0] / (arr[j][1] * 1.0);
			printf("%.1f\n", x);
		}
	}

	return 0;
}
