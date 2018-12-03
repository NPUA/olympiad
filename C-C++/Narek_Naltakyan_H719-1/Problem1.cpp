// N_Task_1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdio.h>
#include <ctime>



int main() {

	int mat[110][110], i, j, n, m, k=0, a, b,p=0;

	do {
		printf("n=");
		scanf("%d", &n);
	} while ((n < 1) || (n > 100));

	do {
		printf("m=");
		scanf("%d", &m);
	} while ((m < 1) || (m > 100));

	do {
		printf("k=");
		scanf("%d", &k);
	} while ((m < 1) || (m > 10));




	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			mat[i][j] = 0;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}





	int t[15];

	for (int g = 1; g <= k; g++)
	{
		do {
			printf("t=");
			scanf("%d", &t[i]);
		} while ((t[i] < 1) || (t[i] > 3));

		do {
			printf("a=");
			scanf("%d", &a);
		} while ((a < 1) || (a > n));

		do {
			printf("b=");
			scanf("%d", &b);
		} while ((b < 1) || (b > m));

		if (t[i] == 1)
		{
			for (i = 1; i <= n; i++)
			{
				mat[i][b] = 1;
				mat[a][i] = 1;
			}

		}

		if (t[i] == 2)
		{
			for (i = 1; i < n; i++)
			{
				if ((a + i <= n) && (b + i <= m))
				{
					mat[a+i][b+i] = 2;
				}
				if ((a + i <= n) && (b - i >= 1))
				{
					mat[a+i][b-i] = 2;
				}
				if ((a - i >= 1) && (b + i <= m))
				{
					mat[a-i][b+i] = 2;
				}
				if ((a - i >= 1) && (b - i >= 1))
				{
					mat[a-i][b-i] = 2;
				}
			}
		}

		if (t[i] == 3)
		{
			for (i = 1; i < n; i++)
			{
				if ((a + i <= n) && (b + i <= m))
				{
					mat[a + i][b + i] = 2;
				}
				if ((a + i <= n) && (b - i >= 1))
				{
					mat[a + i][b - i] = 2;
				}
				if ((a - i >= 1) && (b + i <= m))
				{
					mat[a - i][b + i] = 2;
				}
				if ((a - i >= 1) && (b - i >= 1))
				{
					mat[a - i][b - i] = 2;
				}
			}

			for (i = 1; i <= n; i++)
			{
				mat[i][b] = 3;
				mat[a][i] = 3;
			}

		}


	}












	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d ", mat[i][j]);
			if (mat[i][j] == 0) p++;
		}
		printf("\n");
	}

	printf("\n p=%d",p);
	scanf("%d",&n);
}