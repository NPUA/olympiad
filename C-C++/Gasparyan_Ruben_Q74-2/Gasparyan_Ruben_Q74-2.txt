#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n,m; 
	int x[100][100];

	do
	{
		cout << "nermuceq dashti chapy, 1-100" << endl;
		cin >> n >> m;
	} while (n < 1 || m>100);

	for (int i = 0; i <= n; i++) 
	{
		for (int j = 0; j <= m; j++) 
		{
			x[i][j] = 0;
		}
	}

	int k;
	do
	{
		cout << "nermuceq spitakneri qanaky 1-10 hat" << endl;
		cin >> k;
	} while (k < 1 || k>10);


	int t = 0,a,b;
	int z = 0, c = 0;
	for (int i = 0; i <= 3; i++) // qareri texi voroshum
	{
		if (t != k)
		{
			if (c == 0)
			{
				if (t >= k)
				{
					break;
				}
				do
				{
					cout << "nermuceq navakneri qanaky 1-3" << endl;
					cin >> z;
					t += z;
				} while (t > k);
					for (int i = 1; i <= z; i++)
					{
						cout << "nermuceq koordinatnery" << endl;
						cout << "nermuceq toxi hamary" << endl;
						cin >> a;
						cout << "nermuceq syan hamary" << endl;
						cin >> b;
						x[a][b] = 1;
					}
			}
			if (c == 1)
			{
				if (t >= k)
				{
					break;
				}
				do
				{
					
					cout << "nermuceq pxeri qanaky" << endl;
					cin >> z;
					t += z;
				} while (t > k);
				for (int i = 1; i <= z; i++)
				{
					cout << "nermuceq koordinatnery" << endl;
					cout << "nermuceq toxi hamary" << endl;
					cin >> a;
					cout << "nermuceq syan hamary" << endl;
					cin >> b;
					x[a][b] = 2;
				}
			}
			if (c == 2)
			{
				if (t >= k)
				{
					break;
				}
				do
				{
					cout << "nermuceq taguhineri qanaky" << endl;
					cin >> z;
					t += z;
				} while (t > k);
				for (int i = 1; i <= z; i++)
				{
					cout << "nermuceq koordinatnery" << endl;
					cout << "nermuceq toxi hamary" << endl;
					cin >> a;
					cout << "nermuceq syan hamary" << endl;
					cin >> b;
					x[a][b] = 3;
				}
			}
			c += 1;
		}
	}

	cout << "duq nermuceciq bolor spitaknery" << endl;

	bool f = false, g = false , h = false ;

	for (int i=0; i<=n; i++)
	{
		if (x[i][j] == 1 || x[i][j] == 3)
		{
			f = true;
		}
		if (x[i][j] == 2)
		{
			g = true;
		}
	}

    return 0;
}

// chavartvac