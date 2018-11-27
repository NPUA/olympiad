#include<iostream>
#include <math.h>
using namespace std;
int main() {
	int n,p,a,x[10],s,k=1,l,m,min,z,y[10],j=0,b,v=0,c;
	cout << "n=";
	cin >> n;
	cout << "p=";
	cin >> p;
	s = n;
	if (n%p==0)
	{
	cout << n << endl;
	}
	for (int i = 0; i < 9; i++)
	{
		if (s / 10 != 0) {
			s = s / 10;
			k++;

		}
		
	else break;
	}
	cout << k << endl;
	m = k;
	for (int i = 0; i < k; i++)
	{
		x[i]= n /pow(10,m-1);
		x[i] = x[i] % 10;
		m--;
	
	}
	min = x[0];
	for (int i = 1; i < k; i++)
	{
		if (x[i]<min)
		{
			min = x[i];
		}
			
	}
	for (int i = 0; i < k; i++)
	{
		
			y[j] = x[i];
			if (x[i]==min)
			{
				continue;
			}
			j++;
		
	}
	for (int i = 0; i < j; i++)
	{
		v += y[i] * pow(10, k -2);
		k--;
	}
	if (v%p==0)
	{
		cout << v << endl;
	}
	
	system("pause");
	return 0;
}