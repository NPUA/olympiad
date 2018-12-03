//Task - 1
#include <iostream>

using namespace std;

void init(int board[][100], int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			board[i][j] = 0;
}

void printBoard(int board[][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << board[i][j] << " ";
		cout << endl;
	}
}

void straightDirs(int board[][100], int n, int m, int a, int b) {
	for (int i = 0; i < n; i++) 
		if (i != a)
			board[i][b] = 4;
	for (int j = 0; j < m; j++) 
		if (j != b) 
			board[a][j] = 4;	
}

void diagonalDirs(int board[][100], int n, int m, int a, int b) {
	for (int i = 1; i < n * m; i++) {
		if (a - i >= 0 && b - i >= 0)
			board[a - i][b - i] = 4;
		if (a - i >= 0 && b + i < m)
			board[a - i][b + i] = 4;
		if (a + i < n && b - i >= 0)
			board[a + i][b - i] = 4;
		if (a + i < n && b + i < m)
			board[a + i][b + i] = 4;
	}
}

int main() {
	int n, m, k, t, a, b;
	int board[100][100];
	cout << "Enter board size: " << endl;
	cin >> n >> m;
	init(board, n, m);
	cout << "Enter whites' count" << endl;
	cin >> k;
	while (k--) {
		cin >> t >> a >> b;
		board[a - 1][b - 1] = t;
		if (t == 1)
			straightDirs(board, n, m, a - 1, b - 1);
		else if (t == 2)
			diagonalDirs(board, n, m, a - 1, b - 1);
		else if (t == 3) {
			straightDirs(board, n, m, a - 1, b - 1);
			diagonalDirs (board, n, m, a - 1, b - 1);
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!board[i][j])
				count++;
	cout << "Free spaces = " << count << endl;
	system("pause");
}



