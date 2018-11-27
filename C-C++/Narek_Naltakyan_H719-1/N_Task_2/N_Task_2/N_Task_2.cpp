#include <iostream>
#include "stdafx.h"
#include <stdio.h>
#include <ctime>




int main()
{
	int N, P;
	do
	{
		printf("N=");
		scanf_s("%d", &N);
	} while ((N <= 1) || (N >= 10000000));

	do
	{
		printf("P=");
		scanf_s("%d", &P);
	} while (P <= 0);

	if (N < P) {
		printf("-1");
		return 0;
	}
	if (N%P == 0)
	{
		printf_s("tiv heracav che");
		return 0;
	}




	




	int b[100];

	int a[8], k = N, p = 0;
	if (N >= 10)
	{
		for (int i = 1; k != 0; i++)
		{
			a[i] = k % 10;
			k /= 10;
			//printf("%d ", a[i]);
			p++;
		}
	}
	else
	{
		printf_s("tiv heracav che");
		return 0;
	}
	











	int l = 1, u = 0, h = 0;
	k = 0;




	for (int j = 1; j <= p; j++)
	{
		l = 1;
		k = 0;
		for (int i = 1; i <= p; i++)
		{
			if (j == i)
				continue;
			k += a[i] * l;
			l *= 10;

		}
		if (k%P == 0)
		{
			u++;
			b[u] = k;
		}
		//printf("%d ", k);
	}










	int max = b[1];
	/*for (int i = 1; i <= u; i++)
		printf("%d ", b[i]);*/

	printf("\n");

	for (int i = 2; i <= u; i++)
	{
		if (max < b[i])max = b[i];
	}

	printf("%d", max);
}











