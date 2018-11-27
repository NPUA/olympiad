// K_Task_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main()
{
	int n,qayl;
	printf("n="); scanf_s("%d", &n);
	if (n == 1) printf("qayl=%5d", 0);
	if (n == 2) printf("qayl=%5d", 1);
	else
		printf("qayl=%5d", n/2+n%2);
	printf("\n");
	}

	





