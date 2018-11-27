#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, n, m, t, b, k, i, j, z, s, g = 0;
	int x[100][100] = {0};
	do
	{
		printf("m=");
		scanf_s("%d", &m);
	} while (m >= 100);
	do
	{
		printf("n=");
		scanf_s("%d", &n);
	} while (n <= 1);
	do
	{
		printf("k=");
		scanf_s("%d", &k);
	} while (k <= 1 && k >= 10);
	for (i = 1; i <= k; i++)
	{
		do
		{
			printf("t=");
			scanf_s("%d", &t);
		} while (t <= 1 && t >= 3);
		do
		{
			printf("a=");
			scanf_s("%d", &a);
		} while (a <= 1 && a >= n);
		do
		{
			printf("b=");
			scanf_s("%d", &b);
		} while (b <= 1 && b >= m);
		x[a][b] = t;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (x[i][j] == 1)
			{
				for (z = 1; z <= m; z++)
					x[i][z] = 4;
				for (s = 1; s <= n; s++)
					x[s][j] = 4;
			}
			if (x[i][j] == 2)
				for (z = 1; z <= m; z++)
				{
					x[i + z][j + z] = 4;
					x[i - z][j - z] = 4;
					x[i - z][j + z] = 4;
					x[i + z][j - z] = 4;
				}
			if (x[i][j] == 3)
			{
				for (z = 1; z <= m; z++)
				{
					x[i + z][j + z] = 4;
					x[i - z][j - z] = 4;
					x[i - z][j + z] = 4;
					x[i + z][j - z] = 4;
				}
				for (z = 1; z <= m; z++)
					x[i][z] = 4;
				for (s = 1; s <= n; s++)
					x[s][j] = 4;
			}
		}
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (x[i][j] == 0)
				g++;
	printf("%d", g);
	return 0;
}
