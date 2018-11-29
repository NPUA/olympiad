#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int k;

	int s;
	int u;
	cin >> n >> m;
	s = m * n;
	if (n > m)
	{
		u = m;
	}
	else
	{
		u = n;
	}
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int t = 0;
		int a = 0;
		int b = 0;
		cin >> t >> a >> b;
		if (t == 1)
		{
			s = s - (m + n);
		}
		else if (t == 2)
		{

			s = s - 2 * u;
		}
		else
		{
			s = s - (m + n);
			s = s - 2 * u;
		}
	}
	cout << s;
}
