// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int N, L, S = 0;
	cout << "Please input N : ";
	cin >> N;
	vector <int> K;
	for (int i = 0,j = 1; i < N; i++, j++)
	{
		K[i] = j;
		cout << "K[" << i << "] = " << K[i] << endl;
	}
	L = K[N-1] - K[0];
	for (int i = N-1, m = 1;i >= 0; i--, m++)
	{
		if (K[N-1] != K[0])
		{
			for (int j = N-1,n = 1; n <= m; n++)
			{
				K[j]--;
			}
			S++;
		}
	}
	cout << S << endl;
}        