// K_Task_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int i,j,k, a, b, t, m,p,h, n,q=0, x[100][100];
	printf("n="); scanf_s("%d", &n);
	printf("m="); scanf_s("%d", &m);
	printf("k="); scanf_s("%d", &k);
	for ( i = 1; i <= k; i++)
	{
		printf("t="); scanf_s("%d", &t);
		printf("a="); scanf_s("%d", &a);
		printf("b="); scanf_s("%d", &b);
		x[a][b] = t;
			}

	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (x[i][j] <0 || x[i][j] >3) x[i][j] = 0;

	/*for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (x[i][j]==1)
			{
				for ( p = 1; p <= n; p++)
						if (x[p][j] ==0 ) x[i][j] = 5;
				for ( h = 1; h <= m; h++)
									if (x[i][h] == 0) x[i][j] = 5;
								}*/
				
	for ( i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%4d", x[i][j]);
				printf("\n");
	}
}

