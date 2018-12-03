#include "stdafx.h"

#include "stdafx.h"

int _tmain()
{
	int n,p,i,s=0,z;
	do{
	printf("n=");scanf_s("%d",&n);
	}while(n<1);
	printf("p=");scanf_s("%d",&p);
	n=z;
	while(z<10)
	{s++;
	printf("%d",s);
	z=z/10;
    }
    for(i=1;i<s;i*=10){
		z=n/i+n%i;
     if(z%p==0){
		printf("%d",z);
	}
	}
	return 0;
}

